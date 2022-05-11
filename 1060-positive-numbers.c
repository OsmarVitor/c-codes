#include <stdio.h>

void main(){
    int cont,posi=0;
    float num;

    for(cont=1; cont <=6; cont++){
        scanf("%f", &num);
        if(num >0)
            posi+=1;
    }
    printf("%d valores positivos\n", posi);
}
