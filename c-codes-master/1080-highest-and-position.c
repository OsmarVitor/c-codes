#include <stdio.h>
#define TAM 100

void main(){
    int num[TAM];
    int teste[2];
    int i;

    for(i=0; i<=TAM-1; i++){
        scanf("%d", &num[i]);
        if(i==0){
            teste[0] = num[i];
            teste[1] = i+1;
        }
            else if(num[i]>teste[0]){
                teste[0] = num[i];
                teste[1] = i+1;
            }

    }

    printf("%d\n%d\n", teste[0], teste[1]);
}
