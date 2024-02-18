/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2024 Bruno Van de Velde (vdv_b@tgui.eu)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <CTGUI/ToolTip.h>
#include <TGUI/ToolTip.hpp>
#include <TGUI/Duration.hpp>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiToolTip_setInitialDelay(tguiDuration delay)
{
    tgui::ToolTip::setInitialDelay(std::chrono::nanoseconds(delay.nanoseconds));
}

tguiDuration tguiToolTip_getInitialDelay()
{
    tguiDuration delay;
    delay.nanoseconds = static_cast<tguiInt64>(std::chrono::nanoseconds(tgui::ToolTip::getInitialDelay()).count());
    return delay;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiToolTip_setDistanceToMouse(tguiVector2f distance)
{
    tgui::ToolTip::setDistanceToMouse({distance.x, distance.y});
}

tguiVector2f tguiToolTip_getDistanceToMouse()
{
    tgui::Vector2f distance = tgui::ToolTip::getDistanceToMouse();
    return {distance.x, distance.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiToolTip_setShowOnDisabledWidget(tguiBool show)
{
    tgui::ToolTip::setShowOnDisabledWidget(show != 0);
}

tguiBool tguiToolTip_getShowOnDisabledWidget()
{
    return tgui::ToolTip::getShowOnDisabledWidget();
}
