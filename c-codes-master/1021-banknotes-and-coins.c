#include <stdio.h>
#include <math.h>
void main(){

    double val;
    int n;

    scanf("%lf", &val);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", (int)val/100);
    printf("%d nota(s) de R$ 50.00\n", ((int)val%100)/50);
    printf("%d nota(s) de R$ 20.00\n", ((int)val%100)%50/20);
    printf("%d nota(s) de R$ 10.00\n",((int)val%100%50%20)/10);
    printf("%d nota(s) de R$ 5.00\n", ((int)val%100%50%20%10)/5);
    printf("%d nota(s) de R$ 2.00\n", ((int)val%100%50%20%10%5)/2);

    //aqui eu coloquei o valor decimal em uma variavel int; e subtrai o valor inteiro dela, ficando apenas com o decimal
    //ai coloquei o decimal *100 para se tornar um número inteiro
    //Ex: n = 150.50 - 100| = .50| .50*100= 50;
    n=(val-(int)val)*100;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",((int)val%100%50%20%10%5%2)/1);
    printf("%d moeda(s) de R$ 0.50\n",n/50);
    printf("%d moeda(s) de R$ 0.25\n",(n%50)/25);
    printf("%d moeda(s) de R$ 0.10\n", (n%50%25)/10);
    printf("%d moeda(s) de R$ 0.05\n", (n%50%25%10)/5);
    printf("%d moeda(s) de R$ 0.01\n", (n%50%25%10%5)/1);
}

//SUBMISSION AT URI: 3/25/18, 5:37:03 PM
