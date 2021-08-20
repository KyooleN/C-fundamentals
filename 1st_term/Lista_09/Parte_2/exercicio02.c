/******************************************************************************

2. Faça um programa que inverta os caracteres de uma string

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char frase[300], fraseReversa[300];
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin); //recebendo a frase
    
    
    int tamanhoDaFrase = strlen(frase);
    
  for(int i = 0, j = tamanhoDaFrase; i <= tamanhoDaFrase; i++, j--) {
        fraseReversa[i] = frase[j - 1]; //passando a frase reversa para um vetor
    }
    puts(fraseReversa);
    
    
}
    
    

