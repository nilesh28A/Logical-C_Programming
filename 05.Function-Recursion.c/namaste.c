#include<stdio.h>

void namaste();
void bonjure();

int main(){
    char ch;
    printf("if u are indian, please enter I\n");
    printf("if u are french, please enter F\n");
    scanf("%c",&ch);

    if(ch=='I'){
        namaste();
    }else if(ch=='F'){
        bonjure();
    }else{
        printf("wrong country");
    }
    return 0;
}

void namaste(){
    printf("Namaste..");
}

void bonjure(){
    printf("Bonjure..");
}