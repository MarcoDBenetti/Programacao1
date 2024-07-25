#include <stdio.h>

int main()
{
    int n, fora;
    float phMin, phMax, leitura;

    printf("Entre com a faixa de pH adequada:");
    scanf("%f %f", &phMin, &phMax);
    printf("Entre com o número de medições:");
    scanf("%d", &n);
    printf("Entre com as medições de pH:");
    for (int i = 0; i < n; i++) {
        scanf("%f", &leitura);
        if (leitura < phMin || leitura > phMax)
            fora++;
    }
    printf("Número de medições fora da faixa:");
    return 0;
}