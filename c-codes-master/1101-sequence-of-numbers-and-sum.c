#include <stdio.h>

void main(){
    int n1,n2,sum=0,i;

    while(1){
        scanf("%d %d", &n1,&n2);
        if(n1 <= 0 || n2<=0 || n1 ==n2)
            break;
        if(n1<n2){
            for(i=n1; i<=n2; i++){
                sum +=i;
                printf("%d ", i);
                if (i == n2)
                    printf("Sum=%d\n", sum);
            }
        }
            else
                for(i=n2; i<=n1; i++){
                    sum +=i;
                    printf("%d ",i);
                    if(i==n1)
                        printf("Sum=%d\n", sum);
                }
        sum=0;
    }
}
