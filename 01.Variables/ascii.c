#include<stdio.h>
int main(){
    char a,b,c,d,e,f;
    printf("enter 6 charcter:~ ");
    a=getchar();
    b=getchar();
    c=getchar();
    d=getchar();
    e=getchar();
    f=getchar();

    printf("Ascii value:~ %d\t%d\t%d\t%d\t%d\t%d\t",a,b,c,d,e,f);

    	printf("\nPress enter key to exit the application \n");
    while(getchar() != '\n')
    {
    	//just read the input buffer and do nothing
    }
    getchar();
}