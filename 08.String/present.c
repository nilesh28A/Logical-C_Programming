#include<stdio.h>

void present(char arr[], char ch);

int main(){
    char str[]="helloworld";
    char nam[]="asodariya";
    present(str,'w');
    present(nam,'s');
}

void present(char arr[], char ch){
   
    for(int i=0; arr[i]!='\0'; i++){
        if(arr[i]==ch){
            printf("present\n");
            return;
        }   
    }
    printf("not present\n");
}