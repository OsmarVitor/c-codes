#include <stdio.h>

void main(){
    int num, vez, test, sum,i,j;

    scanf("%d", &vez);  //pegando o número de vezes

    for(i=1; i<=vez; i++){  //iniciando as vezes
        scanf("%d %d", &num, &test);    //pegando os valores e o teste
        sum =0;
        if(num%2){  //se for impar
            for(j=1; j<=test; j++){
                sum+=num;   //pegando a soma
                num+=2; //incrementando o num
            }
        }
        else{
            num++;
            for(j=1; j<=test; j++){
                sum+=num;   //pegando a soma
                num+=2; //incrementando o num
            }
        }

    printf("%d\n", sum);
}
}
