#include <stdio.h>

int main(){
    float altura, largura, profundidade, volume, area, custo_cm2, custo_total;
    int qntd_caixas;

    printf("Insira o valor da altura:");
    scanf("%f", &altura);
    printf("Insira o valor da largura:");
    scanf("%f", &largura);
    printf("Insira o valor:");
    scanf("%f", &profundidade);

    volume = altura * largura * profundidade;
    area = 2 * (altura * largura + largura * profundidade + profundidade * altura);

    printf("\nVolume: %g cm³\n" , volume);
    printf("Área: %g cm²\n", area);

    printf("Informe o custo por cm²:");
    scanf("%f", &custo_cm2);
    printf("Informe a quantidade de caixas produzidas:");
    scanf("%d", &qntd_caixas);

    custo_total = custo_cm2 * qntd_caixas * area;

    printf("O custo total é: %.2f \n", custo_total);
    
    return 0;
}