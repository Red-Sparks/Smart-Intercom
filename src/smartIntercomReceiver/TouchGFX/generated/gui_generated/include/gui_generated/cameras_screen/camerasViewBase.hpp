/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef CAMERASVIEWBASE_HPP
#define CAMERASVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/cameras_screen/CamerasPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/containers/clock/DigitalClock.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/Button.hpp>

class CamerasViewBase : public touchgfx::View<CamerasPresenter>
{
public:
    CamerasViewBase();
    virtual ~CamerasViewBase() {}
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
    touchgfx::Container head;
    touchgfx::Box headBackground;
    touchgfx::DigitalClock clock;
    touchgfx::TextArea header;
    touchgfx::Button buttonToHome;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<CamerasViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // CAMERASVIEWBASE_HPP
