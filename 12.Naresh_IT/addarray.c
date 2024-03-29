#include<stdio.h>

int big(int arr[]);

int main(){
    int m=5, n=3;
    int loc;
    int arr1[5]={4,6,8,9,3,7};
    int arr2[3]={10,20,30};

    /*for(int i=0; i<n; i++){
    arr1[m+i] = arr2[i];
    }*/

    for(int i=0; i<m; i++){
        printf("%d\n",arr1[i]);
    }
}