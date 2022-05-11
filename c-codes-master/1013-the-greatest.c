#include <stdio.h>
#include <math.h>

void main (void){
    int a, b, c,cont;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a>b && a>c){
        printf("%d eh o maior\n",a);
    }
        else if(b>a&&b>c){
            printf("%d eh o maior\n",b);
        }
            else{
                printf("%d eh o maior\n",c);
            }
}
