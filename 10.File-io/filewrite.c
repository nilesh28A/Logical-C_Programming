#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("NewTest.txt","a"); 

    fprintf(fptr,"%c",'D');
    fprintf(fptr,"%c",'h');
    fprintf(fptr,"%c",'r');
    fprintf(fptr,"%c",'u');
    fprintf(fptr,"%c",'t');
    fprintf(fptr,"%c",'i');

    fputc('S',fptr);
}    