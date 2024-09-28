#include <stdio.h>
int main(){
    int x = 10; 
    int y = 20;
    if(x > y ){
        printf("x is larger");
        
    }
    else if(x < y){
        printf("y is larger");
    }
    else{
        printf("x and y are equal");
    }
    return 0;
}