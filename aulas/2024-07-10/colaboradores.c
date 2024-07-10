#include <stdio.h>

int main()
{
    float salario, horas, pagamento, total = 0.0;
    int i = 1;
    while (i <= 3) {
        printf("Entre com o salário do colaborador %d: ", i);
        scanf("%f", &salario);
        printf("Entre com as horas trabalhadas pelo colaborador %d: ", i);
        scanf("%f", &horas);
        pagamento = salario * horas;
        printf("Pagamento do colaborador %d: R$ %.2f\n", i, pagamento);
        total += pagamento;
        i++;
    }
    printf("Total de pagamentos: R$ %.2f\n", total);
    return 0;
  }