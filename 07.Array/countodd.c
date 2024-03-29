#include<stdio.h>

int countodd(int arr[], int n);

int main(){
    int arr[]={10,13,14,15,18,16,17};
    printf("odd=%d",countodd(arr,7));

}

int countodd(int arr[], int n){
    int cnt=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2 != 0){
            cnt++;
        }
    }
    return cnt;

}