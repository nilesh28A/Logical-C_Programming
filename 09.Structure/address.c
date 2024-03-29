#include<stdio.h>

typedef struct adress{
    int house;
    int block;
    char city[20];
    char state[20];
}add;

int main(){
    add nil, may, dhr, mai;

    printf("enter address:1\n");
    scanf("%d",&nil.block);
    scanf("%d",&nil.house);
    scanf("%s",&nil.city);
    scanf("%s",&nil.state);

    printf("enter address:2\n");
    scanf("%d",&may.block);
    scanf("%d",&may.house);
    scanf("%s",&may.city);
    scanf("%s",&may.state);

    printf("enter address:3\n");
    scanf("%d",&mai.block);
    scanf("%d",&mai.house);
    scanf("%s",&mai.city);
    scanf("%s",&mai.state);

    printf("\n\n");

    printf("preson 1 detail\n");
    printf("%d\n",nil.house);
    printf("%d\n",nil.block);
    printf("%s\n",nil.city);
    printf("%s\n",nil.state);

    printf("preson 2 detail\n");
    printf("%d\n",mai.house);
    printf("%d\n",mai.block);
    printf("%s\n",mai.city);
    printf("%s\n",mai.state);

    printf("preson 1 detail\n");
    printf("%d\n",may.house);
    printf("%d\n",may.block);
    printf("%s\n",may.city);
    printf("%s\n",may.state);

}