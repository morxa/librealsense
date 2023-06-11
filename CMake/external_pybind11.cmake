cmake_minimum_required(VERSION 3.10)

find_package(Python COMPONENTS Interpreter Development REQUIRED)
find_package(pybind11 REQUIRED)

set(PYTHON_INSTALL_DIR "${Python_SITEARCH}/pyrealsense2" CACHE PATH "Installation directory for Python libraries")

# This function overrides "pybind11_add_module" function,  arguments is same as "pybind11_add_module" arguments
# pybind11_add_module(<name> SHARED [file, file2, ...] )
# Must be declared after pybind11 configuration above
function( pybind11_add_module project_name library_type ...)

    # message( STATUS "adding python module --> ${project_name}" 
    
    # "_pybind11_add_module" is calling the origin pybind11 function    
    _pybind11_add_module( ${ARGV})

    # Force Pybind11 not to share pyrealsense2 resources with other pybind modules.
    # With this definition we force the ABI version to be unique and not risk crashes on different modules.
    # (workaround for RS5-10582; see also https://github.com/pybind/pybind11/issues/2898)
    # NOTE: this workaround seems to be needed for debug compilations only
    target_compile_definitions( ${project_name} PRIVATE -DPYBIND11_COMPILER_TYPE=\"_${project_name}_abi\" )

    target_include_directories( ${project_name} PRIVATE "${CMAKE_BINARY_DIR}/third-party/pybind11-json/include" )

endfunction()
