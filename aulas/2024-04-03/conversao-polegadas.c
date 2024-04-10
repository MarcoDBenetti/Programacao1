#include <stdio.h>
#include <math.h>

int main()
{
    int pe;
    float altura_em_metros, polegada;

    printf("Escreva a altura em pés + polegadas:(Ex: 5 8)");
    scanf("%d %f", &pe, &polegada);

    polegada = (pe * 12) + polegada;

    altura_em_metros = round(polegada * 2.54) / 100;

    printf("A altura em metros é: %g m\n",altura_em_metros);

    return 0;
}