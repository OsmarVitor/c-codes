#include <stdio.h>

void main(){
    int n1,n2;

    for(n2=60,n1=1; n2 >=0; n2-=5,n1+=3){
        printf("I=%d J=%d\n", n1,n2);
    }

}
