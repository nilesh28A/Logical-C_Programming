#include<stdio.h>
int main(){
    int n1,n2;
    printf("enter a number1:~ ");
    scanf("%d",&n1);
    printf("enter a number2:~ ");
    scanf("%d",&n2);
    printf("before swap:~ n1=%d , n2=%d\n",n1,n2);
    n1 = n1+n2;
    n2 = n1-n2;
    n1 = n1-n2;
    printf("after swap:~ n1=%d , n2=%d\n",n1,n2);
    return 0;
}