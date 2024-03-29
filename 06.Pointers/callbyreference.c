#include<stdio.h>

int square(int *n);

int main(){
    int n=4;
    printf("square=%d\n",square(&n));
    printf("value=%d\n",n);
    printf("adress of n(original)=%d\n",&n);
}

int square(int *n){
    printf("adress of n(copy)=%d\n",n); 
    *n = (*n)*(*n); 
    return *n;   
}