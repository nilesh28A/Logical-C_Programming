#include<stdio.h>
int main(){
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;
    printf("ptr=%u\n",ptr);
    ptr++;
    printf("ptr=%u\n",ptr);
    ptr--;
    printf("ptr=%u\n",ptr);

    printf("subtraction %d\n",ptr-_ptr);
    printf("subtraction %d\n",_ptr-ptr);
    _ptr=&age;
    printf("comparision %d\n",ptr==_ptr);


}