#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,*ptr;
    printf("enter n:~ ");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    printf("enter n values:");
    for(int i=0; i<n; i++){
        scanf("%d",&ptr[i]);
    }

    for (int i=0; i<4; i++){
        printf("%d\n",ptr[i]);
    }

    free(ptr);

}