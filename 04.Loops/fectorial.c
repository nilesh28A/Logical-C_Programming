#include<stdio.h>
int main(){
    int n,fect=1;
    printf("enter n:~");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        fect *= i;
    }
    printf("%d fectorial is %d",n,fect);
}