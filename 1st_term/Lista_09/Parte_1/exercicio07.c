/******************************************************************************

8. Faça um programa que receba uma frase e um caractere e verifique se o caractere digitado é encontrado na
frase ou não e, se for encontrado, quantas vezes isso acontece.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char frase[300], caractere;
    int vezesNaFrase = 0, flag = 0;
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin);//recebendo a frase
    
    printf("Insira um caráter: ");
    scanf(" %c", &caractere); //recebendo o caractere
    
    for(int i = 0; i < strlen(frase); i++) {
        if(frase[i] == caractere) { //declarando que o caractere foi encontrado na frase
            vezesNaFrase++;
            flag = 1;
        } else if (frase[i] != caractere && flag == 0 && i == (strlen(frase) - 1)) {//caso o caractere não seja encontrado
            printf("O caractere não está presente na frase.");
        } else if (i == (strlen(frase) - 1) && flag == 1) {//caso tenha sido encontrado, quantas vezes
            printf("O caractere '%c' apareceu %d vezes na frase.", caractere, vezesNaFrase);
        }
        
    }
    
}


