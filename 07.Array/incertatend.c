#include<stdio.h>
int main(){
    int n, value;
    printf("enter element:~");
    scanf("%d",&n);

    int arr[n];
    printf("plese enter all element");
    for(int i=0; i<n; i++){
        printf("enter %d index:~",i);
        scanf("%d",&arr[i]);
    }

    printf("enter value to insert at end:~");
    scanf("%d",&value);

    arr[n]=value;

    for(int i=0; i<=n; i++){
        printf("%d\t",arr[i]);
    }
}