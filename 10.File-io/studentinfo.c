#include<stdio.h>
int main(){
    FILE *stu;
    stu = fopen("student.txt","w");

    char name[20];
    int age;
    float cgpa;

    printf("enter name:~");
    scanf("%s",&name);
    printf("enter age:~");
    scanf("%d",&age);
    printf("enter cgpa:~");
    scanf("%f",&cgpa);

    fprintf(stu, "name:~ %s\n", name);
    fprintf(stu, "age:~ %d\n", age);
    fprintf(stu, "chpa:~ %f\n", cgpa);
}