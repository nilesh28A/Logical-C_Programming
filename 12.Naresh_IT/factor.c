#include<stdio.h>
int main(){
    int n1,n2=1;
    printf("enter array1 size:~ ");
    scanf("%d",&n1);
    for(int i=1; i<=n1/2; i++){
        if(n1%i==0){
            printf("%d\n",i);
            n2++;
        }
    }
    printf("total fectors:~ %d",n2);

    return 0;
}