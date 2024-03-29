#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50,60,70,80,90};
    int *ptr = arr;
    int size = sizeof(arr);

    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);

    //int *ptr = &arr;
    printf("%d\n\n",size);
    
    for(int i=9; i>=0; i--){
        printf("%d\n",arr[i]);
    }

}