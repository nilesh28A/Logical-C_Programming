#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    char name[10];
    float cgpa;
};

int main(){
    struct student s1, s2, s3;

    s1.cgpa=8.9;
    strcpy(s1.name,"nilesh");
    s1.roll=003;
    printf("roll = %d\n",s1.roll);
    printf("cgpa = %f\n",s1.cgpa);
    printf("name = %s\n\n",s1.name);

    s2.cgpa=7.9;
    strcpy(s2.name,"mayur");
    s2.roll=004;
    printf("roll = %d\n",s2.roll);
    printf("cgpa = %f\n",s2.cgpa);
    printf("name = %s\n\n",s2.name);

    s3.cgpa=6.9;
    strcpy(s3.name,"maishali");
    s3.roll=005;
    printf("roll = %d\n",s3.roll);
    printf("cgpa = %f\n",s3.cgpa);
    printf("name = %s\n\n",s3.name);

    return 0;
}