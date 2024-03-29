#include<stdio.h>
int main(){
    int n1,n2=1;
    printf("enter a number:~ ");
    scanf("%d",&n1);
    for(int i=1; i<=n1/2; i++){
        if(n1%i==0){
            n2++;
        }
    }
    if(n2==2){
        printf("prime");
    }else{
        printf("not prime");
    }
    return 0;
}