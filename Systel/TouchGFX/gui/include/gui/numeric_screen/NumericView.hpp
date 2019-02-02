#ifndef NUMERIC_VIEW_HPP
#define NUMERIC_VIEW_HPP

#include <gui_generated/numeric_screen/NumericViewBase.hpp>
#include <gui/numeric_screen/NumericPresenter.hpp>

class NumericView : public NumericViewBase
{
public:
    NumericView();
    virtual ~NumericView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // NUMERIC_VIEW_HPP
