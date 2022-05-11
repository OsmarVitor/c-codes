#include <stdio.h>

void main(){
    int n1,n2,tempo=0;

    scanf("%d %d", &n1, &n2);
    if(n1<n2){
        for(;n1<n2;n1++)
            tempo +=1;
    }
        else if(n2<n1){
            for(;n1<=23;n1++){
                tempo+=1;
            }
            for(;n2>=1;n2--){
                tempo+=1;
            }
        }
            else if (n1==n2)
                tempo = 24;

    printf("O JOGO DUROU %d HORA(S)\n", tempo);
}
