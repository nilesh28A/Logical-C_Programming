#include<stdio.h>

void calculatePrice(float value);

int main(){
    float value;
    printf("enter number:~");
    scanf("%f",&value);
    
    calculatePrice(value);
    printf("%f",value);
}

void calculatePrice(float value){
    value = value + (value*0.18);
    printf("final prise  = %f\n",value);
}