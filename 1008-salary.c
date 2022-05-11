#include <stdio.h>

void main (void){

int num,horas;
double sal,cont;

    scanf("%d",&num);
    scanf("%d", &horas);
    scanf("%lf",&sal);

    cont = horas* sal;

    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2lf\n", cont);

}
