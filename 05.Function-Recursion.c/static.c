#include<stdio.h>

void fun();

int main(){
    fun();
    fun();
    fun();
    fun();
    fun();

}

void fun(){
    static int count = 0;    // private globle variable
    count += 1;
    printf("%d times exicute\n",count); 
}