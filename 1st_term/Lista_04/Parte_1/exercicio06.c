/******************************************************************************

6. Faça um algoritmo para ler um número inteiro e escrevê-lo na tela 10 vezes utilizando uma repetição.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero, i;
    
    printf("Insira um número: ");
    scanf(" %d", &numero);
    
    for(i = 1; i <= 10; i++)
    {
        printf(" %d (%dx) \n", numero, i);
    }
}

