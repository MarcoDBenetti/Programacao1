#include <stdio.h>

int main(){
    char caractere=' ';
    int vogais=0, consoantes=0;

    printf("Digite uma frase para sem acentuação para saber a quantidade de vogais e consoantes: ");
    while(caractere!= '\n'){
        scanf("%c", &caractere);
        if(caractere >= 'A' && caractere <= 'Z'){
            caractere += 32;
        }
        if(caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u'){
            vogais ++;
        } else if('a' <= caractere && 'z' >= caractere)
            consoantes ++;
    }
    printf("Vogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);
    return 0;
}