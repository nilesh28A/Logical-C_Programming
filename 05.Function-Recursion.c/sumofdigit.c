#include<stdio.h>

int sumofdigit(int num);

int main(){
    printf("%d",sumofdigit(1485));
}

int sumofdigit(int num){
    if ( num==0 ){
        return 0;
    }
    return ( num%10 + sumofdigit(num/10));
}