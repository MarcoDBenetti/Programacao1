#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

bool eh_vogal(char caractere);
void remove_vogais(char palavra[]);


int main(){
    char palavra[11];

    printf("Entre com uma palavra: ");
    scanf("%10s", palavra);
    remove_vogais(palavra);

    printf("Palavra sem vogais: %s\n", palavra);


    return 0;
}


bool eh_vogal(char caractere){
    caractere = tolower(caractere);
    return caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u';
}

void remove_vogais(char palavra[]){
    int j=0;
    for(int i=0; palavra[i] != '\0'; i++){
        if(!eh_vogal(palavra[i])){
            palavra[j] = palavra[i];
            j++;
        }
    }
    palavra[j] = '\0';

}