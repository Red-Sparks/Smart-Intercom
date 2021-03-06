/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef FRONTENDAPPLICATIONBASE_HPP
#define FRONTENDAPPLICATIONBASE_HPP

#include <mvp/MVPApplication.hpp>
#include <gui/model/Model.hpp>

class FrontendHeap;

class FrontendApplicationBase : public touchgfx::MVPApplication
{
public:
    FrontendApplicationBase(Model& m, FrontendHeap& heap);
    virtual ~FrontendApplicationBase() { }

    // Home
    void gotoHomeScreenNoTransition();

    void gotoHomeScreenSlideTransitionWest();

    // Settings
    void gotoSettingsScreenSlideTransitionEast();

    // Recordings
    void gotoRecordingsScreenSlideTransitionEast();

    // Cameras
    void gotoCamerasScreenSlideTransitionEast();

    // Doors
    void gotoDoorsScreenSlideTransitionEast();

protected:
    touchgfx::Callback<FrontendApplicationBase> transitionCallback;
    FrontendHeap& frontendHeap;
    Model& model;

    // Home
    void gotoHomeScreenNoTransitionImpl();

    void gotoHomeScreenSlideTransitionWestImpl();

    // Settings
    void gotoSettingsScreenSlideTransitionEastImpl();

    // Recordings
    void gotoRecordingsScreenSlideTransitionEastImpl();

    // Cameras
    void gotoCamerasScreenSlideTransitionEastImpl();

    // Doors
    void gotoDoorsScreenSlideTransitionEastImpl();
};

#endif // FRONTENDAPPLICATIONBASE_HPP
