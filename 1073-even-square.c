#include <stdio.h>
#include <math.h>
void main(){
    int num,i;

    scanf("%d", &num);

    for(i=1; i<=num; i++){
        if (i % 2 == 0)
            printf("%d^%d = %d\n", i, 2, i*i );
    }

}
