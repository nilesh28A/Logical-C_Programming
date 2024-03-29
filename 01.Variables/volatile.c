#include<stdio.h>

int const num1=40;  
int main(){
    int volatile num1=10; // tell compiler 
    int volatile num2=20;

    num2 = num1;

    num2 = num1;   // not used instuction

    
                  
}