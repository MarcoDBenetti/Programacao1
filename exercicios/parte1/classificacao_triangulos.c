#include <stdio.h>

int main(){
    float lado1, lado2, lado3;

    printf("Entre com os lados do triângulo: ");
    scanf("%f%f%f", &lado1, &lado2, &lado3);

    printf("Triângulo ");
    if(((lado1+lado2)>lado3)&&((lado2+lado3)>lado1)&&((lado1+lado3)>lado2)){
        if((lado1==lado2)&&(lado2==lado3)){
            printf("equilátero\n");
        } else if((lado1==lado2)||(lado2==lado3)||(lado1==lado3)){
            printf("isósceles\n");
        } else if((lado1!=lado2)&&(lado2!=lado3)&&(lado1!=lado3)){
            printf("escaleno\n");
        }
    }else printf("inválido\n");
    return 0;
}