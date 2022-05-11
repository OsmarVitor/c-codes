#include <stdio.h>

void main(){
    int i,j;
    int cont=0;
    for(i=1, j=7;j<=15;){
        printf("I=%d J=%d\n",i,j);
        cont++;
        j--;
        if(cont%3==0){
            i+=2;
            j=6+i;
        }
    }
}
