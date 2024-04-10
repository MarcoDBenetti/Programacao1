#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    float p1_1, p1_2, r1, p2, r2, frequencia, media;
    bool aprovado;

    printf("Entre com os valores P1.1, P1.2, R1, P2, R2 e FREQUÊNCIA\n");
    scanf("%f %f %f %f %f %f", &p1_1, &p1_2, &r1, &p2, &r2, &frequencia);
    media = fmaxf((p1_1 + p1_2), r1);
    media += fmaxf(p2, r2);
    media = round(media / 2);
    aprovado = frequencia >= 75 && media >= 6;

    printf("O aluno está aprovado: %d com média %.2f\nLEGENDA: 1 -> APROVADO / 2 -> REPROVADO \n", aprovado, media);

    return 0;
}