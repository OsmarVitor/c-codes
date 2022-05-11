#include <stdio.h>

void main(){
    double n1[100];
    int i;

    scanf("%lf", n1);

    printf("N[0] = %.4lf\n",n1[0]);
    for(i=1; i<100; i++){
        n1[i] = n1[i-1] / 2;
        printf("N[%d] = %.4lf\n", i,n1[i]);

    }
}
