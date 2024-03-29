#include<stdio.h>

//function declaration/prototype
void printHello();
void printGoodbye();

int main(){
    // function call
    printHello();
    printGoodbye();
}

//function defination
void printHello(){
    printf("Jay Swaminarayan\n");
}

void printGoodbye(){
    printf("Bye..\n");
}