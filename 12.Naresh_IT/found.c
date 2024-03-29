#include<stdio.h>

int main(){
    int arr1[]={4,6,8,9,3,7};
    int ele,found=0;
    printf("enter element:~ ");
    scanf("%d",&ele);
    
    for(int i=0; i<5; i++){
    if(arr1[i]==ele){
        printf("found at %d location",i);
        found = 1;
        break;
    }
    }
    if(!found){
        printf("not found");
    }
}