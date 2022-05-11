#include <stdio.h>
#include <math.h>

void main (void){
char nome[20];
double sal,vendas,conta;

    scanf("%s", &nome);
    scanf("%lf", &sal);
    scanf("%lf", &vendas);
    conta = (vendas * 15)/100;

    printf("TOTAL = R$ %.2lf\n", conta + sal);
}
