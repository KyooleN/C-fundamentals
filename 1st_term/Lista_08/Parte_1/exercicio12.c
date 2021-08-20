/******************************************************************************

23. Faça um programa que leia dois vetores (A e B) com cinco posições para números inteiros. O programa
deve, então, subtrair o primeiro elemento de A do último de B, acumulando o valor, subtrair o segundo
elemento de A do penúltimo de B, acumulando o valor e assim por diante. Ao final, mostre o resultado
de todas as subtrações realizadas.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetorA[5], vetorB[5];
    
    for(int i = 0; i < 5; i++) //Input vetores A e B
    {
        printf("\n\nInsira o %dº número inteiro do vetor A:\n", i + 1);
        scanf(" %d", &vetorA[i]);
    
        printf("\n\nInsira o %dº número inteiro do vetor B:\n", i + 1);
        scanf(" %d", &vetorB[i]);
    }
    
    
    int i = 0, j = 4; //Condição para realizar a subtração de vetores com indices diferentes
    
    do
    {
        printf("[%d] - [%d] = [%d] \n", vetorA[i], vetorB[j], vetorA[i] - vetorB[j]); ///output subtrações
        i++;
        j--;
    }
    while(j >= 0);
    
}

