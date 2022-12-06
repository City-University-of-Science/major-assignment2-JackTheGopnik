//ID: 11931, BS CS (SE), 5th Semester, SDC Major Assignment.
// Hi Sir Iftikhar :D
#include <iostream>
#include <math.h>

class math_calculator_scientific {
double x, y; 
public:

void value_setter() //standard encapsulation, via Setter.
{
double xc284, xc285; //actual ommitted addresses of where the values are stored in memory :P    
std::cout<<"enter the first number:"<<std::endl;
std::cin>>xc284;
std::cout<<"enter the second number:"<<std::endl;
std::cin>>xc285;
x = xc284;
y = xc285;

}

void value_show()//ditto, via Getter.
{
    std::cout<<"Value of the First Operand: "<<x<<std::endl;
    std::cout<<"Value of the Second Operand:"<<y<<std::endl;
}
// Do I really need to explain this?
double add ()
{
    std::cout<< x + y;
}

double subtract ()
{
    std::cout<< x - y;
}

double multiply ()
{
    std::cout<< x * y;
}

double divide ()
{
    if(y==0)
    {
     std::cout<<"You Entered a Null value as the dividand, Undefined.\n";

    }
    std::cout<< x / y;
}

double sqroot ()
{
    std::cout<< sqrt(x);
}

double log_simple ()
{
    std::cout<< log(x);
}

double log_base ()
{
    std::cout<< log10(x);
}

double sine ()
{
    std::cout<< sin(x);
}

double cosine ()
{
    std::cout<< cos(x);
}

double tangent ()
{
    std::cout<< tan(x);
}

double arc_sine ()
{
    std::cout<< asin(x);
}

double arc_cosine ()
{
    std::cout<< acos(x);
}

double arc_tan ()
{
    std::cout<< atan(x);
}

double sineh ()
{
    std::cout<< sinh(x);
}

double cosineh ()
{
    std::cout<< cosh(x);
}

double tangenth ()
{
    std::cout<< tanh(x);
}

double cube ()
{
    std::cout<< x*x*x;
}

double power ()
{
    std::cout<<pow(x,y);
}

double average ()
{
    std::cout<<(x+y)/2;
}
//If you don't know math, don't worry. I don't know it either :P
};

int main()
{

math_calculator_scientific cal;
cal.value_setter(); //at least set the values first, unless you want "1.4822e-322" printed out as the result.
int operation;
std::cout<<"enter the operation you would like to perform:\n0 to enter values, 1 for addition , 2 for subtraction,3 for multiplication, 4 for division,";
std::cout<<"1 for square root, 2 for natural log, 3 for log to the base 10,";
std::cout<<"\n5 for sin , 6 for cos, 7 for tan,";
std::cout<<"\n8 for asin(arcsine), 9 for acos(arccosine), 10 for atan(arctangent),";
std::cout<<"\n11 for sinh(sine hyperbolic), 12 for cosh(cos hyperbolic), 13 tanh(tan hyperbolic)";
std::cout<<"\n 14 for cube, 15 for average, 16 power, 17 to exit.\n";


do{
std::cout<<"\nYour Choice: \n";std::cin>>operation;    
switch(operation)
{
    double result;
case 0:
cal.value_setter();
    break;

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

default:
    std::cout<<"Whatever you entered, Is invalid. Re-enter it >:(";

}





}while(operation != 17);

return 0;

}