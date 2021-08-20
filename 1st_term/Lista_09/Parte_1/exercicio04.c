/******************************************************************************

4. Faça um programa que receba uma frase, calcule e mostre a quantidade de palavras da frase digitada. Antes
de contar a quantidade de palavras da frase, esta deverá passar pelas seguintes correções:
a) Eliminação de espaços no início da frase.
b) Eliminação de espaços no fim da frase.
c) Eliminação de espaços duplicados entre palavras.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    int i, palavras = 0;
    char frase[300];
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin);//recebendo a frase
    
    int tamanho = strlen(frase); //entendendo o tamanho da frase
    
                    //tirando o espaço do final
    for( i = 0; i < tamanho - 1; i++) 
    {
        if(frase[i] == ' ') {
            palavras++; //espaço = palavra
           if(frase[i] == ' ' && frase[i - 1] == ' ') { //caso tenha dois espaços
                frase[i] = frase[i + 1]; //removendo o espaço
                i++;
                palavras--; //espaço duplo != palavra
            } 
        }
       
    }
    printf("Número de palavras na frase: %d", palavras + 1);//total de espaços é inferior ao número de palavras
}
        
        
        
           
            



