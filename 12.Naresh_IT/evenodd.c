#include<stdio.h>
int main(){
    int n1;
    printf("enter a number:~ ");
    scanf("%d",&n1);
    (n1%2==0)?printf("%d is even",n1):printf("%d is odd",n1);
    return 0;
}