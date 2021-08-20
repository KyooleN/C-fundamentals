/******************************************************************************

5. Faça um programa que receba duas cadeias de caracteres e verifique 
se a primeira cadeia digitada é permutação da segunda cadeia, ou seja,
se todos os caracteres da primeira cadeia estão presentes na segunda cadeia,
mesmo que em posições diferentes.
Exemplo:
“abccde” é uma permutação de “cbadce”, mas não é de “abcdef” nem de “abcde”

*******************************************************************************/
#include <stdio.h>
#include <string.h>


int main()
{
    char frase1[300], frase2[300];
    int i = 0;
    
    printf("insira a primeira cadeia de caracteres: "); //recebendo a primeria frase
    fgets(frase1, sizeof(frase1), stdin);
    
    printf("Insira a segunda cadeia de carateres: "); //recebendo a segunda frase
    fgets(frase2, sizeof(frase2), stdin);
    
    if(strlen(frase1) == strlen(frase2)) { //caso as frases tenham o mesmo tamanho
        while( i < strlen(frase1)) {
            for(int j = 0; j < strlen(frase1); j++) {
                if(frase1[i] == frase2[j]) { //caso tenha uma letra da frase 1 na frase 2
                    if(i == (strlen(frase1) - 1)) { //caso a frase seja uma permutação
                        printf("A frase 1 é uma permutação da frase 2.");
                    }
                    i++;
                    break;
                } else if(frase1[i] != frase2[j] && j == (strlen(frase1) - 1)) { //caso não tenha a letra
                    i = strlen(frase1); //condição para quebrar o loop 'while'
                    printf("A frase 1 não é uma permutação da frase 2.");
                    break;
                }
            }
            
        }
    } else { //caso as frases não tenham o mesmo tamanho
        printf("A frase 1 não é uma permutação da frase 2.");
    }
    
    
    
    
   
    

   
}




