cmake_minimum_required(VERSION 3.10)

find_package(Python COMPONENTS Interpreter Development REQUIRED)
find_package(pybind11 REQUIRED)

set(PYTHON_INSTALL_DIR "${Python_SITEARCH}/pyrealsense2" CACHE PATH "Installation directory for Python libraries")
