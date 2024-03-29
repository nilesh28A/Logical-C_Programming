#include<stdio.h>

int const num1=40;  // read only variable
int main(){
    int num=10;
    num=20;

    
    int *ptr=&num1;
    *ptr = 44;         // modify using pointer
    printf("%d",num1);
                  
}