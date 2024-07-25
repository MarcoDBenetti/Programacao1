#include <stdio.h>
#define CAPACIDADE 400.0
int main() {
    float quant_chuva, acumulado=0;

    for(int i=1; i <= 7; i++){
        printf("Entre com a quantidade de chuva do dia %d em litros: ", i);
        scanf("%f", &quant_chuva);
        if(acumulado <= CAPACIDADE){
            acumulado += quant_chuva;
        } 
        if(acumulado > CAPACIDADE){
            printf("O reservatório transbordou no dia %d\n", i);
            break;
        }
    }
    if(acumulado <= CAPACIDADE ){
        printf("O reservatório não transbordou. Espaço livre: %.2f litros.\n", CAPACIDADE - acumulado);
    }



    return 0;
}