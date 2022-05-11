#include <stdio.h>
#include <math.h>

void main(){
    double a,b,c,aux;
    scanf("%lf %lf %lf", &a, &b, &c);
    if(b > a){
        aux = a;
        a = b;
        b = aux;
    }
    if(b < c){
        aux = b;
        b = c;
        c = aux;
    }
    if(b > a){
        aux = a;
        a = b;
        b = aux;
    }

    if(a >= b + c){
        printf("NAO FORMA TRIANGULO\n");
        return;
    }

    if(pow(a,2) == pow(b,2) + pow(c,2))
        printf("TRIANGULO RETANGULO\n");

    if(pow(a,2) > ((pow(b,2)) + (pow(c,2))))
        printf("TRIANGULO OBTUSANGULO\n");

    if(pow(a,2) < pow(b,2) + pow(c,2))
        printf("TRIANGULO ACUTANGULO\n");

    if(b==a && b==c)
        printf("TRIANGULO EQUILATERO\n");
    else if(b==c || b==a){
        printf("TRIANGULO ISOSCELES\n");
    }

}
