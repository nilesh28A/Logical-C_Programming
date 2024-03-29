#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    char name;
    float cgpa;
};

int main(){
    struct student s1, s2, s3;

    printf("%d",sizeof(struct student));

}
