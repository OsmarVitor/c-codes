#include <stdio.h>

void main(){
    int test,i,j;
    float n1,n2,n3;

    scanf("%d", &test);

    for(i=1; i<=test; i++){
            scanf("%f", &n1);
            n1 *=2;
            scanf("%f", &n2);
            n2 *=3;
            scanf("%f", &n3);
            n3 *=5;
        printf("%.1f\n", (n1+n2+n3) / 10);
    }

}
