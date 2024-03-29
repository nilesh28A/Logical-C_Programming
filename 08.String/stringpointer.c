#include<stdio.h>
int main(){
    char *chanchange = "hello world";
    puts(chanchange);
    chanchange = "hello";                     // pointers can change
    puts(chanchange);

    char notchange[]= "hello world";
    puts(notchange);
    // notchange[]= "hello";                    array can not change
    puts(notchange);
}