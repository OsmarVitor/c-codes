#include <stdio.h>
#include <math.h>

#define PI 3.14159
void main (void){
    double raio,cont;

    scanf("%lf", &raio);

    raio = pow(raio,3);
    cont = (4/3.0)*PI*raio;

    printf("VOLUME = %.3lf\n", cont);
}
