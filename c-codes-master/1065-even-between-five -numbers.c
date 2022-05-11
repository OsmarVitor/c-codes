#include <stdio.h>

void main(){
    int cont, pares=0;
    float num;

    for(cont=1; cont<=5; cont++){
        scanf("%f", &num);
        if((int)num%2==0)
            pares+=1;
    }
    printf("%d valores pares\n", pares);
}
