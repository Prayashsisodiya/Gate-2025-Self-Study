#include <stdio.h>
void main (){
    int a[10] = {10,20,30,40};
    for(int i = 0; i < 4; i++){
    printf("%d \t",a[i]);

    }

    int arr[5] = {};
    for(int i = 0; i < 5; i++){
        printf("\nEnter the value of arr[%d]: ",i);
        scanf("%d", &arr[i]);
    }
     for(int i = 0; i < 5; i++){
        printf("\nthe value of arr[%d] is : %d",i,arr[i]);
        
    }


}