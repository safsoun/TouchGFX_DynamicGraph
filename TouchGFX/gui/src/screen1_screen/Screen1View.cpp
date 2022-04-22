#include <gui/screen1_screen/Screen1View.hpp>
#include <math.h>

Screen1View::Screen1View()
{
#ifdef SIMULATOR
    tickcounter = 0;
#endif
}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

#ifdef SIMULATOR
void Screen1View::handleTickEvent()
{
    tickcounter++;

    if (tickcounter % 3 == 0)
    {
        dynamicGraph1.addDataPoint((sinf(tickcounter * 0.07f) + 1) * 30);
    }
}
#else

void Screen1View::sendTemperatureToDisplay(unsigned int temp)
{
	dynamicGraph1.addDataPoint((float)temp);
}
#endif
