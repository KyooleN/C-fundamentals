/******************************************************************************

3. Faça um programa que receba uma frase e gere uma nova, retirando os espaços excedentes no início e no fim
da frase e entre suas palavras.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char frase[300];
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin); //recebendo a frase
    
    int tamanho = strlen(frase);
    
    char fraseJunta[tamanho]; //variável para transferir a string
    
    int j = 0; //variável auxiliar
    
    for(int i = 0; i < tamanho - 1; i++) //Retirando os 'espaços'
    {
        fraseJunta[j] = frase[i];
        if(frase[i] == ' ') {
            fraseJunta[j] = frase[i + 1];
            i++;
        }
        
        j++;
    }
    
    puts(fraseJunta);
    
}

