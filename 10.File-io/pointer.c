#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("Test.txt","r");     //read
    fptr = fopen("NewTest.txt","w");  //write
    fclose(fptr);
    return 0;

}