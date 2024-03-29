#include<stdio.h>

int big(int arr[]);

int main(){
    int arr[5],sum=0;
    printf("Enter 5 element:~ ");
    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    printf("big is = %d",big(arr));
}

int big(int arr[]){
    int big = arr[0];
    for(int i=0; i<5; i++){
        if(arr[i] > big){
            big = arr[i];
        }
    }
    return big;
}