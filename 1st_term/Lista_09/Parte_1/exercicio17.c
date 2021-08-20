/******************************************************************************

23. A busca por subcadeias dentro de grandes cadeias de caracteres é um problema clássico na computação,
especificamente em bancos de dados. Faça um programa que receba uma cadeia de caracteres e uma
subcadeia, determine e mostre quantas vezes a subcadeia aparece dentro da cadeia.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char cadeia[500], subCadeia[50], matrizCadeia[300][50];
    int j = 0, k = 0, vezesApareceu = 0;
    
    printf("Insira uma cadeia de caracteres: \n");
    fgets(cadeia, sizeof(cadeia), stdin);
    
    printf("Insira a subcadeia a ser pesquisada: ");
    fgets(subCadeia, sizeof(subCadeia), stdin);
    
    int p = 0;
    
    //dividindo a cadeia em subcadeias do mesmo tamanho
    for(int i = 0; i < strlen(cadeia); i++){
        
       if(k == strlen(subCadeia) - 1) {//caso tenha o mesmo tamanho da subcadeia
            p++;
            j++;
            k = 0;
            i = p;
       } 
        else {
            matrizCadeia[j][k] = cadeia[i];
            k++;
        }
        
        
    }
    
    for(int i = 0; i <= (j + 1); i++) { 
        if(strcmp(subCadeia, matrizCadeia[i]) == 10) {//caso encontre a subcadeia uma vez na matriz
            vezesApareceu++;
        }
    }
    
    printf("A subcadeia aparece %d vez(es).", vezesApareceu);

}



