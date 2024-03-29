#include<stdio.h>
int main(){
    int marks[3];

    printf("enter physics: ");
    scanf("%d",&marks[0]);
    printf("enter chamistry: ");
    scanf("%d",&marks[1]);
    printf("enter maths: ");
    scanf("%d",&marks[2]);

    printf("phy:~%d  chem:~%d  math:~%d",marks[0],marks[1],marks[2]);
}