#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

class calculator_entity
{
    private:
    float a=0,b=0;
    float pi = 3.14;
    public:

    void input_getter()
    {
        std::cout<<"Enter the first value";
        std::cin>>a;
        std::cout<<"Enter the second value";
        std::cin>>b;

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
    float squroot()
    {
        int choice;
        std::cout<<"Which Number would you like to find the Square root of: \n first value (1) or second value (2)? \n";
        std::cin>>choice;
        switch (choice)
        {
        case 1:
            std::cout<<"The square root of "<<a<<"is: ";
            return sqrt(a);
            break;
    
        case 2:
            std::cout<<"The square root of "<<b<<"is: ";
            return sqrt(b);
            break;
                
        default:
            std::cout<<"You entered an incorrect value, try again.\n";
            break;
        }
    }

    float cos(float val)
    {
        float c = cos(val);
        return c;
    }

        float tan(float val)
    {
        float t = tan(val);
        return t;
    }

        float sin(float val)
    {
        float s = sin(val);
        return s;
    }

        float cosa(float val)
    {
        float ac = acos(val);
        return ac;
    }

        float tana(float val)
    {
        float at = atan(val);
        return at;
    }

        float sina(float val)
    {
        float as = asin(val);
        return as;
    }

    float hcos(float val)
    {
        float ch = cosh(val);
        return ch;
    }

        float htan(float val)
    {
        float th = tanh(val);
        return th;
    }

        float hsin(float val)
    {
        float sh = sinh(val);
        return sh;
    }

    float natural_log(double value)
    {
        double nl = log(value);
        return nl;
    }

    float common_log(double value)
    {
        double cl = log10(value);
        return cl;
    }
};
