#include <stdio.h>

void main(){
    int num1, num2, i, soma=0;
    scanf("%d %d", &num1, &num2);

    if(num1 < num2){
        for(i=num1; i<num2; i++){
            if(i%2)
                soma+=i;
        }
        printf("%d\n", soma);

    }

        else if(num1 > num2){
            for(i=num2+1; i<num1; i++){
                if(i%2)
                    soma+=i;
            }
            printf("%d\n", soma);
        }

            else
                printf("0\n");

}
