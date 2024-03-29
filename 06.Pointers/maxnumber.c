#include <stdio.h>
#include <stdlib.h>
void main()
{
 int n1,n2;
 int *ptr1=&n1;
 int *ptr2=&n2; 
 
   printf(" Input the first number : ");
   scanf("%d", &n1);
   printf(" Input the second  number : ");
   scanf("%d", &n2); 

 if(*ptr1>*ptr2){
  printf("\n\n %d is the maximum number.\n\n",*ptr1);
 }else{
  printf("\n\n %d is the maximum number.\n\n",*ptr2);
 }

}