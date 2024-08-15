#include <stdio.h>
#include<time.h>
#include<stdlib.h>

#define NAIPE 4 //{E, C, O, P}
#define N 13 //{A, 2, 3, 4, 5, 6, 7, 8, 9, X, J, Q, K}

int main(){
    int baralho[N][NAIPE] = {}, n_cartas, sorteio_n, sorteio_naipe;
    char arranjo_n[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'X', 'J', 'Q','K'}, arranjo_naipe[4] = {'E', 'C', 'O', 'P'};

    printf("Entre com o número de cartas: ");
    scanf("%d", &n_cartas);
    srand(time(NULL));
    setbuf(stdout, NULL);

    for(int i = 0; i < n_cartas; i++){
        sorteio_naipe = rand() % 3;
        sorteio_n = rand() % 12;
        if(!baralho[sorteio_n][sorteio_naipe]){
           baralho[sorteio_n][sorteio_naipe] = 1;
           printf("%c%c ", arranjo_n[sorteio_n], arranjo_naipe[sorteio_naipe]);
        } else i--;
        if(i > 51){
            printf("\nTodas as cartas foram jogadas.\n");
            //i = n_cartas;
            break; // tentei com as duas opções mas ambas travam o programa.
        }
    }
    printf("\n");
    return 0;
}
