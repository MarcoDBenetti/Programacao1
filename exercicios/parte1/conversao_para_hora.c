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

    if (horas > 0 && horas > 1) {
        printf("%d horas", horas);
        if(minutos!=0 || segundos!=0){
            printf(", ");
        }
    } else if (horas == 1) {
        printf("%d hora", horas);
        if(minutos!=0 || segundos!=0){
            printf(", ");
        }
    }
    if (minutos > 0 && minutos > 1) {
        printf("%d minutos", minutos);
        if(segundos!=0){
            printf(", ");
        }
    } else if (minutos == 1) {
        printf("%d minuto", minutos);
        if(segundos!=0){
            printf(", ");
        }
    }
    if (segundos > 0 && segundos > 1) {
        printf("%d segundos", segundos);
    } else if (segundos == 1) {
        printf("%d segundo", segundos);
    }
    printf("\n");
    return 0;
}