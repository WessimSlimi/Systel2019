#ifndef ANALOG_VIEW_HPP
#define ANALOG_VIEW_HPP

#include <gui_generated/analog_screen/AnalogViewBase.hpp>
#include <gui/analog_screen/AnalogPresenter.hpp>

class AnalogView : public AnalogViewBase
{
public:
    AnalogView();
    virtual ~AnalogView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // ANALOG_VIEW_HPP
