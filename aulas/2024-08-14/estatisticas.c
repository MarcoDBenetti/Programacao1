#include <stdio.h>
#include <math.h>  // INFINITY

#define MAX 100

typedef struct {
    float minimo, maximo, media;
} Estatisticas;

Estatisticas calcula_estatisticas(int n, float a[]);

int main()
{
    int nNumeros;
    float a[MAX];
    Estatisticas estatisticaMain;

    printf("Entre com o número de elementos (máx 100): ");
    scanf("%d", &nNumeros);
    printf("Entre com os elementos: ");
    for (int i = 0; i < nNumeros; i++) {
        scanf("%f", &a[i]);
    }
    estatisticaMain = calcula_estatisticas(nNumeros, a);
    printf("Média: %.2f\n", estatisticaMain.media);
    printf("Mínimo: %g\n", estatisticaMain.minimo);
    printf("Máximo: %g\n", estatisticaMain.maximo);

    return 0;
}

Estatisticas calcula_estatisticas(int n, float a[])
{
    Estatisticas estatistica = {INFINITY, -INFINITY, 0.0};
    float soma = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < estatistica.minimo) {
            estatistica.minimo = a[i];
        }
        if (a[i] > estatistica.maximo) {
            estatistica.maximo = a[i];
        }
        soma += a[i];
    }
    estatistica.media = soma / n;
    return estatistica;
}