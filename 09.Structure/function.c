#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    char name[10];
    float cgpa;
};

void print(struct student *b1);

int main(){
    struct student s1;

    s1.cgpa=8.9;
    strcpy(s1.name,"nilesh");
    s1.roll=003;
    print(&s1);
}

void print(struct student *b1){
    printf("roll = %d\n",b1->roll);
    printf("cgpa = %f\n",b1->cgpa);
    printf("name = %s\n\n",b1->name);
}