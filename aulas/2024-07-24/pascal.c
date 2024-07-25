#include <stdio.h>

int potencia_fatorial(int x, int m);
int coeficiente_binomial(int n, int k);
void imprime_pascal(int n_max);

int main()
{
    int n_max, n, k=4;

    printf("Entre com n máximo: ");
    scanf("%d", &n_max);
 
    return 0;
}

int potencia_fatorial(int x, int m)
{
    int pot_fat = 1;
    for (int i = x; i > m; i--) {
        pot_fat *= i;
    }
    return pot_fat;
}

int coeficiente_binomial(int n, int k)
{
    return potencia_fatorial(n, k) / potencia_fatorial(k, k);
}

void imprime_pascal(int n_max)
{
    for (int n = 0; n < n_max; n++) {
        for (int k = n_max; k > 0; k--) {

        }
    }
}