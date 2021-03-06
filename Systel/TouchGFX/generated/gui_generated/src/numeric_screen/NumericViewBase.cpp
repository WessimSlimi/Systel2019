/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/numeric_screen/NumericViewBase.hpp>
#include "BitmapDatabase.hpp"
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>

NumericViewBase::NumericViewBase() :
    flexButtonCallback(this, &NumericViewBase::flexButtonCallbackHandler)
{
    CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    BackgroundContainer.setPosition(0, 0, 480, 272);

    Background.setBitmap(Bitmap(BITMAP_WEBP_NET_RESIZEIMAGE_ID));
    Background.setPosition(0, 0, 480, 272);
    Background.setOffset(0, 0);
    BackgroundContainer.add(Background);

    Shadow_1.setPosition(0, 0, 480, 272);
    Shadow_1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 9, 255));
    Shadow_1.setAlpha(48);
    BackgroundContainer.add(Shadow_1);

    line1.setPosition(0, 42, 480, 18);
    line1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    line1.setPainter(line1Painter);
    line1.setStart(0, 5);
    line1.setEnd(480, 5);
    line1.setLineWidth(3);
    line1.setLineEndingStyle(Line::BUTT_CAP_ENDING);
    line1.setAlpha(81);
    BackgroundContainer.add(line1);

    TopBar.setPosition(0, 0, 480, 50);

    supcom1.setXY(330, -9);
    supcom1.setBitmap(Bitmap(BITMAP_SUPCOM_ID));
    TopBar.add(supcom1);

    NumericButton.setIconBitmaps(Bitmap(BITMAP_BLUE_ICONS_HOME_48_ID), Bitmap(BITMAP_BLUE_ICONS_HOME_48_ID));
    NumericButton.setIconXY(0, 0);
    NumericButton.setText(TypedText(T_SINGLEUSEID5));
    NumericButton.setTextPosition(49, 6, 186, 50);
    NumericButton.setTextColors(touchgfx::Color::getColorFrom24BitRGB(63, 62, 69), touchgfx::Color::getColorFrom24BitRGB(63, 62, 69));
    NumericButton.setPosition(7, 0, 186, 50);
    NumericButton.setAction(flexButtonCallback);
    TopBar.add(NumericButton);

    add(BackgroundContainer);
    add(TopBar);
}

void NumericViewBase::setupScreen()
{

}

void NumericViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &NumericButton)
    {
        //Interaction1
        //When NumericButton clicked change screen to HomeScreen
        //Go to HomeScreen with no screen transition
        application().gotoHomeScreenScreenNoTransition();
    }
}
