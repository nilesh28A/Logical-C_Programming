#include<stdio.h>

void storetable(int arr[][10], int n, int m, int num);

int main(){
int table[2][10];
storetable(table,0,10,5);
storetable(table,1,10,8);

    for(int i=0; i<10; i++){
        printf("%d\t",table[0][i]);
    }
    printf("\n");
    for(int i=0; i<10; i++){
        printf("%d\t",table[1][i]);
    }
}

void storetable(int arr[][10], int n, int m, int num){
    for(int i=0; i<m; i++){
        arr[n][i] = num * (i+1);
    }
}
