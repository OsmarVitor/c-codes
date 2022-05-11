#include <stdio.h>

void main(){
    int num,sum,i;

    while(1){
        scanf("%d", &num);
        sum =0;
        if(num == 0)
            break;
        if(num%2==0){
            for(i=1; i<=5; i++){
                sum+=num;
                num+=2;
            }
            printf("%d\n", sum);
        }
            else{
                num++;
                for(i=1; i<=5; i++){
                    sum+=num;
                    num+=2;
                }
                printf("%d\n", sum);
            }

    }
}
