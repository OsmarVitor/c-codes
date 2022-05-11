#include <stdio.h>

void main (void){
    int X;
    float Y,conta;

    //armazendo a distancia
    scanf("%d",&X);
    //armazenando o combustivel gasto
    scanf("%f",&Y);

    conta = X/Y;

    printf("%.3f km/l\n", conta);
}
