#include <stdio.h>
#include <locale.h>
int A, B, SOMA;

void main (void){
    setlocale(LC_ALL,"portuguese");
    scanf("%d", &A);
    scanf("%d", &B);

    SOMA = A + B;

    printf("SOMA = %d\n", SOMA);
}
