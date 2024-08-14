#include <ctype.h>
#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Ponto;

void mover_ponto(Ponto *p, char direcao, float distancia);
float calcular_distancia(Ponto p1, Ponto p2);

int main(){
    char direcao;
    float distancia;
    Ponto p1 = {0, 0};
    Ponto p2 = {10, 10};
    printf("Entre com os movimentos do robô 1: ");
    for (int i=0; i<3; i++) {
        scanf(" %c %f", &direcao, &distancia);
        mover_ponto(&p1, direcao, distancia);      
    }
    printf("Entre com os movimentos do robô 2: ");
    for (int i=0; i<3; i++) {
        scanf(" %c %f", &direcao, &distancia);
        mover_ponto(&p2, direcao, distancia);      
    }
    printf("Posição final do robô 1: (%g, %g)\n", p1.x, p1.y);
    printf("Posição final do robô 2: (%g, %g)\n", p2.x, p2.y);
    printf("Distância entre os robôs: %f\n", calcular_distancia(p1, p2));
    return 0;
}

void mover_ponto(Ponto *p, char direcao, float distancia){
    direcao = toupper(direcao);
    switch(direcao){
        case('N'): 
            p->y+=distancia;
            break;
        case('S'):
            p->y-=distancia;
            break;
        case('L'):
            p->x+=distancia;
            break;
        case('O'):
            p->x-=distancia;
            break;
    }
}
float calcular_distancia(Ponto p1, Ponto p2){
    float distancia;
    //distancia = sqrt(pow(p1.x - p2.x, 2) + pow(p1.x - p2.y, 2));
    distancia = hypot((p1.x - p2.x), (p1.y - p2.y));
    return distancia;
}