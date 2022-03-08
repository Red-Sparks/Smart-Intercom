/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/callscreen_screen/callScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <BitmapDatabase.hpp>

callScreenViewBase::callScreenViewBase() :
    buttonCallback(this, &callScreenViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 272, 480);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    background.setPosition(0, 0, 272, 480);
    background.setColor(touchgfx::Color::getColorFromRGB(162, 242, 240));

    clock.setPosition(76, 20, 120, 50);
    clock.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    clock.setTypedText(touchgfx::TypedText(T___SINGLEUSE_HEZI));
    clock.displayLeadingZeroForHourIndicator(true);
    clock.setDisplayMode(touchgfx::DigitalClock::DISPLAY_24_HOUR_NO_SECONDS);
    clock.setTime24Hour(9, 41, 0);

    userVideo.setXY(8, 76);
    userVideo.setBitmap(touchgfx::Bitmap(BITMAP_PIKA_ID));

    cancelCall.setXY(51, 360);
    cancelCall.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID), touchgfx::Bitmap(BITMAP_OUTLINE_PHONE_DISABLED_BLACK_18DP_ID), touchgfx::Bitmap(BITMAP_OUTLINE_PHONE_DISABLED_BLACK_18DP_ID));
    cancelCall.setIconXY(67, 12);
    cancelCall.setAction(buttonCallback);

    add(__background);
    add(background);
    add(clock);
    add(userVideo);
    add(cancelCall);
}

void callScreenViewBase::setupScreen()
{

}

void callScreenViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &cancelCall)
    {
        //cancelAndReturn
        //When cancelCall clicked change screen to enterScreen
        //Go to enterScreen with no screen transition
        application().gotoenterScreenScreenNoTransition();
    }
}