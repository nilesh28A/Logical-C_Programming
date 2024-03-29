#include<stdio.h>

struct carmodel{
    char name[10];
    int number;
    float prise;    
};


int main(){
    FILE *fptr;
    fptr = fopen("CarData.txt","w"); 

    struct carmodel bmw, od, tata;

    printf("%d",sizeof(struct carmodel));  // 2 more byte structure padding
    
    printf("enter 1 car data(name,num,prise):~ ");
    scanf("%s%d%f",&bmw.name,&bmw.number,&bmw.prise);
    fprintf(fptr,"1st car name:%s\n",bmw.name);
    fprintf(fptr,"1st car num:%d\n",bmw.number);
    fprintf(fptr,"1st car name:%f\n",bmw.prise);

    printf("enter 2 car data(name,num,prise):~ ");
    scanf("%s%d%f",&od.name,&od.number,&od.prise);
    fprintf(fptr,"2st car name:%s\n",od.name);
    fprintf(fptr,"2st car num:%d\n",od.number);
    fprintf(fptr,"2st car name:%f\n",od.prise);

    printf("enter 3 car data(name,num,prise):~ ");
    scanf("%s%d%f",&tata.name,&tata.number,&tata.prise);
    fprintf(fptr,"3st car name:%s\n",tata.name);
    fprintf(fptr,"3st car num:%d\n",tata.number);
    fprintf(fptr,"3st car name:%f\n",tata.prise); 
    
    return 0;
}