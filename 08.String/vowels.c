#include<stdio.h>

void vowels(char arr[]);

int main(){
    char str[]="helloworld";
    char nam[]="asodariya";
    vowels(str);
    vowels(nam);
}

void vowels(char arr[]){
    int  cnt=0;
    for(int i=0; arr[i]!='\0'; i++){
        if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='o'){
            cnt++;
        }   
    }
   printf("%d\n",cnt);
}