#include<stdio.h>

int large(int arr[], int n);

int main(){
    int arr[]={10,25,14,15,18,16,17,32};
    printf("large=%d",large(arr,8));

}

int large(int arr[], int n){

    // storing the largest number to arr[0]
    for(int i=0; i<n; i++){
        if(arr[0]<arr[i]){
        arr[0]=arr[i];
    }
    }
    return arr[0];;

}