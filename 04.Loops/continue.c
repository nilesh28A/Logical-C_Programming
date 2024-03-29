#include<stdio.h>
int main(){
    for(int i=1; i<=10; i++){
        if(i==6){
            continue; //skip the value
        }
        printf("%d\n",i);
    }
}