#include<stdio.h>

void printHW(int count);

int main(){
    printHW(5);
}

void printHW(int count){
    if (count == 0){
        return;
    }
    printf("hello world\n");
    printHW(count-1);
}