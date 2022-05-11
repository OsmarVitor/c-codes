#include <stdio.h>

void main (void){
    int N;
    int H = 3600;
    int M = 60;
    int S= 60;

    //printf("Digite um numero: ");
    scanf("%d", &N);

    printf("%d:%d:%d\n",N/H, (N%H)/M, N%S );
}
