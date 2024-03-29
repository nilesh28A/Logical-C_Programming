#include<stdio.h>
#include<string.h>

void saltin(char arr[]);

int main(){
    char pass[]="nilesh";
    saltin(pass);
}

void saltin(char arr[]){
    char salt[]="123";

    strcat(arr,salt);
    puts(arr);
}