/******************************************************************************

1. Faça um programa que receba uma frase, calcule e mostre a quantidade de palavras da frase
digitada

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int NumeroDePalavras(char frase[], int tamanhoDaFrase) //para calcular o total de palavras na frase
{
    int palavras = 0;
    
    for(int i = 0; i <= tamanhoDaFrase; i++) {
        if(frase[i] == ' ' || frase[i] == '\0') {//caso haja um espaço ou caso seja a última palavra
            palavras++; //total de palavras
        }
    }
    
    return palavras;
}

int main()
{
    char frase[300];
    int palavras;
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin);// recebendo a frase
    
    int tamanhoDaFrase = strlen(frase); //tamanho da string
    
    palavras = NumeroDePalavras(frase, tamanhoDaFrase);
    
    printf("Total de palavras na frase: %d", palavras);

   
}

