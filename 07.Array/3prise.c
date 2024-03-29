#include<stdio.h>

float finalprise(float n);

int main(){
    float price[3];

    printf("enter prise of note: ");
    scanf("%f",&price[0]);
    printf("enter prise of pen: ");
    scanf("%f",&price[1]);
    printf("enter prise of rubber: ");
    scanf("%f",&price[2]);

    printf("final prise note:~%f, pen:~%f, rubber:~%f",finalprise(price[0]),finalprise(price[1]),finalprise(price[2]));

}

float finalprise(float n){
    return n+(n*0.18);
}