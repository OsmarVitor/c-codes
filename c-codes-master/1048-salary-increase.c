//reajuste salarial de um funcionáriio;
/* 0  - 400.00       = 15%
   400.01 - 800.00   = 12%
   800.01 - 1200.00  = 10%
   1200.01 - 2000.00 = 7%
   > 2.000           = 4%
*/
#include <stdio.h>

int main(){
    float sal,reajust;
    int perc;

    scanf("%f", &sal);

    if(sal >=0 && sal <=400.00){
        reajust = (sal/100)*15;
        perc = 15;
        sal +=reajust;
    }
        else if(sal >= 400.01 && sal <= 800.00){
                reajust = (sal/100)*12;
                perc = 12;
                sal +=reajust;
        }
            else if(sal >= 800.01 && sal <= 1200.00){
                reajust = (sal/100)*10;
                perc = 10;
                sal +=reajust;
            }
                else if(sal >=1200.01 && sal <= 2000.00){
                    reajust = (sal/100)*7;
                    perc = 7;
                    sal +=reajust;
                }
                else if(sal > 2.000){
                    reajust = (sal/100)*4;
                    perc = 4;
                    sal +=reajust;
                }

    printf("Novo salario: %.2f\n", sal);
    printf("Reajuste ganho: %.2f\n", reajust);
    printf("Em percentual: %d %%\n", perc);
return 0;
}
