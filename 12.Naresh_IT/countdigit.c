#include<stdio.h>
int main(){
    int n1,cnt=0;
    printf("enter num:~ ");
    scanf("%d",&n1);
    
    while(n1>0){
        n1 = n1/10;
        cnt++; 
    }
    printf("%d digit",cnt);
    return 0;
}