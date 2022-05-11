#include <stdio.h>

void main (void){

    double A,B,MEDIA;

    scanf("%lf",&A);
    scanf("%lf",&B);

    while(A < 0|| A >10.0 ||B<0 ||B>10.0){
        system("cls");
        scanf("%lf", &A);
        scanf("%lf", &B);}

    MEDIA = (A*3.5+B*7.5) /11;

    printf("MEDIA = %.5lf\n",MEDIA);
}
