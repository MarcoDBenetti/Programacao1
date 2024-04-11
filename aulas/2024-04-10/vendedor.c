#include <stdio.h>

int main(){
    float salario, comissao, meta, total_vendas;
    int avaliacao_desempenho;

    salario = 2000;
    printf("Informe o valor total de vendas:");
    scanf("%f", &total_vendas);
    printf("Informe a nota da avaliação de desmpenho:");
    scanf("%d", &avaliacao_desempenho);

    if(total_vendas>=10000){
        salario+= (total_vendas*0.07);
    } else {
        salario+= (total_vendas*0.05);
    }

    if (avaliacao_desempenho>=8){
        salario+= 500;
    }

    printf("A remuneração final é: %.2f \n", salario);
    return 0;
}