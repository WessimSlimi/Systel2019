#ifndef SPLASH_PRESENTER_HPP
#define SPLASH_PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class SplashView;

class SplashPresenter : public Presenter, public ModelListener
{
public:
    SplashPresenter(SplashView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~SplashPresenter() {};

private:
    SplashPresenter();

    SplashView& view;
};


#endif // SPLASH_PRESENTER_HPP
