/******************************************************************************

7. Faça um programa que receba uma frase e mostre quantas letras diferentes ela contém. 

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char frase[300], fraseAuxiliar[300];
    int letrasDiferentes = 0, k = 0, i = 0;    
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin); //recebendo a frase
    
    while(frase[i]!='\0')
   {
      if(frase[i]>='A' && frase[i]<='Z') frase[i] += 32;//transformando em letras minúsculas
      i++;
   }
    
    
    for(i = 0; i < strlen(frase); i++) {
        for(int j = 0; j < strlen(frase); j++) {
            if(frase[i] != fraseAuxiliar[j] && j == (strlen(frase) - 1) && frase[i] != ' ') { 
                fraseAuxiliar[k] = frase[i];
                letrasDiferentes++;
                k++;
                break;
            } else if(frase[i] == fraseAuxiliar[j]) {
                break;
            }
        }
        
    }
    
    
    printf("Total de letras diferentes: %d", letrasDiferentes - 1); //subtração devido ao '\0'
    printf("\nSão elas:\n");
    for(i = 0; i < (letrasDiferentes - 1); i++) {
        printf("[%c] ", fraseAuxiliar[i]);
    }
    
    
}

