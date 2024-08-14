#include <stdio.h>
#define VALOR_INICIAL 10000.0
#define TAXA_INICIAL 6.0
#define PASSO_TAXA 0.5
#define NUM_TAXAS 5
#define NUM_ANOS 4

int main(){
    float taxa[NUM_TAXAS], valor[NUM_TAXAS];

    for(int i=0; i<NUM_TAXAS; i++){
        taxa[i] = TAXA_INICIAL + i * PASSO_TAXA;
        valor[i] = VALOR_INICIAL;
    }
    printf("Ano");
        for(int i=0; i<NUM_TAXAS; i++){
            printf("%9.1f%%", taxa[i]);
        }
        printf("\n");
    for(int ano = 0; ano < NUM_ANOS; ano++){
        printf("  %1.d", ano+1);
        for(int i= 0; i < NUM_TAXAS; i++){
            valor[i] += valor[i] * taxa[i]/100.0;
            printf("%10.2f", valor[i]);
        }
        printf("\n");
    }

    return 0;
}