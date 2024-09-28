#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    float cgpa;

};
int main(){
    struct student s1; // s1 used for access the data from student

    printf("Enter the rollNO, name, CGPA\n");

    scanf("%d%s%f", &s1.rollno, &s1.name, &s1.cgpa);

    printf("RollNo: %d, Name: %s, CGPA: %f", s1.rollno, s1.name, s1.cgpa);


}