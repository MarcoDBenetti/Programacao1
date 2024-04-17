#include <stdio.h>

int main()
{
    float n1, n2;
    char operacao;

    printf("Entre com a expressão:");
    scanf("%f %c %f", &n1, &operacao, &n2);

    switch (operacao) {
        case '+':
            printf("%.2f \n", (n1 + n2));
            break;
        case '-':
            printf("%.2f \n", (n1 - n2));
            break;
        case '/':
            if (n2 == 0) {
                printf("Erro: Divisão por zero.\n");
                break;
            } else {
                printf("%.2f\n", (n1 / n2));
                break;
            }
        case '*':
            printf("%g\n", (n1 * n2));
            break;
    }
    return 0;
}