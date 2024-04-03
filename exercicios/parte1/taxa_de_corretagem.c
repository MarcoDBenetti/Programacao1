#include <stdio.h>

int main()
{
    float valor_negociado, comissao;

    printf("Entre com o valor negociado: ");
    scanf("%f", &valor_negociado);

    if (valor_negociado > 500000) {
        comissao = 255 + 0.0009 * valor_negociado;
    } else if (valor_negociado > 50000) {
        comissao = 155 + 0.0011 * valor_negociado;
    } else if (valor_negociado > 20000) {
        comissao = 100 + 0.0022 * valor_negociado;
    } else if (valor_negociado > 6250) {
        comissao = 76 + 0.0034 * valor_negociado;
    } else if (valor_negociado > 2500) {
        comissao = 56 + 0.0066 * valor_negociado;
    } else {
        comissao = 30 + 0.017 * valor_negociado;
        if (comissao < 39) {
            comissao = 39;
        }
    }

    printf("Taxa de corretagem: $%.2f", comissao);

    return 0;
}