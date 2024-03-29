#include<stdio.h>

void swap(int arr1[], int arr2[], int n1, int n2);
void print(int arr[], int n);

int main(){
    int n1,n2;
    printf("enter array1 size:~ ");
    scanf("%d",&n1);
    printf("enter array2 size:~ ");
    scanf("%d",&n2);

    int array1[n1], array2[n1]; 

    for(int i=0; i<n1; i++){
        printf("enter %dth element of array1:~ ",i);
        scanf("%d",&array1[i]);
        printf("\n");
    }
    
    for(int i=0; i<n2; i++){
        printf("enter %dth element of array2:~ ",i);
        scanf("%d",&array2[i]);
        printf("\n");
    }
    printf("befor swaping\n");
    print(array1,n1);
    print(array2,n2);
    swap(array1,array2,n1,n2);
    printf("after swaping\n");
    print(array1,n1);
    print(array2,n2);
    return 0;
}

void swap(int arr1[], int arr2[], int n1, int n2){
    int big;
    if(n1<n2){
        big=n2;
    }else{
        big=n1;
    }
    for(int i=0; i<big; i++){
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}