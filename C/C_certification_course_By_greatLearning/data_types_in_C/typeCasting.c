//          << Typecasting >>
//  C allows for conversion b/w the basic data types:-
//  1. Implicit conversion:-
//  2. Explicit conversion:-



#include <stdio.h>
#include <conio.h>
void main(){
    int num = 10;
    printf("the value of num is : %d \n",num);

    float pi = 3.14;
    printf("the value of pi is :  %f \n",pi);

    int Implicit_conversion_Example = num + pi;
    printf("the value of Implicit_conversion_Example is :  %d \n",Implicit_conversion_Example);

    float  Explicit_conversion_Example = (float) num; 
    printf("the value of Explicit_conversion_Example is :  %f \n",Explicit_conversion_Example);

    double d = 500.565675;
    printf("the value of d is :  %lf \n",d);

    getch();


}