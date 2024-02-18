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


#include <CTGUI/Theme.h>
#include <CTGUI/ThemeStruct.hpp>
#include <CTGUI/RendererDataStruct.hpp>
#include <CTGUI/InternalGlobal.hpp>

#include <TGUI/Exception.hpp>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiTheme* tguiTheme_create(void)
{
    return new tguiTheme(tgui::Theme::create());
}

tguiTheme* tguiTheme_copy(const tguiTheme* theme)
{
    return new tguiTheme(std::make_shared<tgui::Theme>(*theme->This));
}

void tguiTheme_free(tguiTheme* theme)
{
    delete theme;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiTheme_load(tguiTheme* theme, const char* filename)
{
    try
    {
        theme->This->load(filename);
        return true;
    }
    catch (const tgui::Exception& e)
    {
        ctgui::tguiErrorMessage = e.what();
        return false;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRendererData* tguiTheme_getRenderer(tguiTheme* theme, const char* id)
{
    try
    {
        std::shared_ptr<tgui::RendererData> data = theme->This->getRenderer(id);
        return new tguiRendererData(data);
    }
    catch (const tgui::Exception& e)
    {
        ctgui::tguiErrorMessage = e.what();
        return nullptr;
    }
}

void tguiTheme_addRenderer(tguiTheme* theme, const char* id, tguiRendererData* renderer)
{
    theme->This->addRenderer(id, renderer->This);
}

tguiBool tguiTheme_removeRenderer(tguiTheme* theme, const char* id)
{
    return theme->This->removeRenderer(id);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiTheme_getPrimary(const tguiTheme* theme)
{
    return ctgui::fromCppStr(theme->This->getPrimary());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTheme_setDefault(tguiTheme* defaultTheme)
{
    tgui::Theme::setDefault(defaultTheme->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiTheme* tguiTheme_getDefault(void)
{
    return new tguiTheme{tgui::Theme::getDefault()};
}
