#include<stdio.h>

void length(char arr[]);

int main(){
    char name[]="nilesh";
    char nam[] = "swaminarayan";

    length(name);
    length(nam);
}

void length(char arr[]){
    int lenght=0;
    for(int i=0; arr[i] != '\0'; i++){
        lenght++;
    }
    printf("Length is %d",lenght);
    printf("\n");
}