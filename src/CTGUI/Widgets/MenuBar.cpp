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


#include <CTGUI/Widgets/MenuBar.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/MenuBar.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::MenuBar>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiMenuBar_create(void)
{
    return ctgui::addWidgetRef(tgui::MenuBar::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBar_addMenu(tguiWidget* widget, tguiUtf32 text)
{
    DOWNCAST(widget->This)->addMenu(ctgui::toCppStr(text));
}

tguiBool tguiMenuBar_addMenuItem(tguiWidget* widget, tguiUtf32 menu, tguiUtf32 text)
{
    return DOWNCAST(widget->This)->addMenuItem(ctgui::toCppStr(menu), ctgui::toCppStr(text));
}

tguiBool tguiMenuBar_addMenuItemToLastMenu(tguiWidget* widget, tguiUtf32 text)
{
    return DOWNCAST(widget->This)->addMenuItem(ctgui::toCppStr(text));
}

tguiBool tguiMenuBar_addMenuItemHierarchy(tguiWidget* widget, tguiUtf32* hierarcy, unsigned int hierarchyLength, tguiBool createParents)
{
    std::vector<tgui::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (unsigned int i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(ctgui::toCppStr(hierarcy[i]));

    return DOWNCAST(widget->This)->addMenuItem(std::move(convertedHierarchy), createParents != 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiMenuBar_removeMenu(tguiWidget* widget, tguiUtf32 menu)
{
    return DOWNCAST(widget->This)->removeMenu(ctgui::toCppStr(menu));
}

tguiBool tguiMenuBar_removeMenuItem(tguiWidget* widget, tguiUtf32 menu, tguiUtf32 menuItem)
{
    return DOWNCAST(widget->This)->removeMenuItem(ctgui::toCppStr(menu), ctgui::toCppStr(menuItem));
}

tguiBool tguiMenuBar_removeMenuItemHierarchy(tguiWidget* widget, tguiUtf32* hierarcy, unsigned int hierarchyLength, tguiBool removeParentsWhenEmpty)
{
    std::vector<tgui::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (unsigned int i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(ctgui::toCppStr(hierarcy[i]));

    return DOWNCAST(widget->This)->addMenuItem(convertedHierarchy, removeParentsWhenEmpty != 0);
}

void tguiMenuBar_removeAllMenus(tguiWidget* widget)
{
    DOWNCAST(widget->This)->removeAllMenus();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiMenuBar_setMenuEnabled(tguiWidget* widget, tguiUtf32 menu, tguiBool enabled)
{
    return DOWNCAST(widget->This)->setMenuEnabled(ctgui::toCppStr(menu), enabled != 0);
}

tguiBool tguiMenuBar_getMenuEnabled(tguiWidget* widget, tguiUtf32 menu)
{
    return DOWNCAST(widget->This)->getMenuEnabled(ctgui::toCppStr(menu));
}

tguiBool tguiMenuBar_setMenuItemEnabled(tguiWidget* widget, tguiUtf32 menu, tguiUtf32 menuItem, tguiBool enabled)
{
    return DOWNCAST(widget->This)->setMenuItemEnabled(ctgui::toCppStr(menu), ctgui::toCppStr(menuItem), enabled != 0);
}

tguiBool tguiMenuBar_getMenuItemEnabled(tguiWidget* widget, tguiUtf32 menu, tguiUtf32 menuItem)
{
    return DOWNCAST(widget->This)->getMenuItemEnabled(ctgui::toCppStr(menu), ctgui::toCppStr(menuItem));
}

tguiBool tguiMenuBar_setMenuItemEnabledHierarchy(tguiWidget* widget, tguiUtf32* hierarcy, unsigned int hierarchyLength, tguiBool enabled)
{
    std::vector<tgui::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (unsigned int i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(ctgui::toCppStr(hierarcy[i]));

    return DOWNCAST(widget->This)->setMenuItemEnabled(convertedHierarchy, enabled != 0);
}

tguiBool tguiMenuBar_getMenuItemEnabledHierarchy(tguiWidget* widget, tguiUtf32* hierarcy, unsigned int hierarchyLength)
{
    std::vector<tgui::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (unsigned int i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(ctgui::toCppStr(hierarcy[i]));

    return DOWNCAST(widget->This)->getMenuItemEnabled(convertedHierarchy);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBar_setMinimumSubMenuWidth(tguiWidget* widget, float minimumWidth)
{
    DOWNCAST(widget->This)->setMinimumSubMenuWidth(minimumWidth);
}

float tguiMenuBar_getMinimumSubMenuWidth(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getMinimumSubMenuWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBar_setInvertedMenuDirection(tguiWidget* widget, tguiBool invertDirection)
{
    DOWNCAST(widget->This)->setInvertedMenuDirection(invertDirection != 0);
}

tguiBool tguiMenuBar_getInvertedMenuDirection(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getInvertedMenuDirection();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBar_closeMenu(tguiWidget* widget)
{
    DOWNCAST(widget->This)->closeMenu();
}
