/******************************************************************************

2- Implemente uma função recursiva para testar se um determinado número inteiro foi ou não
armazenado em um vetor. Sua função deve receber como parâmetros um vetor A de inteiros, a
quantidade 𝑛 de elementos armazenada atualmente no vetor e o valor 𝑥 inteiro a ser pesquisado.
Além disso, como resultado sua função deve retornar 1 caso o elemento seja encontrado ou zero,
caso contrário. Implemente um programa para testar sua função


*******************************************************************************/
#include <stdio.h>

int Procurar(int n, int vetor[], int numeroProcurado, int i)
{
    if(i > n)
    {
        return 0;
    }
    
    else if(vetor[i] == numeroProcurado)
    {
        return 1;
       
    }
    else
    {
        i++;
        return Procurar(n, vetor, numeroProcurado, i);
    }
}

int main()
{
    int n, i, numeroProcurado, retorno;
    
    printf("Insira o número de componentes no vetor: \n");
    scanf("%d", &n);
    
    int vetor[n];
    
    printf("Insira os componentes do vetor: \n");
    for(i = 0; i < n; i++)
    {
        scanf(" %d", &vetor[i]);
    }
    
    printf("Insira o valor a ser procurado dentro do vetor: \n");
    scanf("%d", &numeroProcurado);
    
    retorno = Procurar(n, vetor, numeroProcurado, 0);
    printf("Retorno: %d", retorno);

    
}
