#include <stdio.h>
#include <stdbool.h>

bool eh_bissexto(int ano);
bool eh_data_valida(int dia, int mes, int ano);
int ordinal_dia(int dia, int mes, int ano);
int num_dias(int mes, int ano);

int main()
{
    int dia, mes, ano;
    printf("Informe uma data dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    if (eh_data_valida(dia, mes, ano)) {
        printf("É o %dº dia do ano.\n", ordinal_dia(dia, mes, ano));
    } else
        printf("Informe uma data válida.\n");
    return 0;
}

bool eh_bissexto(int ano)
{
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

int num_dias(int mes, int ano)
{
    switch (mes) {
        case 2:
            return eh_bissexto(ano) ? 29 : 28;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        default:
            return 31;
    }
}
bool eh_data_valida(int dia, int mes, int ano)
{
    if (mes >= 1 && mes <= 12)
        return true;
    return 1 <= dia && dia <= num_dias(mes, ano);
}

int ordinal_dia(int dia, int mes, int ano)
{
    int ordinal = dia;
    switch (mes - 1) {
        case 11:
            ordinal += 30;
        case 10:
            ordinal += 31;
        case 9:
            ordinal += 30;
        case 8:
            ordinal += 31;
        case 7:
            ordinal += 31;
        case 6:
            ordinal += 30;
        case 5:
            ordinal += 31;
        case 4:
            ordinal += 30;
        case 3:
            ordinal += 31;
        case 2:
            if (eh_bissexto(ano))
                ordinal += 29;
            else
                ordinal += 28;
        case 1:
            ordinal += 31;
    }
    return ordinal;
}