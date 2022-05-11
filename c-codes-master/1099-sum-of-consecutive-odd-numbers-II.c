#include <stdio.h>

void main(){
    int teste, n1,n2,i,j;
    int sum=0;

    scanf("%d", &teste);

    for(i=1; i<=teste; i++){
        scanf("%d %d", &n1, &n2);
        //13  17
        if(n1<n2){
            for(j=n1+1; j<n2; j++){
                if(j%2)
                    sum+=j;
            }
        }
            else if(n1>n2){
                for(j=n2+1; j<n1; j++){
                    if(j%2)
                        sum+=j;
                }
            }
                else
                    sum = 0;
        printf("%d\n",sum);
        sum=0;
        }
}
