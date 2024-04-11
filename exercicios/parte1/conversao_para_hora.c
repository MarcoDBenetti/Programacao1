#include <stdio.h>

int main()
{
    int segundos, horas, minutos;

    printf("Entre com a quantidade de segundos: ");
    scanf("%d", &segundos);

    horas = (segundos - (segundos % 3600)) / 3600;
    segundos = segundos - (horas * 3600);
    minutos = (segundos - (segundos % 60)) / 60;
    segundos = segundos - (minutos * 60);

    if (horas > 0) {
        printf("%d %s", horas, horas>1 ? "horas" : "hora");
        if(minutos!=0 || segundos!=0){
            printf(", ");
        }
    } 
    if (minutos > 0) {
        printf("%d %s", minutos, minutos>1 ? "minutos" : "minuto");
        if(segundos!=0){
            printf(", ");
        }
    } 
    if (segundos > 0) {
        printf("%d %s", segundos, segundos>1 ? "segundos" : "segundo");
    } else if (segundos == 1) {
        printf("%d segundo", segundos);
    }
    printf("\n");
    return 0;
}