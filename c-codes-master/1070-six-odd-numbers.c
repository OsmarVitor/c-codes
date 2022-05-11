#include <stdio.h>

void main(){
    int num, i;

    scanf("%d", &num);

    for(i=num; i<=num+12; i++){
        if(i%2)
            printf("%d\n",i);

    }

}
