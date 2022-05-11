#include <stdio.h>

void main (void){
    int cod1,cod2, quant1,quant2;
    double valor1, valor2;
    double cont;
    //recebendo os valores
    scanf("%d", &cod1);
    getchar();
    scanf("%d", &quant1);
    getchar();
    scanf("%lf", &valor1);
    getchar();

    scanf("%d", &cod2);
    getchar();
    scanf("%d", &quant2);
    getchar();
    scanf("%lf", &valor2);
    getchar();
    //fazendo a conta de quantidade X valor e somando;
    cont = (quant1 * valor1) + (quant2 * valor2);

    printf("VALOR A PAGAR: R$ %.2lf\n", cont);
}
