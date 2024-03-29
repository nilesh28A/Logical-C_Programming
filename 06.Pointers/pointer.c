#include<stdio.h>
int main(){
    int distance = 32;
    int *ptr = &distance;
    int _dis = *ptr;

    printf("%d\n",_dis);
    printf("%d\n",*ptr);
    printf("%d\n",*(&distance));
    printf("%d\n",ptr);
    printf("%d\n",&distance);
    printf("%d\n",&ptr);
    printf("%d\n",&_dis);
    printf("%d\n",*(&_dis));
    printf("%d\n",*(&ptr));
}