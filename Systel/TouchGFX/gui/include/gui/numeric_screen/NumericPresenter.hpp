#ifndef NUMERIC_PRESENTER_HPP
#define NUMERIC_PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class NumericView;

class NumericPresenter : public Presenter, public ModelListener
{
public:
    NumericPresenter(NumericView& v);

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

    virtual ~NumericPresenter() {};

private:
    NumericPresenter();

    NumericView& view;
};


#endif // NUMERIC_PRESENTER_HPP
