/******************************************************************************

11. Faça um programa que receba uma frase e mostre quantas vezes cada palavra aparece na frase digitada. 

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char frase[300], fraseSeparada[200][40];
    int k = 0, j = 0, palavras = 1;
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin); //recebendo a frase
    
    
    for(int i = 0; i < strlen(frase) - 1; i++) {
        
        if(frase[i] == ' ') {//caso não seja um espaço
            k++;
            palavras++;
            j = 0;
            
        } else {
            fraseSeparada[k][j] = frase[i];//transferindo a palavra para a matriz
             j++;
        }
            
    }
            
    
    
    for(int i = 0; i < palavras; i++) {
        printf("%s\n", fraseSeparada[i]);
    }
    
    int vezesApareceu[50];
    
    for(int i = 0; i <= 50; i++) { //Iniciando o vetor com o número de vezes que cada palavras apareceu 
        vezesApareceu[i] = 0; //como zero
    }
    

    for(int i = 0; i < palavras; i++) { // a palavra a ser procurada na matriz
        for(j = 0; j < palavras; j++) {
            for(int z = 0; z <= strlen(fraseSeparada[j]); z++) {
                if(fraseSeparada[j][z] != fraseSeparada[i][z]) {//se a letra não for igual
                    break;
                }
                else if(z == strlen(fraseSeparada[j])) {//caso tenha chegado até o final da palavra
                    vezesApareceu[i] ++; //vezes na frase
                }
            }
        }
    }
    
    for(int i = 0; i < palavras; i++) {
        printf("Palavra: %s, vezes na frase: %d\n", fraseSeparada[i], vezesApareceu[i]);
    }
    
    
    
}
           
            

            






