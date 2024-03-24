#include <stdio.h>

int main(){
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, verificador;

    printf("Entre com a primeira parte (1 dígito): ");
    scanf("%1d", &n1);
    printf("Entre com a segunda parte (6 dígitos): ");
    scanf("%1d%1d%1d%1d%1d%1d", &n2, &n3,&n4, &n5, &n6, &n7);
    printf("Entre com a terceira parte, sem o dígito verificador (5 dígitos): ");
    scanf("%1d%1d%1d%1d%1d", &n8, &n9, &n10, &n11, &n12);

    verificador = (9-(((n1 + n3 + n5 + n7 + n9 + n11) + 3 * (n2 + n4 + n6 + n8 + n10 + n12)) -1 )%10);

    printf("Dígito verificador: %d", verificador);
    return 0;
}