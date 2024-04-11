#include <stdio.h>

int main(){
    float peso, altura, imc;

    printf("Informe a altura:");
    scanf("%f", &altura);

    printf("Informe o peso:");
    scanf("%f", &peso);
    imc = peso/(altura * altura);

    if(imc>= 30){
        printf("Seu IMC é %.2f e classificação: Obesidade.\n", imc);
    }else if (imc >= 25) {
        printf("Seu IMC é %.2f e classificação: Sobrepeso.\n", imc);
    }else if (imc >= 18.5) {
        printf("Seu IMC é %.2f e classificação: Peso normal.\n", imc);
    }else {
        printf("Seu IMC é %.2f e classificação: Abaixo do peso.\n", imc);
    }

    return 0;
}