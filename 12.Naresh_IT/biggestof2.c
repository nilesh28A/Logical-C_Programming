#include<stdio.h>
int main(){
    int n1,n2;
    printf("enter a number1:~ ");
    scanf("%d",&n1);
    printf("enter a number2:~ ");
    scanf("%d",&n2);
    (n1>n2)?printf("%d is biggest",n1):printf("%d is biggest",n2);
    return 0;
}