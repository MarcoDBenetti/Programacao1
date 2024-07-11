#include <stdio.h>
#include <stdlib.h>

int main(){
    int random, resp, tentativa=0;
    random = rand() % 100 +1;
    do{
        printf("Informe o palpite entre 1 e 100: ");
        scanf("%d", &resp);
        if(resp < random){
            printf("O número secreto é maior.\n");
            tentativa ++;
        }
        else if (resp > random){
            printf("O número secreto é menor.\n");
            tentativa ++;
        }
        else
         printf("Acertou em %d\n", tentativa);
    }while(resp != random);

    return 0;
}