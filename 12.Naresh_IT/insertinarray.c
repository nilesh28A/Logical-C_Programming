#include<stdio.h>

int big(int arr[]);

int main(){
    int n=5;
    int arr[n],ele,loc;
    printf("Enter 5 element:~ ");
    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter 6th element:~ ");
    scanf("%d",&ele);
    printf("Enter location:~ ");
    scanf("%d",&loc);

    for(int i=n-1; i>=loc; i--){
        arr[i+1] = arr[i];
    }
    arr[loc] = ele;

    for(int i=0; i<n+1; i++){
        printf("%d\n",arr[i]);
    }
}