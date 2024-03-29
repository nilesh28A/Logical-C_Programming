#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    char name[10];
    float cgpa;
};

int main(){
    struct student s1;
    struct student *ptr = &s1;

    s1.cgpa=8.9;
    strcpy(s1.name,"nilesh");
    s1.roll=003;
    printf("roll = %d\n",ptr->roll);
    printf("cgpa = %f\n",ptr->cgpa);
    printf("name = %s\n\n",ptr->name);

}    