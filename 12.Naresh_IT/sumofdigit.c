#include<stdio.h>
int main(){
    int n1,rem,sum=0;
    printf("enter num:~ ");
    scanf("%d",&n1);
    
    while(n1>0){
        rem = n1%10;
        sum = sum+rem;
        n1 = n1/10;    
    }
    printf("%d is sum",sum);
    return 0;
}