#include <stdio.h>

int main()
{
    float valorFahrenheit, valorCelsius;
    printf("Entre com a temperatura em Fahrenheit: ");
    scanf("%f", &valorFahrenheit);
    valorCelsius = (valorFahrenheit - 32.0) * (5.0 / 9.0);
    printf("Temperatura em Celsius: %.1f", valorCelsius);

    return 0;
}