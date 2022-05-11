#include <stdio.h>

void main(){
    float a,b,c,peri,area;

    scanf("%f %f %f", &a, &b, &c);
    peri = a+b+c;
    area = (a+b)*c/2;

    if (a > b-c && a < b+c){
        if (b > a-c && b < a+c)
            if (c > b-a && c < b+a)
                printf("Perimetro = %.1f\n", peri);
    }
    else
        printf("Area = %.1f\n", area);


    /*else if (b > a-c && b <= a+c)
        printf("Perimetro = %.1f", peri);

    else if (c > b-a && c <= b+a)
        printf("Perimetro = %.1f", peri);

*/
}
