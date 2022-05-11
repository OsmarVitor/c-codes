#include <stdio.h>

void main(){
    int teste,i,total=0,aux1;
    int typec=0, typer=0, types=0;
    char aux2;

    scanf("%d", &teste);

    for(i=1; i<=teste; i++){
        scanf("%d %c", &aux1,&aux2);

        switch(aux2){
            case 'C':
                typec += aux1;
                break;

            case 'R':
                typer += aux1;
                break;

            case 'S':
                types += aux1;
                break;
            }

        }
        total += types + typec + typer;
        printf("Total: %d cobaias\n",total);
        printf("Total de coelhos: %d\n", typec);
        printf("Total de ratos: %d\n", typer);
        printf("Total de sapos: %d\n", types);
        printf("Percentual de coelhos: %.2f %%\n",((float)typec*100)/total);
        printf("Percentual de ratos: %.2f %%\n", ((float)(typer)*100)/total);
        printf("Percentual de sapos: %.2f %%\n", ((float)(types)*100)/total);
}
