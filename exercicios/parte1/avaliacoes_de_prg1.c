#include <stdio.h>

float max(float x, float y);
float media(float x, float y, float z);
int arredonda(float x);

int main()
{
    float p1, p2, p3, r1, r2, r3, freq;
    int media_geral;

    printf("Entre com P1 e R1: ");
    scanf("%f%f", &p1, &r1);
    printf("Entre com P2 e R2: ");
    scanf("%f%f", &p2, &r2);
    printf("Entre com P3 e R3: ");
    scanf("%f%f", &p3, &r3);
    printf("Entre com a frequência (%%): ");
    scanf("%f", &freq);
    media_geral = arredonda(media(max(p1, r1), max(p2, r2), max(p3, r3)));
    if (media_geral >= 6 && freq >= 75) {
        printf("Resultado final: %d\n", media_geral);
        printf("Situação: aprovado\n");
    } else if (freq < 75) {
        printf("Resultado final: 0\n");
        printf("Situação: reprovado\n");
    } else {
        printf("Resultado final: %d\n", media_geral);
        printf("Situação: reprovado\n");
    }
    return 0;
}

float max(float x, float y)
{
    return x > y ? x : y;
}

float media(float x, float y, float z)
{
    return (x + y + z) / 3;
}

int arredonda(float x)
{
    return (x >= 0) ? (int)(x + 0.5) : (int)(x - 0.5);
}