/******************************************************************************

3. Determinar a posição da primeira ocorrência de uma letra em uma string (a frase deverá ser
digitada pelo usuário). Determinar também a posição da última ocorrência da letra. Determinar
ainda todas as posições de ocorrência da letra

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char frase[300], letra, posicao[300];
    int j = 0, primeiraPosicao;
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin); //recebendo a frase
    
    printf("Insira a letra a ser procurada na frase: ");
    scanf(" %c", &letra); //recebendo a letra
    
    for(int i = 0; i < strlen(frase); i++) {//para encontrar a primeira aparição da letra
        if(frase[i] == letra) {//caso encontre a primeira posição da letra
            posicao[j] = i;
            primeiraPosicao = (i + 1);
            j++;
            break;
        }
    }
    
    for(int i = 1; i < strlen(frase) - 1; i++) {
        if(frase[i] == letra) {//caso necontre a letra
            posicao[j] = i; //posições em que a letra foi encontrada
            j++;
        }
    }
    
    printf("Primeira ocorrência de '%c' na frase: [%d]\n", letra, primeiraPosicao);
    printf("Ocorrências da letra:\n");
    for(int i = 1; i < j; i++) {
        printf("[%d] ", posicao[i] + 1);
    }
    printf("\nÚltima ocorrência da letra: [%d]", posicao[j - 1] + 1);

    
}


