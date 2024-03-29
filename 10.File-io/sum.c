#include<stdio.h>
int main(){
    FILE *sum;
    sum = fopen("sum.txt","r");

    int a, b;
    fscanf(sum,"%d",&a);
    fscanf(sum,"%d",&b);
    fclose(sum);
    sum = fopen("sum.txt","w");
    fprintf(sum,"sum = %d",a+b);
    fclose(sum);
}