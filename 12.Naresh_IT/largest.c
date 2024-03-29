#include<stdio.h>
int main(){
    int n1,n2,large=0;
    printf("enter size:~ ");
    scanf("%d",&n1);                 // large element without array
    printf("enter %d element:~ ",n1);
    for(int i=0; i<n1; i++){
        scanf("%d",&n2);
        if(n2>large){
            large=n2;
        }
    }
    printf("large is:~ %d",large);
    return 0;

}