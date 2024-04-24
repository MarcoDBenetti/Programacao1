#include <stdio.h>
#include <stdbool.h>

bool eh_bissexto(int ano);
bool eh_data_valida(int dia, int mes, int ano);
int ordinal_dia(int dia, int mes, int ano);

int main()
{
    int dia, mes, ano;
    printf("Informe uma data dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    if (eh_data_valida(dia, mes, ano)) {
        printf("É o %dº dia do ano.", ordinal_dia(dia, mes, ano));
    } else
        printf("Informe uma data válida.");
    return 0;
}

bool eh_bissexto(int ano)
{
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

bool eh_data_valida(int dia, int mes, int ano)
{
    if (mes <= 12) {
        if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            if (dia <= 30)
                return true;
        } else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
            if (dia <= 31)
                return true;
        } else if (mes == 2) {
            if (dia <= 28)
                return true;
            else if (eh_bissexto(ano) && dia <= 29)
                return true;
            ;
        }
    }
    return false;
}

int ordinal_dia(int dia, int mes, int ano)
{
    int ordinal = 0;
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
    ordinal += dia;
    return ordinal;
}