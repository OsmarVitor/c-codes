#include <stdio.h>

void main(){
    int n[10],i;

    for(i=0; i<10; i++){
        scanf("%d", &n[i]);
        if(n[i]<=0)
            n[i] = 1;
        printf("X[%d] = %d\n", i, n[i]);
    }

}
