#include <stdio.h>
#include <math.h>

#define PI 3.14159
void main (void){
    double A,B,C,conta;
    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);
    conta = pow(C,2);

    printf("TRIANGULO: %.3lf\n", (A*C)/2);
    printf("CIRCULO: %.3lf\n", PI*conta);
    printf("TRAPEZIO: %.3lf\n", (A + B)*C/2);
    printf("QUADRADO: %.3lf\n", B*B);
    printf("RETANGULO: %.3lf\n", A*B);

}
