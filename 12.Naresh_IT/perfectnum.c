#include<stdio.h>
int main(){
    int n1,sum=0;
    printf("enter array1 size:~ ");
    scanf("%d",&n1);
    for(int i=1; i<=n1/2; i++){
        if(n1%i==0){
            printf("%d\n",i);
            sum += i;
        }
    }
    if(sum == n1){
        printf("perfec");
    }else{
        printf("not perfec");
    }
    return 0;
}