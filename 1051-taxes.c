#include <stdio.h>

void main(){
    float sal;
    float taxa=0;

    scanf("%f", &sal);

    if(sal <= 2000){
        printf("Isento\n");
    }
    else if(sal > 2000 && sal < 3000){
        taxa = (sal - 2000)*8/100;
        printf("R$ %.2f\n",taxa);
    }
    else if(sal > 3000 && sal < 4500){
        taxa = ((sal - 3000)*18)/100;
        taxa += (1000*8)/100;
        printf("R$ %.2f\n",taxa);
    }
    else{
        taxa = (sal - 4500)*28/100;
        taxa += 1500*18/100;
        taxa += 1000*8/100;
        printf("R$ %.2f\n",taxa);
    }
}
