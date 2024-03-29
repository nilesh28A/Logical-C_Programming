#include<stdio.h>

int occurs(int arr[], int n, int num);

int main(){
    int num;
    int arr[]={10,18,10,15,10,16,10,18};
    printf("enter x:~");
    scanf("%d",&num);
    printf("occurs=%d",occurs(arr,8,num));

}

int occurs(int arr[], int n, int num){
    int cnt=0;
    for(int i=0; i<n; i++){
        if(arr[i] ==num){
            cnt++;
        }
    }
    return cnt;

}