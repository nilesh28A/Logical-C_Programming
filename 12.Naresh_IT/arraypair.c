#include<stdio.h>

int main(){
    int arr1[]={4,6,8,9,3,7,1,2};
    int ele;
    printf("enter element:~ ");
    scanf("%d",&ele);
    int temp;
    for(int i=0; i<8; i++){
        for(int j=i+1; j<8; j++){
            temp = arr1[i] + arr1[j];
            if(temp == ele){
                printf("%d-%d\n",arr1[i],arr1[j]);
                break;
            }    
        }
    
    }
    
}
