/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SETTINGSVIEWBASE_HPP
#define SETTINGSVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/settings_screen/settingsPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/containers/clock/DigitalClock.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>

class settingsViewBase : public touchgfx::View<settingsPresenter>
{
public:
    settingsViewBase();
    virtual ~settingsViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Container head;
    touchgfx::Box headBackground;
    touchgfx::DigitalClock clock;
    touchgfx::TextArea header;
    touchgfx::Container body;
    touchgfx::Box background;
    touchgfx::ButtonWithIcon toHome;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<settingsViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // SETTINGSVIEWBASE_HPP