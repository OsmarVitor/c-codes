#include <stdio.h>

void main(){
    int num,i, in,out;
    in = 0;
    out = 0;
    scanf("%d", &num);

    int vet[num];

    for(i=1; i <= num; i++){
        scanf("%d", &vet[i]);
    }

    for(i=1; i<=num; i++){
        if(vet[i] >= 10 && vet[i] <= 20)
            in ++;
            else
                out ++;
    }

    printf("%d in\n", in);
    printf("%d out\n", out);
}
