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


#ifndef CTGUI_TABS_RENDERER_H
#define CTGUI_TABS_RENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiTabsRenderer_create(void);
CTGUI_API tguiRenderer* tguiTabsRenderer_copy(const tguiRenderer* renderer);

CTGUI_API void tguiTabsRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders);
CTGUI_API tguiOutline* tguiTabsRenderer_getBorders(const tguiRenderer* renderer);

CTGUI_API void tguiTabsRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTabsRenderer_getBackgroundColor(const tguiRenderer* renderer);
CTGUI_API void tguiTabsRenderer_setBackgroundColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTabsRenderer_getBackgroundColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiTabsRenderer_setSelectedBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTabsRenderer_getSelectedBackgroundColor(const tguiRenderer* renderer);
CTGUI_API void tguiTabsRenderer_setSelectedBackgroundColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTabsRenderer_getSelectedBackgroundColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiTabsRenderer_setBackgroundColorDisabled(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTabsRenderer_getBackgroundColorDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiTabsRenderer_setTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTabsRenderer_getTextColor(const tguiRenderer* renderer);
CTGUI_API void tguiTabsRenderer_setTextColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTabsRenderer_getTextColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiTabsRenderer_setSelectedTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTabsRenderer_getSelectedTextColor(const tguiRenderer* renderer);
CTGUI_API void tguiTabsRenderer_setSelectedTextColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTabsRenderer_getSelectedTextColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiTabsRenderer_setTextColorDisabled(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTabsRenderer_getTextColorDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiTabsRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTabsRenderer_getBorderColor(const tguiRenderer* renderer);

CTGUI_API void tguiTabsRenderer_setTextureTab(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiTabsRenderer_getTextureTab(const tguiRenderer* renderer);
CTGUI_API void tguiTabsRenderer_setTextureTabHover(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiTabsRenderer_getTextureTabHover(const tguiRenderer* renderer);
CTGUI_API void tguiTabsRenderer_setTextureSelectedTab(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiTabsRenderer_getTextureSelectedTab(const tguiRenderer* renderer);
CTGUI_API void tguiTabsRenderer_setTextureSelectedTabHover(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiTabsRenderer_getTextureSelectedTabHover(const tguiRenderer* renderer);
CTGUI_API void tguiTabsRenderer_setTextureDisabledTab(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiTabsRenderer_getTextureDisabledTab(const tguiRenderer* renderer);

CTGUI_API void tguiTabsRenderer_setDistanceToSide(tguiRenderer* renderer, float distanceToSide);
CTGUI_API float tguiTabsRenderer_getDistanceToSide(const tguiRenderer* renderer);

#endif // CTGUI_TABS_RENDERER_H

