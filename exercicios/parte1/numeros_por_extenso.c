#include <stdio.h>
#include <string.h>

int main()
{
    int n, dezenas, unidades;
    printf("Entre com um inteiro de 1 a 99: ");
    scanf("%d", &n);
    printf("Número por extenso: \"");
    dezenas = n / 10;
    unidades = n % 10;
    if (dezenas == 1) {
        if (unidades == 0) {
            printf("dez");
        } else if (unidades == 1) {
            printf("onze");
        } else if (unidades == 2) {
            printf("doze");
        } else if (unidades == 3) {
            printf("treze");
        } else if (unidades == 4) {
            printf("quatorze");
        } else if (unidades == 5) {
            printf("quinze");
        } else if (unidades == 6) {
            printf("dezesseis");
        } else if (unidades == 7) {
            printf("dezessete");
        } else if (unidades == 8) {
            printf("dezoito");
        } else if (unidades == 9) {
            printf("dezenove");
        }
    } else {
        switch (dezenas) {
            case (2):
                printf("vinte");
                break;
            case (3):
                printf("trinta");
                break;
            case (4):
                printf("quarenta");
                break;
            case (5):
                printf("cinquenta");
                break;
            case (6):
                printf("sessenta");
                break;
            case (7):
                printf("setenta");
                break;
            case (8):
                printf("oitenta");
                break;
            case (9):
                printf("noventa");
                break;
        }
        if (dezenas > 1 && unidades > 1) {
            printf(" e ");
        }
        switch (unidades) {
            case (1):
                printf("um");
                break;
            case (2):
                printf("dois");
                break;
            case (3):
                printf("três");
                break;
            case (4):
                printf("quatro");
                break;
            case (5):
                printf("cinco");
                break;
            case (6):
                printf("seis");
                break;
            case (7):
                printf("sete");
                break;
            case (8):
                printf("oito");
                break;
            case (9):
                printf("nove");
                break;
                return 0;
        }
        if (dezenas == 0 && unidades == 0) {
            printf("Zero");
        }
    }
    printf("\"");
    return 0;
}