#include<stdio.h>

void dowork(int a, int b, int *sum, int *product, int *avg);

int main(){
    int a=10, b=20, sum, product, avg;
    dowork(a,b,&sum, &product, &avg);

    printf("sum=%d, product=%d, average=%d",sum,product,avg);
}

void dowork(int a, int b, int *sum, int *product, int *avg){
    *sum = a+b;
    *product = a*b;   // for multiple value return use call by reference
    *avg = (a+b)/2;
}
