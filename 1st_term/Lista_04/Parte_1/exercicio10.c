/******************************************************************************

10. Faça um algoritmo que imprima a tabuada do 8 utilizando uma estrutura de repetição

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, resultado;
    
    for( i = 1; i <= 10; i++)
    {
        resultado = i * 8;
        printf(" %d x 8 = %d \n", i, resultado);
    }
}

