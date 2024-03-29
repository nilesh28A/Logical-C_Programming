#include<stdio.h>

void printNumbers(int *arr, int n);

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    printNumbers(arr,9);

}

void printNumbers(int *arr, int n){
    for(int i=n-1; i>=0; i--){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}