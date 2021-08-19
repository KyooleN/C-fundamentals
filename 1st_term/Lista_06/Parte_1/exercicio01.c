/******************************************************************************

12. Crie uma sub-rotina que receba como parâmetro dois valores X e Z, calcule e retorne X^z
 sem utilizar  funções ou operadores de potência prontos. 


*******************************************************************************/
#include <stdio.h>

int calculoPotencia(int base, int expoente)
{
    
    
    int i;
    int resultado = 1;
    
    
    for(i = 1; i <= expoente; i++)
    {
         resultado *= base;
    }
    
     
    return resultado;
    
     
}

int main()
{
    int x, z, resultado;
    
    printf("Insira o valor da base da potência: \n");
    scanf(" %d", &x);
    printf("Insira o valor do expoente: \n");
    scanf(" %d", &z);
    
    resultado = calculoPotencia(x, z);
    
    printf("%d ^ %d = %d", x, z, resultado);
    
}


