#include<stdio.h>

struct complex{
    int real;
    int img;
};

int main(){
    struct complex n1 = {10,20};
    struct complex *ptr = &n1;

    printf("real = %d\n",ptr->real);
    printf("img = %d",ptr->img);
}