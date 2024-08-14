#include <stdio.h>
#include <math.h>

float seno_bhaskara(float x);
float seno_real(float x);

int main(){
    float angulo;

    printf("Entre com o valor do ângulo em graus: ");
    scanf("%f", &angulo);
    printf("Valor aproximado do seno: %.4f\n", seno_bhaskara(angulo));
    printf("Valor real do seno: %.4f\n", seno_real(angulo));
    return 0;
}

float seno_bhaskara(float x){
    if(x > 180){
        x = 360 - x;
        return (4 * x * (180 - x))/ (40500 - x * (180 - x)) * -1;
    }
    return (4 * x * (180 - x))/ (40500 - x * (180 - x));
}
float seno_real(float x){
    if(x > 180){
        return sin((360 - x )* (M_PI / 180 )) * -1;
    }
    return sin(x * (M_PI / 180 ));
}