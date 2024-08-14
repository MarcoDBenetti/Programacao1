#include <stdio.h>
#include <time.h> // time
#include <stdlib.h> // rand, srand

int main(){
    int rolagens, freq[13]={}, dado1, dado2, soma;
    printf("Entre com o número de rolagens: ");
    scanf("%d", &rolagens);
    srand(time(NULL));

    for(int i = 0; i<rolagens; i++){
        dado1 = rand() % 6 +1;
        dado2 = rand() % 6 +1;
        soma = dado1 + dado2;
        freq[soma] ++;
    }

    for(int i=2; i < 13; i++){
        printf("%2d: %5.2f%%\n", i, (float)freq[i] * 100 / rolagens);
    }

    return 0;
}