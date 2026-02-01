// License: Apache 2.0. See LICENSE file in root directory.
// Copyright(c) 2025 RealSense, Inc. All Rights Reserved.
#pragma once


namespace rs2
{
    struct textual_icon
    {
        template<typename CharT, std::size_t N>
        explicit constexpr textual_icon(const CharT(&unicode_icon)[N])
            : _icon{ * reinterpret_cast<const char*>(&unicode_icon[0])
                   , * reinterpret_cast<const char*>(&unicode_icon[1])
                   , * reinterpret_cast<const char*>(&unicode_icon[2])
                   , * reinterpret_cast<const char*>(&unicode_icon[3]), '\0' }
        {
        }

        operator const char* () const
        {
            return _icon.data();
        }
    private:
        std::array<char, 5> _icon;
    };

    inline std::ostream& operator<<(std::ostream& os, const textual_icon& i)
    {
        return os << static_cast<const char*>(i);
    }

    namespace textual_icons
    {
        // A note to a maintainer - preserve order when adding values to avoid duplicates
        static const textual_icon search{ "\uf002" };
        static const textual_icon file_movie{ "\uf008" };
        static const textual_icon check{ "\uf00c" };
        static const textual_icon times{ "\uf00d" };
        static const textual_icon power_off{ "\uf011" };
        static const textual_icon cog{ "\uf013" };
        static const textual_icon download{ "\uf019" };
        static const textual_icon envelope{ "\uf01c" };
        static const textual_icon rotate{ "\uf01e" };
        static const textual_icon refresh{ "\uf021" };
        static const textual_icon lock{ "\uf023" };
        static const textual_icon camera{ "\uf030" };
        static const textual_icon video_camera{ "\uf03d" };
        static const textual_icon tint{ "\uf043" };
        static const textual_icon edit{ "\uf044" };
        static const textual_icon step_backward{ "\uf048" };
        static const textual_icon play{ "\uf04b" };
        static const textual_icon pause{ "\uf04c" };
        static const textual_icon stop{ "\uf04d" };
        static const textual_icon step_forward{ "\uf051" };
        static const textual_icon plus_circle{ "\uf055" };
        static const textual_icon times_circle{ "\uf057" };
        static const textual_icon question_mark{ "\uf059" };
        static const textual_icon info_circle{ "\uf05a" };
        static const textual_icon arrow_left{ "\uf060" };
        static const textual_icon arrow_right{ "\uf061" };
        static const textual_icon arrow_up{ "\uf062" };
        static const textual_icon arrow_down{ "\uf063" };
        static const textual_icon compress{ "\uf066" };
        static const textual_icon minus{ "\uf068" };
        static const textual_icon eye_slash{ "\uf070" };
        static const textual_icon exclamation_triangle{ "\uf071" };
        static const textual_icon chevron_down{ "\uf078" };
        static const textual_icon shopping_cart{ "\uf07a" };
        static const textual_icon folder_open{ "\uf07c" };
        static const textual_icon bar_chart{ "\uf080" };
        static const textual_icon external_link{ "\uf08e" };
        static const textual_icon trophy{ "\uF091" };
        static const textual_icon upload{ "\uf093" };
        static const textual_icon square_o{ "\uf096" };
        static const textual_icon unlock{ "\uf09c" };
        static const textual_icon list_ul{ "\uf0ae" };
        static const textual_icon up_down_left_right{ "\uf0b2" };
        static const textual_icon save{ "\uf0c7" };
        static const textual_icon check_square{ "\uf0c8" };
        static const textual_icon bars{ "\uf0c9" };
        static const textual_icon sort_asc{ "\uf0d0" };
        static const textual_icon caret_down{ "\uf0d7" };
        static const textual_icon repeat{ "\uf0e2" };
        static const textual_icon angle_double_up{ "\uf102" };
        static const textual_icon angle_double_down{ "\uf103" };
        static const textual_icon angle_right{ "\uf106" };
        static const textual_icon angle_left{ "\uf107" };
        static const textual_icon circle{ "\uf111" };
        static const textual_icon minus_square_o{ "\uf120" };
        static const textual_icon circle_chevron_left{ "\uf137" };
        static const textual_icon circle_chevron_right{ "\uf138" };
        static const textual_icon circle_chevron_up{ "\uf139" };
        static const textual_icon circle_chevron_down{ "\uf13a" };
        static const textual_icon ellipsis_h{ "\uf141" };
        static const textual_icon check_square_o{ "\uf14a" };
        static const textual_icon cube{ "\uf1b2" };
        static const textual_icon cubes{ "\uf1b3" };
        static const textual_icon codepen{ "\uf1cb" };
        static const textual_icon wifi{ "\uf1eb" };
        static const textual_icon toggle_off{ "\uf204" };
        static const textual_icon toggle_on{ "\uf205" };
        static const textual_icon connectdevelop{ "\uf20e" };
        static const textual_icon hourglass{ "\uf251" };
        static const textual_icon industry{ "\uf275" };
        static const textual_icon usb{ "\uf287" };
        static const textual_icon braille{ "\uf2a1" };
        static const textual_icon window_maximize{ "\uf2d0" };
        static const textual_icon window_restore{ "\uf2d2" };
        static const textual_icon microchip{ "\uf2db" };
        static const textual_icon ruler{ "\uf545" };
        static const textual_icon palette{ "\uf576" };
        static const textual_icon adjust{ "\uf5aa" };
        static const textual_icon grid_6{ "\uf58d" };
        static const textual_icon draw_polygon{ "\uf5ee" };
    }

}
