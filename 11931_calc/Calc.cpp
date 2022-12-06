#include <iostream>
#include <math.h>

class math_calculator_scientific {
double x, y; 
public:

void value_setter()
{
double xc284, xc285; //actual ommitted addresses of where the values are stored in memory :P    
std::cout<<"enter the first number:"<<std::endl;
std::cin>>xc284;
std::cout<<"enter the second number:"<<std::endl;
std::cin>>xc285;
x = xc284;
y = xc285;

}

double add ()
{
    return x + y;
}

double subtract ()
{
    return x - y;
}

double multiply ()
{
    return x * y;
}

double divide ()
{
    if(y==0)
    {
     std::cout<<"You Entered a Null value as the dividand, Undefined.\n";

    }
    return x / y;
}

double sqroot ()
{
    return sqrt(x);
}

double log_simple ()
{
    return log(x);
}

double log_base ()
{
    return log10(x);
}

double sine ()
{
    return sin(x);
}

double cosine ()
{
    return cos(x);
}

double tangent ()
{
    return tan(x);
}

double arc_sine ()
{
    return asin(x);
}

double arc_cosine ()
{
    return acos(x);
}

double arc_tan ()
{
    return atan(x);
}

double sineh ()
{
    return sinh(x);
}

double cosineh ()
{
    return cosh(x);
}

double tangenth ()
{
    return tanh(x);
}

double cube ()
{
    return x*x*x;
}

double power ()
{
    return pow(x,y);
}

double average ()
{
    return (x+y)/2;
}

};

int main()
{

math_calculator_scientific cal;
int operation;
std::cout<<"enter the operation you would like to perform:\n1 for addition , 2 for subtraction,3 for multiplication, 4 for division,";
std::cout<<"1 for square root, 2 for natural log, 3 for log to the base 10,";
std::cout<<"\n5 for sin , 6 for cos, 7 for tan,";
std::cout<<"\n8 for asin(arcsine), 9 for acos(arccosine), 10 for atan(arctangent),";
std::cout<<"\n11 for sinh(sine hyperbolic), 12 for cosh(cos hyperbolic), 13 tanh(tan hyperbolic)";
std::cout<<"\n 14 for cube, 15 for average, 16 power\n";


do{
std::cout<<"Your Choice: ";std::cin>>operation;    
switch(operation)
{
    double result;
case 1:
    result = cal.add();
    break;

case 2:
    result = cal.subtract();
    break;

case 3:
    result = cal.multiply();
    break;

case 4:
    result = cal.divide();
    break;

case 5:
    result = cal.sine();

    break;

case 6:
    result = cal.cosine();
 
    break;

case 7:
    result = cal.tangent();

    break;

case 8:
    result = cal.arc_sine();

    break;

case 9:
    result = cal.arc_cosine();

    break;

case 10:
    result = cal.arc_tan();

    break;

case 11:
    result = cal.sineh();

    break;

case 12:
    result = cal.cosineh();

    break;

case 13:
    result = cal.tangenth();

    break;

case 14:
    result = cal.cube();

    break;

case 15:
    result = cal.average();
 
    break;

case 16:
    result = cal.power();
    break;


}





}while(operation != 0);

return 0;

}