/******************************************************************************

5. Dado dois vetores de inteiros ordenados, gerar um terceiro vetor de contenha os dois primeiros,
e ainda esteja ordenado. Observe que o usuário deverá informar o tamanho dos dois vetores. O
terceiro vetor deverá ser alocado dinamicamente com a soma do tamanho dos dois vetores
anteriores. 

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

void trocar(int *x, int *y) {
    int auxiliar = *x;
    *x = *y;
    *y = auxiliar;
}

int main()
{
    int tamanhoVetor1, tamanhoVetor2;

    //validando a entrada do usuário
    do { 
        printf("Insira o tamanho do primeiro vetor: ");
        scanf(" %d", &tamanhoVetor1);
        
    } while(tamanhoVetor1 < 1);
    
    int vetor1[tamanhoVetor1];
    
    //recebendo os elementos do primeiro vetor
    for(int i = 0; i < tamanhoVetor1; i++) {
        printf("Insira o elemento %d do vetor 1: ", i + 1);
        scanf(" %d", &vetor1[i]); 
    }
    
    
    //validando a entrada do usuário
    do {
        printf("Insira o tamanho do segundo vetor: ");
        scanf(" %d", &tamanhoVetor2);
    } while(tamanhoVetor2 < 1);
    
    int vetor2[tamanhoVetor2];
    
     //recebendo os elementos do segundo vetor
    for(int i = 0; i < tamanhoVetor2; i++) {
        printf("Insira o elemento %d do vetor 2: ", i + 1);
        scanf(" %d", &vetor2[i]); 
    }
    
    //alocando dinamicamente o tamanho do terceiro vetor
    int * vetor3 = (int*)calloc((tamanhoVetor1 + tamanhoVetor2), sizeof(int));
    
    //passando os elementos do vetor 1 para o vetor 3
    for(int i = 0; i < tamanhoVetor1; i++) {
        vetor3[i] = vetor1[i];
    }
    
    int j = 0;
    //passando os elementos do vetor 2 para o vetor 3
    for(int i = tamanhoVetor1; i < (tamanhoVetor1 + tamanhoVetor2); i++) {
        vetor3[i] = vetor2[j];
        j++;
    }
    
    //organizando de ordem crescente
    
    for(int i = 0; i < (tamanhoVetor1 + tamanhoVetor2); i++) {
        for (int j = 0; j < ((tamanhoVetor1 + tamanhoVetor2) - i - 1); j++) {     
            if (vetor3[j] > vetor3[j + 1]) {
               trocar(&vetor3[j], &vetor3[j + 1]); 
            }
        }    
    }
    
    //output
    for(int i = 0; i <  (tamanhoVetor1 + tamanhoVetor2); i++) {
        printf("[%d]", vetor3[i]);
    }
    
    free(vetor3);
    
    
}



