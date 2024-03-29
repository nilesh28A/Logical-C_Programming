#include<stdio.h>
int main(){
    int n1;
    printf("enter a number:~ ");
    scanf("%d",&n1);
    int i=1;
    while(i<=n1){
        if(i%2==0){
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}