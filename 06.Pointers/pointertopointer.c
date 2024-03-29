#include<stdio.h>
int main(){
    int Ankita = 28;
    int *Radhepark = &Ankita;
    int **Yogichowk = &Radhepark;

    printf("%d\n",Ankita);              // age of ankita = 28
    printf("%d\n",*Radhepark);
    printf("%d\n",*(&Ankita));
    printf("%d\n",**Yogichowk);
    printf("%d\n",**(&Radhepark));
    printf("%d\n",***(&Yogichowk));

    printf("%d\n",&Ankita);            // address of ankita = Radhepark
    printf("%d\n",Radhepark);
    printf("%d\n",*Yogichowk);
    printf("%d\n",*(&Radhepark));
    printf("%d\n",**(&Yogichowk));

    printf("%d\n",&Radhepark);        // address of radhepark = yogichowk
    printf("%d\n",Yogichowk);
    printf("%d\n",*(&Yogichowk));

    printf("%d\n",&Yogichowk);       // address of yogichowk = surat
}