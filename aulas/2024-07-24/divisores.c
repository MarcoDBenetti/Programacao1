#include <stdio.h>

int main()
{
    int n, cont = 0;

    printf("Entre com um inteiro positivo: ");
    scanf("%d", &n);
    printf("Divisores: [");
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            if (i < n) {
                printf("%d, ", i);
            } else
                printf("%d]\n", n);
            cont++;
        }
    }
    if (cont == 2) {
        printf("É primo.\n");
    } else if (cont == 4)
        printf("É primo de Grothendieck.\n");
    else
        printf("Não é primo.\n");

    return 0;
}