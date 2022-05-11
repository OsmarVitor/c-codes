#include <stdio.h>
#include <stdlib.h>

void main(){
    long int num;
    long int i;

    scanf("%d", &num);

    for(i=1; i<=10000; i++){
        if(i%num == 2){
            printf("%li\n",i);
        }
    }
}
