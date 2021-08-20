/******************************************************************************

9. Faça um programa que receba uma frase e um caractere e verifique
em que posição da frase o caractere digitado aparece pela primeira vez

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int main()
{
    char frase[300], caractere;
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin);//recebendo a frase
    
    printf("Insira um caractere: ");
    scanf(" %c", &caractere); //recebendo o caractere
    
    for(int i = 0; i < (strlen(frase) - 1); i++) {
        if(caractere == frase[i]) { //caso o caractere esteja na frase
            printf("Posição: %d", i + 1);
            break;
        } else if(caractere != frase[i] && i == (strlen(frase) - 1)) { //caso não esteja
            printf("O caractere não está presente na frase.");
        }
    }

    
}

