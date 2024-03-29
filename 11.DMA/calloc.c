#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter n:~");
    scanf("%d",&n);
    float *ptr;
    ptr = (float*) calloc(n, sizeof(float));

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    for (int i=0; i<=n; i++){
        printf("%d\n",&ptr[i]);
    }

}