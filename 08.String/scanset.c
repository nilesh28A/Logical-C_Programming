#include<stdio.h>
#include<string.h>

int main(){
    char name[20];
    printf("enter your name:~ ");
    fgets(name,20,stdin);
    printf("Hii %s",name);
}
