#include<stdio.h>

int fact(int num);

int main(){
    printf("%d",fact(5));
}

int fact(int num){
    if(num==1){
        return 1;
    }
    int factNm1 = fact(num-1);
    int factN = factNm1 * num;
    return factN;
}