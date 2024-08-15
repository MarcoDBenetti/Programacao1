#include <stdio.h>

#define MAX 100


int main(){
    int linhas, colunas, matriz[MAX][MAX], soma_linhas, soma_colunas;

    printf("Entre com o número de linhas e colunas: ");
    scanf("%d%d", &linhas, &colunas);

    printf("Entre com os elementos da matriz: \n");
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Somas das linhas: ");
    for(int i = 0; i < linhas; i++){
        soma_linhas = 0;
        for(int j = 0; j < colunas; j++){
            soma_linhas += matriz[i][j];
        }
        printf("%d ", soma_linhas);
    }
    printf("\nSomas das colunas: ");
    for(int j = 0; j < colunas; j++){
        soma_colunas = 0;
        for(int i = 0; i < linhas; i++){
            soma_colunas += matriz[i][j];
        }
        printf("%d ", soma_colunas);
    }
    printf("\n");
    return 0;
}