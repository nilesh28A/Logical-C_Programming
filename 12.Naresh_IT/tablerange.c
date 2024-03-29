#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter n:~");
    scanf("%d",&n);              // forward & reverse table

    for(int j=1; j<=n; j++){
    for(int i=10; i>=1; i--){           
        printf("%d x %2d = %3d\n",j,i,j*i);
    }
    printf("\n\n");
    }
}