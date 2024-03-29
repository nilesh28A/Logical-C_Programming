#include<stdio.h>

int big(int arr[]);

int main(){
    int m=5, n=3;
    int loc;
    int arr1[5]={4,6,8,9,3,7};
    int arr2[3]={10,20,30};

    printf("Enter location:~ ");
    scanf("%d",&loc);

    for(int i=m-1; i>=loc; i--){
        arr1[i+n] = arr1[i];
    }
    for(int i=0; i<n; i++){
    arr1[loc+i] = arr2[i];
    }

    for(int i=0; i<n+m; i++){
        printf("%d\n",arr1[i]);
    }
}