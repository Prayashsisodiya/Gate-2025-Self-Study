// there are 5 types of operators in C

//  1. Arithmmetic Operatror
//  2. Relational Operator
//  3. Logical Operators
//  4. Bitwise Operator
//  5. Assignment Operator


# include <stdio.h>
# include <conio.h>
#include <stdbool.h>
void main(){
    int x = 10;
    int y = 20;
    bool xB = true;

    bool yB = false;

    // Arithmetic Operators
    printf("\nArithmetic Operators !!\n");


    printf("x+y = %d \n", x+y);
    printf("x-y = %d \n", x-y);
    printf("x/y = %f \n", (float)x/ (float)y); // type Casting
    printf("x*y = %d \n", x*y);

    printf("xB == yB = %d \n", xB == yB);

    // Logical Operators
    printf("\nLogical Operators !! \n");
    printf("xB && yB = %d \n", xB && yB);
    printf("xB || yB = %d \n", xB || yB);
    printf("xB != yB = %d \n", xB != yB);
    printf("!xB = %d", !xB);
    

    getch();
}