#include<stdio.h>
int main(){
    char ch;
    printf("enter sensor input:~ ");
    scanf("%c",&ch);

    switch (ch)
    {
    case 'j' : printf("j-type sensor");
        break;
    case 'k' : printf("k-type sensor");
        break;
    case 'p' : printf("PT-type sensor");
        break;        
    
    default  : printf("not valid sensor");
        break;
    }
}