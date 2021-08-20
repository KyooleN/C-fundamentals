/******************************************************************************

21. Faça um programa que receba uma frase e realize a criptografia dela, trocando a primeira e a última
palavra de lugar.
Exemplo:
Frase: ESTRELAS E LUA ESTÃO NO CÉU
Saída: CÉU E LUA ESTÃO NO ESTRELAS

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char frase[300], fraseSeparada[200][30];
    int i, k = 0, j, palavras = 1;
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin);//recebendo a frase
    
    for(i = 0; i < strlen(frase) - 1; i++) {
        
        if(frase[i] == ' ') {//caso não seja um espaço
            k++;
            j = 0;
            palavras++;
            
        } else {
            fraseSeparada[k][j] = frase[i];//transferindo a palavra para a matriz
             j++;
        }
            
    }  
    
    char matrizAuxiliar[2][30];
    
    for(int l = 0; l < strlen(fraseSeparada[0]); l++) {//armazenando a primeria palavra em uma nova matriz
        matrizAuxiliar[0][l] = fraseSeparada[0][l];
    }
    
    for(int l = 0; l < strlen(fraseSeparada[k]); l++) {//armazenando a ultima palavra na matriz
        matrizAuxiliar[1][l] = fraseSeparada[k][l];
    }
    
    //output
    printf("%s", matrizAuxiliar[1]); 
    
    for(int i = 1; i < k; i++) {
        printf(" %s", fraseSeparada[i]);
    }
    printf(" %s", matrizAuxiliar[0]);
     
    
    
    
    
    

    
}




