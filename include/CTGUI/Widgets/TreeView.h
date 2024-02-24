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


#ifndef CTGUI_TREE_VIEW_H
#define CTGUI_TREE_VIEW_H

#include <CTGUI/Widget.h>

CTGUI_API tguiWidget* tguiTreeView_create(void);

CTGUI_API tguiBool tguiTreeView_addItem(tguiWidget* widget, tguiUtf32* hierarchy, unsigned int hierarchyLength, tguiBool createParents);

CTGUI_API void tguiTreeView_expand(tguiWidget* widget, tguiUtf32* hierarchy, unsigned int hierarchyLength);
CTGUI_API void tguiTreeView_collapse(tguiWidget* widget, tguiUtf32* hierarchy, unsigned int hierarchyLength);

CTGUI_API void tguiTreeView_expandAll(tguiWidget* widget);
CTGUI_API void tguiTreeView_collapseAll(tguiWidget* widget);

CTGUI_API tguiBool tguiTreeView_selectItem(tguiWidget* widget, tguiUtf32* hierarchy, unsigned int hierarchyLength);

CTGUI_API tguiBool tguiTreeView_removeItem(tguiWidget* widget, tguiUtf32* hierarchy, unsigned int hierarchyLength, tguiBool removeParentsWhenEmpty);
CTGUI_API void tguiTreeView_removeAllItems(tguiWidget* widget);

CTGUI_API void tguiTreeView_deselectItem(tguiWidget* widget);

CTGUI_API void tguiTreeView_setItemHeight(tguiWidget* widget, unsigned int itemHeight);
CTGUI_API unsigned int tguiTreeView_getItemHeight(const tguiWidget* widget);

CTGUI_API void tguiTreeView_setVerticalScrollbarValue(tguiWidget* widget, unsigned int value);
CTGUI_API unsigned int tguiTreeView_getVerticalScrollbarValue(const tguiWidget* widget);

CTGUI_API void tguiTreeView_setHorizontalScrollbarValue(tguiWidget* widget, unsigned int value);
CTGUI_API unsigned int tguiTreeView_getHorizontalScrollbarValue(const tguiWidget* widget);

#endif // CTGUI_TREE_VIEW_H

