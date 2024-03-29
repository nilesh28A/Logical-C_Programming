#include<stdio.h>
int main(){
    char name[50];
    char fullname[20];
    printf("Enter your name:~ ");  // %s formate specifire
    scanf("%s",&name);

    printf("your name is %s\n",name);

    printf("enter your full name:~ ");
    fgets(fullname,20,stdin);
    puts(fullname);

    return 0;
}