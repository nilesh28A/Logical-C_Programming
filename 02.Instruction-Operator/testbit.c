#include<stdio.h>
int main(){
    int a;
    printf("enter number:~");
    scanf("%d",&a);

    if(a&1){
        printf("odd");
    }else{
        printf("even");
    }
}