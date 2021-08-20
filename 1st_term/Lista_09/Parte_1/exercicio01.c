/******************************************************************************

1. Faça um programa para criptografar uma frase dada pelo usuário. Na criptografia, a frase deverá ser invertida
e as consoantes deverão ser trocadas por #.
Exemplo:
Frase: EU ESTOU NA ESCOLA
Saída: A#O##E A# UO##E UE

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char frase[300];
    
    printf("Insira a frase a ser criptografada:\n");
    fgets(frase, sizeof(frase), stdin); //recebendo a frase
    
    int tamanho = strlen(frase); 
    
    for(int i = 0; i < tamanho - 1; i++) //escanear a frase usando o tamanho dela
    {
        //caso a frase tenha consoantes, substituí-las por '#'
        if(frase[i] != 'a' && frase[i] != 'e' &&
            frase[i] != 'i' && frase[i] != 'o' &&
             frase[i] != 'u' && frase[i] != ' ')
        {
            frase[i] = '#';
        }
    }
    
    int j = 0; 
    char fraseReversa[tamanho]; //variavel auxiliar para receber a frase original invertida
    
    for(int i = tamanho - 1; i >= 0; i--) { //transferencia de uma variavel para outra de forma invertida
        fraseReversa[j] = frase[i];
        j++;
    }
    
     printf("Frase criptografada: %s", fraseReversa);
}



