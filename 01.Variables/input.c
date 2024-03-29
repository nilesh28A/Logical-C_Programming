#include<stdio.h>
int main(){
    int number;      
    char star;      
    float pi;

    printf("Enter Character");    //sequence change//
    scanf("%c",&star);
    printf("Enter Number");
    scanf("%d",&number);
    printf("Enter float");
    scanf("%f",&pi);    

    printf("%d\n",number);
    printf("%c\n",star);
    printf("%f",pi);
    return 0;
}