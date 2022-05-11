#include <stdio.h>

void main (void){
    int time, velocity;
    double quant = 12.00;

    scanf("%d", &time);
    scanf("%d",&velocity);

    printf("%.3lf\n", (velocity/quant) * time);
}
