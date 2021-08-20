/******************************************************************************

4. Verificar se uma palavra digitada pelo usuário é um palíndromo.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int VerificaPalindromo(char palavra[], int tamanho) 
{
    int j = (tamanho - 2);//variável auxiliar; 
    
    for(int i = 0; i < tamanho; i++) {
        if(palavra[i] == palavra[j]) { //caso as letras sejam iguais
            j--;
            if(i == (tamanho - 2)) { //caso ja tenha comparado tudo
                return 1;
            }
        } else if(palavra[j] != palavra[i]) { //caso alguma letra seja diferente
            return 0;
        }
        
    }
}

int main()
{
    char palavra[300];
    
    printf("Insira uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin); //recebendo a palavra
    
    int tamanho = strlen(palavra);
    
    int flag = VerificaPalindromo(palavra, tamanho);
    
    if(flag == 1) {
        printf("\nA palavra é um palíndromo.");
    }
    else {
        printf("\nA palavra não é um palíndromo");
    }
    
    
}
    
    



