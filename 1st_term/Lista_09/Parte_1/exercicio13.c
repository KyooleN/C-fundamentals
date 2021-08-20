/******************************************************************************

19. Faça um programa que receba uma frase e faça a criptografia dela, substituindo as vogais pelos seguintes
números: a = 1, e = 2, i = 3, o = 4 e u = 5.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char frase[300];
    int i;
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    
    for(i = 0; i < strlen(frase); i++) {
        if(frase[i] == 'a') {
           frase[i] = '1';
        }
        else if(frase[i] == 'e') {
           frase[i] = '2';
        }
        
        else if(frase[i] == 'i') {
           frase[i] = '3'; 
        }
        
        else if(frase[i] == 'o') {
           frase[i] = '4'; 
        }
        
        else if(frase[i] == 'u') {
           frase[i] = '5';
        }
    }
    
    puts(frase);
}

