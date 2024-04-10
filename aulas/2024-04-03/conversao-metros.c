#include <stdio.h>
#include <math.h>

const int POL_POR_PE = 12;
const float CM_POR_POL = 2.54;

int main()
{
    float altura_m;
    int polegadas, pes;

    printf("Escreva a altura em metros: Ex: 1.85\n");
    scanf("%f", &altura_m);

    polegadas = round((altura_m * 100) / CM_POR_POL);
    pes = polegadas  / POL_POR_PE;
    polegadas = polegadas % POL_POR_PE;

    printf("A altura em polegadas é: %d'%d\"\n", pes, polegadas);

    return 0;
}