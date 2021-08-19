/******************************************************************************

11. Faça um algoritmo para ler um valor X (validar para aceitar apenas valores entre 1 [inclusive] e 10
[inclusive]). Escrever a tabuada de X.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int numero, i, resultado;
    
    printf("Deseja saber a tabuada de qual número?\n");
    scanf(" %d", &numero);
    
    if(numero < 1 || numero > 10)
    {
        printf("Erro; Insira um número entre 1 e 10.");
        return;
    }
    
    for(i = 1; i <= 10; i++)
    {
        resultado = i * numero;
        printf(" %d x %d = %d \n", i, numero, resultado);
    }
}

