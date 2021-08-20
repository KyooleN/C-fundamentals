/******************************************************************************

22. Considere uma string composta por várias subsequências, por exemplo, cccaaaabbbbxdddddddddaaannn.
A menor subsequência é a da letra x, com apenas um elemento; a maior subsequência é a da letra d,
com nove elementos. Faça um programa para ler uma string e mostrar qual é a letra que ocorre na
maior subsequência e o tamanho dessa subsequência.
Exemplo:
Entrada: aaabbbbaaa
Saída: maior b, tamanho 4


*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char frase[300], Letras[50];
    int i = 0, j, k = 0, maior = 0;
    
   printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin); //recebendo a frase
    
    while(frase[i]!='\0')
   {
      if(frase[i]>='A' && frase[i]<='Z') frase[i] += 32;//transformando em letras minúsculas
      i++;
   }
   
   for(int j = 0; j < 26; j++) { //iniciando o vetor com as letras em 0
        Letras[j] = 0;
    }
   
   
   for(i = 0; i < strlen(frase); i++) { //percorrendo a frase
        for(int j = 0; j < strlen(frase); j++) {
            if(frase[i] != Letras[j] && j == (strlen(frase) - 1) && frase[i] != ' ') { //nova letra
                Letras[k] = frase[i];//salvando a nova letra em um vetor
                k++;
                break;
            } else if(frase[i] == Letras[j]) {//caso seja letra repetida
                break;
            }
        }
        
    }
    
    int sequencia[k];
    
    for(int j = 0; j < k; j++) { //iniciando o vetor com as sequencias em 0
        sequencia[j] = 0;
    }
    
    
    
    for(i = 0; i < (k - 1); i++) { //percorrendo a frase
        for(int j = 0; j < strlen(frase) - 1; j++) {
            if(frase[j] == Letras[i]) {
                sequencia[i]++;
                if(maior < sequencia[i]) {
                    maior = i; //maior sequencia
                }
            }
        }
    }
    
    printf("\nMaior %c, tamanho %d", Letras[maior], sequencia[maior]);
   
   
}






