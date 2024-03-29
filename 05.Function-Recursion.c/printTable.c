#include<stdio.h>

void printTable(int a);

int main(){
    int num;
    printf("enter number:~");
    scanf("%d",&num);
    
    printTable(num);
    return 0;
}

void printTable(int a){
    for(int i=1; i<=10; i++){
        printf("%d x %2d = %2d\n",a,i,a*i);
    }
}