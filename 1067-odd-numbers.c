#include <stdio.h>

void main(){
    int num,i;

    scanf("%d", &num);

    for(i=1; i <=num;i++){
        if(i%2)
            printf("%d\n", i);
    }
}
