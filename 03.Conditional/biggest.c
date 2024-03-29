#include<stdio.h>
#include<stdint.h>
int main(){
    float num1,num2;
    printf("enter number1:~ ");
    scanf("%f",&num1);
    printf("enter number2:~ ");
    scanf("%f",&num2);
    
    int32_t n1, n2;

	/* we are storing only integer part of the real numbers*/
	n1 = num1;
	n2 = num2;

	if( (n1 != num1) || (n2 != num2) ){
		printf("Warning ! comparing only integer part\n");
	}

    if(n1>n2){
        printf("%d is biggest",n1);
    }else if(n2>n1){
        printf("%d is biggest",n2);
    }else{
        printf("both are equal");
    }
}