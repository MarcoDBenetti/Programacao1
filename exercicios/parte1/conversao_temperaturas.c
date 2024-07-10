#include <stdio.h>

float converte_c_para_f(float t);
float converte_f_para_c(float t);
float converte_c_para_k(float t);
float converte_k_para_c(float t);
float converte_f_para_k(float t);
float converte_k_para_f(float t);
float converte_temperatura(float t, char origem, char destino);

int main()
{
    float temperatura;
    char origem, destino;

    printf("Entre com o valor da temperatura: ");
    scanf("%f", &temperatura);
    printf("Entre com a escala de origem (C, F, K): ");
    getchar();
    scanf("%c", &origem);
    printf("Entre com a escala de destino (C, F, K): ");
    getchar();
    scanf("%c", &destino);
    printf("Temperatura convertida: %.2f", converte_temperatura(temperatura, origem, destino));
    return 0;
}

float converte_c_para_f(float t)
{
    return 1.8 * t + 32;
}
float converte_f_para_c(float t)
{
    return (t - 32) / 1.8;
}
float converte_c_para_k(float t)
{
    return t + 273.15;
}
float converte_k_para_c(float t)
{
    return t - 273.15;
}
float converte_f_para_k(float t)
{
    return ((t - 32) / 1.8) + 273.15;
}
float converte_k_para_f(float t)
{
    return 1.8 * (t - 273.15) + 32;
}

float converte_temperatura(float t, char origem, char destino){
    switch(origem){
        case ('C'):
        if(destino == 'F')
        return converte_c_para_f(t);
        else if(destino == 'K')
        return converte_c_para_k(t);
        else break;
        case ('F'):
        if(destino == 'C')
        return converte_f_para_c(t);
        else if(destino == 'K')
        return converte_f_para_k(t);
        else break;
        case 'K':
        if(destino == 'C')
        return converte_k_para_c(t);
        else if(destino == 'F')
        return converte_k_para_f(t);
        else break;
    }
    return t;
}