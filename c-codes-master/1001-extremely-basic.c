#include <stdio.h>
#include <locale.h>

int A, B, X;

void main (void){
setlocale(LC_ALL,"portuguese");
    scanf("%d",&A);
    scanf("%d",&B);

    X= A+B;

    printf("X = %d\n",X);
}
