#include <stdio.h>

int main()
{
    int centavos, m50, m25, m10, m5, m1;

    printf("Entre com a quantidade de centavos: ");
    scanf("%d", &centavos);

    m50 = (centavos - (centavos % 50)) / 50;
    centavos = centavos - (m50 * 50);
    m25 = (centavos - (centavos % 25)) / 25;
    centavos = centavos - (m25 * 25);
    m10 = (centavos - (centavos % 10)) / 10;
    centavos = centavos - (m10 * 10);
    m5 = (centavos - (centavos % 5)) / 5;
    centavos = centavos - (m5 * 5);
    m1 = (centavos - (centavos % 1)) / 1;

    printf("Moedas de 50 centavos: %d\n", m50);
    printf("Moedas de 25 centavos: %d\n", m25);
    printf("Moedas de 10 centavos: %d\n", m10);
    printf("Moedas de 5 centavos: %d\n", m5);
    printf("Moedas de 1 centavo: %d\n", m1);
    return 0;
}