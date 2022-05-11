#include <stdio.h>

void main(){

    int n1,n2,n3;

    scanf("%d %d %d", &n1,&n2,&n3);

    if (n1 > n2 && n2 > n3){
        printf("%d\n%d\n%d\n", n3,n2,n1);
        printf("\n%d\n%d\n%d\n", n1,n2,n3);

        //printf("\n%d\n%d\n%d\n", n1, n2 ,n3); na ordem decrescrente
    }
    else if (n2 > n3 && n3 > n1){
        printf("%d\n%d\n%d\n", n1, n3, n2);
        printf("\n%d\n%d\n%d\n", n1,n2,n3);
        //printf("\n%d\n%d\n%d\n", n2, n3, n1); na ordem decrescrente
    }
    else if (n2 > n1 && n1 > n3){
        printf("%d\n%d\n%d\n", n3,n1,n2);
        printf("\n%d\n%d\n%d\n", n1,n2,n3);
        //printf("\n%d\n%d\n%d\n", n2,n1,n3);   na ordem decrescrente
    }
    else if (n3 > n2 && n2 > n1){
        printf("%d\n%d\n%d\n", n1,n2,n3);
        printf("\n%d\n%d\n%d\n", n1,n2,n3);
        //printf("\n%d\n%d\n%d\n", n3,n2,n1);   na ordem decrescrente
    }
    else if (n3 > n1 && n1 > n2){
        printf("%d\n%d\n%d\n", n2,n1,n3);
        printf("\n%d\n%d\n%d\n", n1,n2,n3);
        //printf("\n%d\n%d\n%d\n", n3,n1,n2);   na ordem decrescente
    }
    else if (n1>n3 && n3 > n2){
        printf("%d\n%d\n%d\n", n2,n3,n1);
        printf("\n%d\n%d\n%d\n", n1,n2,n3);
    }
}
