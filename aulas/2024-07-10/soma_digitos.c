#include <stdio.h>


int main(){
    int n, soma=0;
    
    printf("Informe um número inteiro não-negativo: ");
    scanf("%d", &n);
    while(n>0){
        soma += n%10;
        n /= 10;
    }
    printf("A soma dos dígitos do número informado é %d \n", soma);

    return 0;
}