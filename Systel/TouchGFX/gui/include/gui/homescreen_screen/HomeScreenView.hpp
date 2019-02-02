#ifndef HOMESCREEN_VIEW_HPP
#define HOMESCREEN_VIEW_HPP

#include <gui_generated/homescreen_screen/HomeScreenViewBase.hpp>
#include <gui/homescreen_screen/HomeScreenPresenter.hpp>

class HomeScreenView : public HomeScreenViewBase
{
public:
    HomeScreenView();
    virtual ~HomeScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // HOMESCREEN_VIEW_HPP
