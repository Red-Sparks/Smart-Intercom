#include <gui/smskey_screen/SmsKeyView.hpp>
#include <cstring>

Unicode::UnicodeChar keyboardBuffer[2][18]; // add
uint8_t keyboardSelection = 0; // add

SmsKeyView::SmsKeyView()
{
	keyboard.setPosition(80, 16, 320, 240); // add
	keyboardContainer.add(keyboard); // add
}

void SmsKeyView::setupScreen()
{
    SmsKeyViewBase::setupScreen();
}

void SmsKeyView::tearDownScreen()
{
    SmsKeyViewBase::tearDownScreen();
}

void SmsKeyView::keyboardSelected(uint8_t value)
{
	keyboardSelection = value;
}

void SmsKeyView::getBuffer() // add
{
	Unicode::UnicodeChar* buff = keyboard.getBuffer();
	Unicode::strncpy(keyboardBuffer[keyboardSelection], buff, Unicode::strlen(buff) + 1);
}

void SmsKeyView::updateScreen()
{
	if(Unicode::strlen(keyboardBuffer[0]) > 0)
	{
		memset(&areaForNumberBuffer, 0, AREAFORNUMBER_SIZE);
		Unicode::strncpy(areaForNumberBuffer, keyboardBuffer[0], AREAFORNUMBER_SIZE - 1);
		areaForNumberBuffer[AREAFORNUMBER_SIZE-1] = '\0'; // make sure last index is null
		areaForNumber.invalidate();
	}
	if(Unicode::strlen(keyboardBuffer[1]) > 0)
	{
		memset(&areaForSmsBuffer, 0, AREAFORSMS_SIZE);
		Unicode::strncpy(areaForSmsBuffer, keyboardBuffer[1], AREAFORSMS_SIZE - 1);
		areaForSmsBuffer[AREAFORSMS_SIZE-1] = '\0'; // make sure last index is null
		areaForSms.invalidate();
	}
}

void SmsKeyView::clearBuffer()
{
	keyboard.clearBuffer();
}

void SmsKeyView::updateTime(uint8_t hour, uint8_t minute, uint8_t second)
{
	clock.setTime24Hour(hour, minute, second);
}
