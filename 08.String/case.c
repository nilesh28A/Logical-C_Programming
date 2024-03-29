#include<stdio.h>

void change(char arr[]);

int main(){
    char str[]="helloworld";
    change(str);
}

void change(char arr[]){
    for(int i=0; arr[i]!='\0'; i++){
        if(arr[i] >= 'a' && arr[i] <= 'z') {
        arr[i] = arr[i] - 32;
        }
    }
    puts(arr);
}