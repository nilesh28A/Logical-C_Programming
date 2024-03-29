#include<stdio.h>
#include<string.h>
int main(){
    char name[15];
    printf("plese enter string:~ ");
    fgets(name,30,stdin);
    for(int i=0; i<=strlen(name); i++){
        if(name[i]==' '){
            for(int j=i; j<=strlen(name); j++){
                name[j] = name[j+1];
            }
        }
    }
    puts(name);
}