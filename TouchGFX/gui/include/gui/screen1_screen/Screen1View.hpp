#ifndef SCREEN1VIEW_HPP
#define SCREEN1VIEW_HPP

#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>

class Screen1View : public Screen1ViewBase
{
public:
    Screen1View();
    virtual ~Screen1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

#ifndef SIMULATOR
    virtual void  sendTemperatureToDisplay(unsigned int temp);
#else
    void handleTickEvent();
#endif

protected:
#ifdef SIMULATOR
    int tickcounter;
#endif
};

#endif // SCREEN1VIEW_HPP
