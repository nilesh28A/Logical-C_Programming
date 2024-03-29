#include<stdio.h>

void swap(int *a, int *b);

int main(){
    int a = 4, b=5;
    printf("before swap a=%d b= %d\n",a,b); 
    swap(&a,&b);
}

void swap(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
    printf("afte swap a=%d b=%d\n",*a,*b);
}