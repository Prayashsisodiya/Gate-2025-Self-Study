// Pointers are the variables which stores the address of another variable !!

// they have data type just like variables, 
//  for example
//      an integer type pointer hold the address of an integer variable, and
//      a character type pointer hold the address of a character variable !!
#include<stdio.h>

void main(){
    int a = 20;
    int *p = &a;

    // OR

    int b = 10;
    int *r;
    r = &b;

    printf("%d\n", *r);
    printf("\n value of a using *p is : %d", *p);
    printf("\n Address of a using pointer variable p is : %x", p);
    printf("\n Address of a is  : %x", &a);

    printf("\n Address of b is %x", &b );
    // printf("\n%d\n", *p);
}