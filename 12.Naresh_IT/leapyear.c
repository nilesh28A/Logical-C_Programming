#include<stdio.h>
int main(){
    int n1;
    printf("enter year:~ ");
    scanf("%d",&n1);
    if( n1%400==0 || (n1%4==0 && n1%100!=0) ){
        printf("%d is leap year",n1);
    }else{
        printf("%d is not leap year",n1);
    }
    return 0;
}