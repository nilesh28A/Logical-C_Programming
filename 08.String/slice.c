#include<stdio.h>

void slice(char arr[], int n, int m);

int main(){
    char str[]="helloworld";
    slice(str,3,5);
}

void slice(char arr[], int n, int m){
    char newstr[100];
    int  j=0;
    for(int i=n; i<=m; i++,j++){
        newstr[j]=arr[i];
    }
    newstr[j]='\0';
    puts(newstr);
}