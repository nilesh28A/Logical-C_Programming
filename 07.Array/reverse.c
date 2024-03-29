#include<stdio.h>

void reverse(int arr[], int n);
void print(int arr[], int n);

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    print(arr,9);
    printf("\n");
    reverse(arr,9);
    print(arr,9);

}

void reverse(int arr[], int n){
    for(int i=0; i<n/2; i++){
        int first = arr[i];
        int last = arr[n-i-1];

        arr[i] = last;
        arr[n-i-1] = first;
    }
}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
}