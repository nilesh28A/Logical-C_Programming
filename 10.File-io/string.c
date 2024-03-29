#include<stdio.h>
int main(){
    FILE *string;
    string = fopen("Test.txt","r");

    char a[10];
    fscanf(string,"%s",&a);

    printf("%s",a);
}