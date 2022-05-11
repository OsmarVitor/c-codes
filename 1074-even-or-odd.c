#include <stdio.h>

void main(){
    int cont,i;
    scanf("%d", &cont);
    int num[cont];


    for(i=1; i<=cont; i++){
        scanf("%d", &num[i]);
    }

    for(i=1;i<=cont; i++){
        if(num[i]%2 && num[i] > 0){
            printf("ODD POSITIVE\n");
        }
            else if(num[i]%2 && num[i] < 0){
                printf("ODD NEGATIVE\n");
            }

        if(num[i]%2==0 && num[i] > 0){
            printf("EVEN POSITIVE\n");
        }
            else if(num[i]%2==0 && num[i] < 0){
                printf("EVEN NEGATIVE\n");
            }
        if(num[i] == 0)
            printf("NULL\n");
    }
}
