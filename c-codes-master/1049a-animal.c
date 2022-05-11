#include <stdio.h>
#include <string.h>

void main(){
    char tipo1[15];
    char tipo2[15];
    char tipo3[15];

    scanf("%s", &tipo1);
    scanf("%s", &tipo2);
    scanf("%s", &tipo3);

   if(tipo1[0] == 'v'){ //vertebrados
        if(tipo2[0] == 'a'){
            if(tipo3[0] == 'c')
                printf("aguia\n");
            else
                printf("pomba\n");
        }
        else if(tipo2[0] == 'm'){
                if(tipo3[0] == 'o')
                    printf("homem\n");
                else
                    printf("vaca\n");
        }
   }

   if(tipo1[0] == 'i'){ //invertebrados
        if(tipo2[0] == 'i'){
            if(tipo3[2] == 'm')
                printf("pulga\n");
            else
                printf("lagarta\n");
        }
        else if(tipo2[0] == 'a'){
            if(tipo3[0] == 'h')
                printf("sanguessuga\n");
            else
                printf("minhoca\n");
        }

   }
}

