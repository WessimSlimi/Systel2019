#ifndef SPEECH_VIEW_HPP
#define SPEECH_VIEW_HPP

#include <gui_generated/speech_screen/SpeechViewBase.hpp>
#include <gui/speech_screen/SpeechPresenter.hpp>

class SpeechView : public SpeechViewBase
{
public:
    SpeechView();
    virtual ~SpeechView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SPEECH_VIEW_HPP
