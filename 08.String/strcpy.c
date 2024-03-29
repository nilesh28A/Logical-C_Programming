#include<stdio.h>
#include<string.h>

int main(){
    char old[]="nilesh";
    char new[] = "swaminarayan";

    strcpy(old,new); 
    printf("%s\n",old);
    puts(old);
}