#include<stdio.h>
int main(){
    float number = 45.78976834578;
    printf("%0.9f\n",number);       // up to 6 dp and prision loss

    double number1 = 45.78976834578;
    printf("%0.14lf\n",number);  
    printf("%e\n",number);

    double charge = -1.60217662e-19;
    printf("%0.27lf\n",charge);  
    printf("%0.8le\n",charge);
}