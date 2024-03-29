#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter n:~");
    scanf("%d",&n);              // forward & reverse table

    for(int i=10; i>=1; i--){           
        printf("%d x %2d = %3d\n",n,i,n*i);
    }
}