/******************************************************************************

18. Faça um programa que criptografe cada palavra de uma frase, substituindo por ? a última metade de
seus caracteres.
Exemplo:
A aula é boa mas poderia ser mais curta.
? au?? ? b?? m?? pod???? s?? ma?? cu???

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, k = 0, letras, interrogacoes = 0;
    char frase[300];
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin); //recebendo a frase
    
    for(i = 0; i < strlen(frase); i++) {    //analisando a frase
        if(frase[i] == ' ' || frase[i + 1] == '\0') {   //caso haja uma nova palavra
          j = (i - 1);  //letra final da palavra anterior
          letras = j - k;   //total de letras da palavra
          interrogacoes = (letras/2);   //total de pontos de interrogação necessários
          do {
              frase[j] = '?';   //letra = '?'
              j--;
              interrogacoes--;  //uma interrogação a menos necessária
          }
          while(interrogacoes >= 0);
          k = (i + 1);  // 'k' é o início da palavra seguinte
        }
    }
    
    puts(frase);

    
}


