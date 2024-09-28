#include <stdio.h>
int sum(int a, int b) // example of user defined function!!
{
    return a + b;
}

int mult(int a,int b){ // example of user defined function!!
    return a*b;
}

void divide (int a, int b){
    printf("%d",a/b);
}
int main() // example of pre defined function!!
{
    printf("Sum of a and b is : %d\n", sum(5, 10));
    printf("Product of a and b is : %d\n", mult(10, 10));
    divide(10,5);
}
