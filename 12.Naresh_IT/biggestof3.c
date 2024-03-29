#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("enter a number1:~ ");
    scanf("%d",&n1);
    printf("enter a number2:~ ");
    scanf("%d",&n2);
    printf("enter a number3:~ ");
    scanf("%d",&n3);
    if(n1>n2 && n1>n2){
        printf("%d is biggest",n1);
    }else if(n2>n3){
        printf("%d is biggest",n2);
    }else{
        printf("%d is biggest",n3);
    }
    return 0;
}