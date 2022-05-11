#include <stdio.h>

double A,B,C,MEDIA;

void main(void){

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    while (A<0 || A>10.0 || B <0 || B>10.0 || C<0 || C>10.0){
        system("cls");
        scanf("%lf", &A);
        scanf("%lf", &B);
        scanf("%lf", &C);}

    MEDIA = (A*2+B*3+C*5) /10;

    printf("MEDIA = %.1lf\n", MEDIA);
}
