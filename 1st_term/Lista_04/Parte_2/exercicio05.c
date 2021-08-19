/******************************************************************************

5. Faça um algoritmo que receba um inteiro positivo n e prove a igualdade abaixo:

1^2 + 2^2 + 3^2 + ... + n^2 = (n(n + 1)(2n + 1))/6.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, resultado,  potencia;
    
    resultado = 1;
    
    printf("Insira um número inteiro positivo : \n");
    scanf(" %d", &n);
    
    for(i = 2; i <= n; i++)
    {
        printf(" %d + %d^2 =", resultado, i);
      potencia =  pow(i, 2);
        resultado += potencia;
        printf(" %d \n", resultado);
        
        
    }
    printf("------------------\n\n");
    
    printf("(%d(%d + 1)(2 * %d + 1))/6 = ", n, n, n);
    resultado = (n * (n + 1) * (2 * n + 1))/6;
    printf(" %d ", resultado);
    
}

