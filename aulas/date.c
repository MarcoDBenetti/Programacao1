#include <stdio.h>

int main()
{
    int dia, mes, ano;

    printf("Informe a data: Ex. dd/mm/aaaa.");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    switch (mes) {
        case 1:
            printf("January ");
            break;
        case 2:
            printf("February ");
            break;
        case 3:
            printf("March ");
            break;
        case 4:
            printf("April ");
            break;
        case 5:
            printf("May ");
            break;
        case 6:
            printf("June ");
            break;
        case 7:
            printf("July ");
            break;
        case 8:
            printf("August ");
            break;
        case 9:
            printf("September ");
            break;
        case 10:
            printf("October ");
            break;
        case 11:
            printf("November ");
            break;
        case 12:
            printf("December ");
            break;
    }
    printf("%d", dia);
    switch (dia) {
        case 1:
        case 21:
        case 31:
            printf("st, ");
            break;
        case 2:
        case 22:
            printf("nd, ");
            break;
        case 3:
        case 23:
            printf("rd, ");
        default:
            printf("th, ");
            break;
    }
    printf("%d.\n", ano);

    return 0;
}