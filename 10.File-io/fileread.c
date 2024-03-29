#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("Test.txt","r");     //read
    char ch;
    int n;
    fscanf(fptr,"%c",&ch);
    printf("charcter=%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("charcter=%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("charcter=%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("charcter=%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("charcter=%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("charcter=%c\n",ch);   //character
    fscanf(fptr,"%d",&n);
    printf("charcter=%d\n",n);    //number

    printf("%c",fgetc(fptr));

    fclose(fptr);
    return 0;

}