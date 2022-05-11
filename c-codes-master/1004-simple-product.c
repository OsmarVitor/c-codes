#include <stdio.h>
#include <locale.h>

void main (void){
setlocale(LC_ALL,"portugues");
    int n1, n2, PROD;

    scanf("%d", &n1);
    scanf("%d", &n2);

    PROD = n1 * n2;

    printf("PROD = %d\n", PROD);
}
