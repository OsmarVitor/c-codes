#include <stdio.h>

void main(){
    int cont, par=0, impar=0,posi=0,negat=0;
    int num;

    for(cont=1; cont<=5; cont++){
        scanf("%d", &num);

        if(num%2==0){
            par+=1;
        }
        if(num%2){
            impar+=1;
        }
        if(num>0){
            posi+=1;
        }
        if(num<0){
            negat+=1;
        }
    }
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n",posi);
    printf("%d valor(es) negativo(s)\n", negat);
}
