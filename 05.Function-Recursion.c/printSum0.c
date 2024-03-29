#include<stdio.h>

int sum(int x, int y);

int main(){
    int a,b;
    printf("enter number1:~");
    scanf("%d",&a);
    printf("enter number2:~");
    scanf("%d",&b);

    printf("sum = %d",sum(a,b));
    return 0;
}

int sum(int x, int y){
    return x+y;
}