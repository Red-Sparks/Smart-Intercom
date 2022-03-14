/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef HOMEVIEWBASE_HPP
#define HOMEVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/home_screen/HomePresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/containers/clock/DigitalClock.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>
#include <touchgfx/widgets/ToggleButton.hpp>

class HomeViewBase : public touchgfx::View<HomePresenter>
{
public:
    HomeViewBase();
    virtual ~HomeViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image background;
    touchgfx::Container silenceMode;
    touchgfx::Box silenceBackground;
    touchgfx::Image badTimeIcon;
    touchgfx::Container head;
    touchgfx::Box headBackground;
    touchgfx::DigitalClock clock;
    touchgfx::TextArea header;
    touchgfx::Container body;
    touchgfx::Container doors;
    touchgfx::TextArea doorsText;
    touchgfx::ButtonWithIcon doorsIcon;
    touchgfx::Container cameras;
    touchgfx::TextArea camerasText;
    touchgfx::ButtonWithIcon camerasIcon;
    touchgfx::Container recordings;
    touchgfx::TextArea recordingsText;
    touchgfx::ButtonWithIcon recordingsIcon;
    touchgfx::Container settings;
    touchgfx::TextArea settingsText;
    touchgfx::ButtonWithIcon settingsIcon;
    touchgfx::Container silencePanel;
    touchgfx::TextArea silenceText;
    touchgfx::ToggleButton toggleSilence;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<HomeViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // HOMEVIEWBASE_HPP