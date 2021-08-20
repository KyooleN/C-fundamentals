/******************************************************************************

2. Faça um programa que receba uma frase e mostre cada palavra dela em uma linha separada.
Exemplo:
Frase: COMPUTADORES SÃO MÁQUINAS POTENTES
Saída:
COMPUTADORES
SÃO
MÁQUINAS
POTENTES

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char frase[300];
    
    printf("Insira a frase:\n");
    fgets(frase, sizeof(frase), stdin); //recebendo a frase
    
   int tamanho = strlen(frase);
   char fraseSeparada[tamanho]; //vetor auxiiar
    
    for(int i = 0; i < tamanho - 1; i++) {
        
        if(frase[i] == ' ') { //caso tenha um 'espaço' na frase, imprimir a palavra seguinte embaixo da outra
            fraseSeparada[i] = '\n';
        }
        else {
            fraseSeparada[i] = frase[i];
        }
    }
    
    puts(fraseSeparada); //output
}

