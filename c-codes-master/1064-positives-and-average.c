#include <stdio.h>

void main(){
    int cont,posi=0;
    float num,media=0;

    for(cont=1; cont <=6; cont++){
        scanf("%f", &num);
        if(num >0){
            posi+=1;
            media+=num;
        }
    }
    printf("%d valores positivos\n", posi);
    printf("%.1f\n", media/posi);
}
