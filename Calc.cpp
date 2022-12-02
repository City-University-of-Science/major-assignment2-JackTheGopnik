#include <iostream>
#include <math.h>

class calculator_entity
{
    private:
    float a,b;
    public:

    void input_getter()
    {
    }

    float add()
    {
        return a+b;
    }

    float subtract()
    {
        return a-b;
    }
    
    float multiply()
    {
        return a*b;
    }

    float division()
    {
        if (b==0)
        {
            std::cout<<"Division By Zero, UNDEFINED!"<<std::endl;
            return NULL;
        }
    }
    
};
