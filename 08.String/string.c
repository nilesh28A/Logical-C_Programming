#include<stdio.h>
#include<string.h>
int main(){

// a character array which terminated by null character

    char name[]={'N','I','L','E','S','H','\0'};
    char nam[]="nilesh";
    char n[]="Nilesh Asodariya";

    printf("%d\n",sizeof(nam));
    printf("%d",strlen(nam));
    return 0;
}