#include<stdio.h>

int fib(int num);

int main(){
    printf("%d",fib(10));
}

int fib(int num){
    if(num==1){
        return 1;
    }
    if(num==0){
        return 0;
    }
    int fibNm1 = fib(num-1);
    int fibNm2 = fib(num-2);
    int fibN = fibNm1 + fibNm2;
    return fibN;
}