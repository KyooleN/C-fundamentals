/******************************************************************************

17. Faça um programa que receba uma frase e, a cada duas palavras dela, realize uma criptografia, 
ou seja:
a primeira letra da primeira palavra da frase concatenada com a última letra da segunda palavra, 
concatenada com a segunda letra da primeira palavra e com a penúltima letra da segunda palavra e assim por
diante. No caso de quantidade de palavras ímpares, a última palavra deve simplesmente ser invertida.
Exemplos:
Frase: Aula com bola
Saída: Amuolca alob
Frase: Casa com janelas coloridas
Saída: Cmaosca jsaandeilraosloc

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    int j, k = 0, palavras = 1, x;
    char frase[300], fraseSeparada[300][50];
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin);//recebendo a frase
    
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
    
    int p = 0;
    char palavraConcatenada[100][60];
    
    if(palavras % 2 == 0) {//caso o número de palavras seja PAR
        for(int i = 0; i <= palavras; i++) {//repetir pelo número total de palavras
                p = 0;
              for(j = 0; j < strlen(fraseSeparada[i]); j++) {//percorrendo cada palavra
                    palavraConcatenada[i][p] = fraseSeparada[i][j];
                    p += 2;
                }
                
                p = -1;
                for(j = strlen(fraseSeparada[i + 1]) - 1; j >= 0; j--) {//percorrendo cada palavra
                    p += 2;
                    palavraConcatenada[i][p] = fraseSeparada[i + 1][j];
                    
                }
                i++;
                 x = i;
            
        }
    }
    
    if(palavras % 2 != 0) {//caso o número de palavras seja ÍMPAR
        for(int i = 0; i <= palavras; i++) {//repetir pelo número total de palavras
            if((i + 2) != palavras) {//caso 'i' NÃO ESTEJA na antepenúltima palavra
                p = 0;
              for(j = 0; j < strlen(fraseSeparada[i]); j++) {//percorrendo cada palavra
                    palavraConcatenada[i][p] = fraseSeparada[i][j];
                    p += 2;
                }
                
                p = -1;
                for(j = strlen(fraseSeparada[i + 1]) - 1; j >= 0; j--) {//percorrendo cada palavra
                    p += 2;
                    palavraConcatenada[i][p] = fraseSeparada[i + 1][j];
                    
                }
                i++;
                 x = i;
            }
            
            if((i + 2) == palavras) {//caso 'i' ESTEJA na antepenúltima palavra
            p = 0;
                for(j = strlen(fraseSeparada[i]); j >= 0; j--) {//inverter a palavra
                    palavraConcatenada[i][p] = fraseSeparada[i + 1][j];
                    p++;
                }
            }
            
        }
    }
    
    for(int i = 0; i < x - 1; i++) {
        printf("%s ", palavraConcatenada[i]);
    }
    
    

}



