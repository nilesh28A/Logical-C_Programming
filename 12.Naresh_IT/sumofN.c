#include<stdio.h>
int main(){
    int n1,sum=0;
    printf("enter a number:~ ");
    scanf("%d",&n1);
    for(int i=1; i<=n1; i++){
        sum += i;
    }
    printf("sum of %d numbers:~ %d",n1,sum);
    return 0;
}