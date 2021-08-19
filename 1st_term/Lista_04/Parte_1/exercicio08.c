/******************************************************************************

8. Faça um algoritmo que imprima os números ímpares existentes de entre 1(inclusive) e 9 (inclusive).

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero;
    
    for(numero = 1; numero <= 9; numero++)
    {
        if(numero % 2 != 0)
        {
            printf(" %d", numero);
        }
    }
}

