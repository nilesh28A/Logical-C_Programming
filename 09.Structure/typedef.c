#include<stdio.h>
#include<string.h>

typedef struct student{
    int roll;
    char name[10];
    float cgpa;
}st;

int main(){
    st s1;

    s1.cgpa=8.9;
    strcpy(s1.name,"nilesh");
    s1.roll=003;
    printf("roll = %d\n",s1.roll);
    printf("cgpa = %f\n",s1.cgpa);
    printf("name = %s\n\n",s1.name);
}    