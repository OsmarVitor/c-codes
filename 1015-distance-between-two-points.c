#include <stdio.h>
#include <math.h>
void main (void){
    double x1,x2,y1,y2,dist;

    scanf("%lf",&x1);
    scanf("%lf",&y1);
    scanf("%lf",&x2);
    scanf("%lf",&y2);

    dist =(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    dist = sqrt(dist);

    printf("%.4lf\n",dist);
}
