#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();

#ifndef SIMULATOR
    virtual void sendTemperatureToDisplay(unsigned int temp);
#endif

protected:
    ModelListener* modelListener;
};

#endif // MODEL_HPP
