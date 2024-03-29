#include<stdio.h>
int main(){
    int n1,n2,rem,sum=0;
    printf("enter num:~ ");
    scanf("%d",&n1);
    n2=n1;
    while(n2>0){
        rem = n2%10;
        sum = sum + (rem*rem*rem);
        n2 = n2/10;
    }
    if(sum==n1){
        printf("Armstrong");
    }else{
        printf("Not Armstrong");
    }
    return 0;
}