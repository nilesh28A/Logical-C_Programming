#include<stdio.h>
int main(){
    int age;
    printf("enter age:~ ");
    scanf("%d",&age);
    (age<18)?printf("can not vote\n"):printf("can vote\n");
    printf("press enter for exit");
    getchar();
    getchar();
    return 0;
}