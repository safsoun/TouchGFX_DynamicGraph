#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#ifndef SIMULATOR
#include "cmsis_os.h"
#include "queue.h"

extern "C"
osMessageQueueId_t adcValueHandle;
extern xQueueHandle testq;
#endif
#ifndef SIMULATOR
static uint32_t temperature = 0;
#endif
Model::Model() : modelListener(0)
{

}

void Model::tick()
{
#ifndef SIMULATOR
	  if (xQueueReceive(testq, &temperature, 0) == pdTRUE)
	  {
		    sendTemperatureToDisplay(temperature);
	  }
#if 0
    /* Get the message from the queue */
    if(osMessageQueueGet (adcValueHandle, &temperature, NULL, 0) != osOK)
    {
		while(1);
    }
#endif

#endif
}

#ifndef SIMULATOR
void Model::sendTemperatureToDisplay(unsigned int temp)
{
    modelListener->sendTemperatureToDisplay(temp);
}
#endif
