#include<stdio.h>
#include<string.h>

void main(){
    char  str1[10];
    char  str2[10];
    char  str3[10];

    printf("enter two strings \n");
    gets(str1);
    gets(str2);

    printf("\nlength of str1 is : %d", strlen(str1));
    printf("\n String UpperCase of str1 is : %s", strupr(str1));
    printf("\n String LowerCase of str1 is : %s", strlwr(str1));
    
    printf("\nlength of str2 is : %d", strlen(str2));
    printf("\nConcatenation of str1 and str2 is : %s", strcat(str1,str2));

    printf("\n String copied to str3 is : %s", strcpy(str3,str1));

}
