#include <stdio.h>
#include <locale.h>

#define pi 3.14159

double raio;
void main (void){
    setlocale(LC_ALL,"portugues");
    scanf("%lf", &raio);
    printf("A=%.4lf\n", pi*raio*raio);
}
