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


#ifndef CTGUI_THEME_H
#define CTGUI_THEME_H

#include <CTGUI/Config.h>

CTGUI_API tguiTheme* tguiTheme_create(void);
CTGUI_API tguiTheme* tguiTheme_copy(const tguiTheme* theme);
CTGUI_API void tguiTheme_free(tguiTheme* theme);

CTGUI_API tguiBool tguiTheme_load(tguiTheme* theme, const char* filename);

CTGUI_API tguiRendererData* tguiTheme_getRenderer(tguiTheme* theme, const char* id);
CTGUI_API void tguiTheme_addRenderer(tguiTheme* theme, const char* id, tguiRendererData* renderer);
CTGUI_API tguiBool tguiTheme_removeRenderer(tguiTheme* theme, const char* id);

CTGUI_API tguiUtf32 tguiTheme_getPrimary(const tguiTheme* theme);

CTGUI_API void tguiTheme_setDefault(tguiTheme* defaultTheme);
CTGUI_API tguiTheme* tguiTheme_getDefault(void);

#endif // CTGUI_THEME_H

