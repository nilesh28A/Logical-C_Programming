#include<stdio.h>

struct vector{
    int x;
    int y;
};

void claculate(struct vector s1, struct vector s2, struct vector sum);

int main(){
    struct vector s1 = {5,8};
    struct vector s2 = {10,12};
    struct vector sum = {0};

    claculate(s1,s2,sum);
}

void claculate(struct vector s1, struct vector s2, struct vector sum){
    sum.x = s1.x + s2.x;
    sum.y = s1.x + s2.y;

    printf("%d\n",sum.x);
    printf("%d",sum.y);
}