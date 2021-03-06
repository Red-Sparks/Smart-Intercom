/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef CALLVIEWBASE_HPP
#define CALLVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/call_screen/CallPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/containers/clock/DigitalClock.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>

class CallViewBase : public touchgfx::View<CallPresenter>
{
public:
    CallViewBase();
    virtual ~CallViewBase() {}
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
    touchgfx::ButtonWithIcon buttonCancel;
    touchgfx::Image image1;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<CallViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // CALLVIEWBASE_HPP
