/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef KEYVIEWBASE_HPP
#define KEYVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/key_screen/KeyPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/containers/clock/DigitalClock.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/Button.hpp>

class KeyViewBase : public touchgfx::View<KeyPresenter>
{
public:
    KeyViewBase();
    virtual ~KeyViewBase() {}
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
    touchgfx::Container header;
    touchgfx::Box headerBackground;
    touchgfx::DigitalClock clock;
    touchgfx::TextArea nameOfPage;
    touchgfx::TextArea textHelp;
    touchgfx::Button buttonToUnlock;
    touchgfx::Button buttonBack;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<KeyViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // KEYVIEWBASE_HPP
