#include <iostream>
#include <math.h>

double add (double x, double y)
{
    return x + y;
}

double subtract (double x, double y)
{
    return x - y;
}

double multiply (double x, double y)
{
    return x * y;
}

double divide (double x, double y)
{
    if(y==0)
    {
        std::cout<<"You Entered a Null value as the dividand, Undefined.\n";
        return 0;
    }
    return x / y;
}

double sqroot (double x)
{
    return sqrt(x);
}

double log_simple (double x)
{
    return log(x);
}

double log_base (double x)
{
    return log10(x);
}

double sine (double x)
{
    return sin(x);
}

double cosine (double x)
{
    return cos(x);
}

double tangent (double x)
{
    return tan(x);
}

double arc_sine (double x)
{
    return asin(x);
}

double arc_cosine (double x)
{
    return acos(x);
}

double arc_tan (double x)
{
    return atan(x);
}

double sineh (double x)
{
    return sinh(x);
}

double cosineh (double x)
{
    return cosh(x);
}

double tangenth (double x)
{
    return tanh(x);
}

double cube (double x)
{
    return x*x*x;
}

double power (double x, double y)
{
    return pow(x,y);
}

double average (double x, double y)
{
    return (x+y)/2;
}

int main()
{
double x, y, result; 

int operation;

std::cout<<"enter the first number:"<<std::endl;
std::cin>>x;std::cout<<""<<std::endl;
std::cout<<"enter the second number:"<<std::endl;
std::cin>>y;std::cout<<""<<std::endl;
std::cout<<"enter the operation you would like to perform:\n1 for addition , 2 for subtraction,3 for multiplication, 4 for division,";
std::cout<<"1 for square root, 2 for natural log, 3 for log to the base 10,";
std::cout<<"\n4 for sin , 5 for cos, 6 for tan,";
std::cout<<"\n7 for asin(arcsine), 8 for acos(arccosine), 9 for atan(arctangent),";
std::cout<<"\n10 for sinh(sine hyperbolic), 11 for cosh(cos hyperbolic), 12 tanh(tan hyperbolic)";
std::cout<<"\n 13 for cube, 14 for average, 15 power";

do{

switch(operation)
{
case '1':
    result = add(x,y);
    std::cout<<"The Added Numbers"<<x<<" & "<<y<<"result in: "<<result<<std::endl;
    break;

case '2':
    result = subtract(x,y);
    std::cout<<"The subtracted numbers"<<x<<" & "<<y<<"leave behind: "<<result<<std::endl;
    break;

case '3':
    result = multiply(x,y);
    std::cout<<"The multiplied Numbers"<<x<<" & "<<y<<" result in: "<<result<<std::endl;
    break;

case '4':
    result = divide(x,y);
    std::cout<<"The Divided Numbers"<<x<<" & "<<y<<"result in: "<<result<<std::endl;
    break;

case '5':
    result = sine(x);
    std::cout<<"The sine of"<<x<<"results in: "<<result<<std::endl;
    break;

case '6':
    result = cos(x);
    std::cout<<"The cos of "<<x<<" result in: "<<result<<std::endl;
    break;

case '7':
    result = add(x,y);
    std::cout<<"The Added Numbers"<<x<<" & "<<y<<"result in: "<<result<<std::endl;
    break;

case '8':
    result = add(x,y);
    std::cout<<"The Added Numbers"<<x<<" & "<<y<<"result in: "<<result<<std::endl;
    break;

case '9':
    result = add(x,y);
    std::cout<<"The Added Numbers"<<x<<" & "<<y<<"result in: "<<result<<std::endl;
    break;

case '10':
    result = add(x,y);
    std::cout<<"The Added Numbers"<<x<<" & "<<y<<"result in: "<<result<<std::endl;
    break;

case '11':
    result = add(x,y);
    std::cout<<"The Added Numbers"<<x<<" & "<<y<<"result in: "<<result<<std::endl;
    break;

case '12':
    result = add(x,y);
    std::cout<<"The Added Numbers"<<x<<" & "<<y<<"result in: "<<result<<std::endl;
    break;

case '13':
    result = add(x,y);
    std::cout<<"The Added Numbers"<<x<<" & "<<y<<"result in: "<<result<<std::endl;
    break;

case '14':
    result = add(x,y);
    std::cout<<"The Added Numbers"<<x<<" & "<<y<<"result in: "<<result<<std::endl;
    break;

case '15':
    result = add(x,y);
    std::cout<<"The Added Numbers"<<x<<" & "<<y<<"result in: "<<result<<std::endl;
    break;


}





}while(operation != 'e');

return 0;

}