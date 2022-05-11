//31/03/18 URI-lista01 -1040 Média 3
#include <stdio.h>

void main(){
    float n1,n2,n3,n4,media,n_exame;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = (n1*2 + n2*3 + n3*4 + n4*1) / 10;           //calculando a média ponderada

    //teste condicional das notas
    if (media >= 7.0)
        printf("Media: %.1f\nAluno aprovado.\n", media);

    else if (media < 5)
        printf("Media: %.1f\nAluno reprovado.\n", media);

    else if (media >=5 && media <=6.9)                      //aluno em exame
    {
        scanf("%f", &n_exame);                              //lendo a nota do exame
        printf("Media: %.1f\nAluno em exame.\n", media);
        printf("Nota do exame: %.1f\n", n_exame);
        media = (media + n_exame) /2;                       //recalculando a média com base na media anterior
        if (media >= 5.0)                                   //teste com amedia depois no exame
            printf("Aluno aprovado.\nMedia final: %.1f\n",media);
        else
            printf("Aluno reprovado.\nMedia final: %.1f\n",media);
    }
}
