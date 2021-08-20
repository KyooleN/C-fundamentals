/******************************************************************************

16. Faça um programa que receba uma frase e mostre quantas letras, quantos números e quantos espaços
existem nela.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    int i, numeros = 0, letras = 0, espacos = 0;
    char frase[300];
    
    printf("Insira uma frase: "); //recebendo a frase
    fgets(frase, sizeof(frase), stdin);
    
    
    for(i = 0; i < (strlen(frase) - 1); i++){   //analisando os componentes da frase
        if(frase[i] == ' '){    //caso tenha um espaço
            espacos++;
        } else if(frase[i] >= '0' && frase[i] <= '9'){  //caso tenha um número
            numeros++;
        } else {    //caso tenha uma letra
            letras++;
        }
        
    }
    
    printf("Número de letras na frase: %d\n", letras);
    printf("Número de números na frase: %d\n", numeros);
    printf("Número de espaços na frase: %d", espacos);

    
}

    



