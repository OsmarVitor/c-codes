#include <stdio.h>

void main(){
    double n;

    scanf("%lf",&n);

    if (n>=0.0 && n<=25.0000)
        printf("Intervalo [0,25]\n");
     else if (n>25.0000 && n<=50.00000)
        printf ("Intervalo (25,50]\n");
      else if (n>50.00000 && n<=75.00000)
        printf("Intervalo (50,75]\n");
       else if (n>75.00000 && n<=100.00000)
        printf("Intervalo (75,100]\n");
        else
            printf("Fora de intervalo\n");
}
