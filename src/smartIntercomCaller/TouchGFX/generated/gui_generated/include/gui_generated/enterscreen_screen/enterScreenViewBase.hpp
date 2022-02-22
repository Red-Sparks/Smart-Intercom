/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef ENTERSCREENVIEWBASE_HPP
#define ENTERSCREENVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/enterscreen_screen/enterScreenPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>
#include <touchgfx/containers/clock/DigitalClock.hpp>
#include <touchgfx/widgets/BoxWithBorder.hpp>
#include <touchgfx/widgets/TextArea.hpp>

class enterScreenViewBase : public touchgfx::View<enterScreenPresenter>
{
public:
    enterScreenViewBase();
    virtual ~enterScreenViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box background;
    touchgfx::Container keys;
    touchgfx::ButtonWithLabel btn1;
    touchgfx::ButtonWithLabel btn2;
    touchgfx::ButtonWithLabel btn3;
    touchgfx::ButtonWithLabel btn4;
    touchgfx::ButtonWithLabel btn5;
    touchgfx::ButtonWithLabel btn6;
    touchgfx::ButtonWithLabel btn7;
    touchgfx::ButtonWithLabel btn8;
    touchgfx::ButtonWithLabel btn9;
    touchgfx::ButtonWithLabel btn0;
    touchgfx::ButtonWithIcon backspace;
    touchgfx::ButtonWithIcon call;
    touchgfx::DigitalClock clock;
    touchgfx::Container enterWindow;
    touchgfx::BoxWithBorder enterBackground;
    touchgfx::TextArea textArea;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<enterScreenViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // ENTERSCREENVIEWBASE_HPP