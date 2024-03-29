#include<stdio.h>
int main(){
    int limit;
    printf("enter limit:~ ");
    scanf("%d",&limit);

    for(int j=1; j<=limit; j++){
    int sum=0;
    for(int i=1; i<=j/2; i++){
        if(j%i==0){
            sum += i;
        }
    }
    if(sum == j){
        printf("perfec %d",j);
    }
    }


    return 0;
}