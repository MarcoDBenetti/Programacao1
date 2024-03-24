#include <stdio.h>
#include <stdbool.h>

int main(){
    bool bissexto;
    int ano;

    printf("Entre com um ano: ");
    scanf("%d", &ano );
    bissexto = (!(ano%4)&&(ano%100))||!(ano%400);

    printf("Ano bissexto: %d\n", bissexto);


    return 0;
}