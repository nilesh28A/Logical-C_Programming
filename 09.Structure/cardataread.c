#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("CarData.txt","r"); 

    char ch[10];
    int n;
    float p;
    fscanf(fptr,"%s",&ch);
    printf("charcter=%s\n",ch);

    fscanf(fptr,"%d",&n);
    printf("number=%d\n",n);

    fscanf(fptr,"%f",&p);
    printf("price=%f\n",p);


}