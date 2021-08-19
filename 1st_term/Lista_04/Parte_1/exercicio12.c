/******************************************************************************

12. Ler 10 valores e escrever quantos destes valores são negativos.


*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero, i, negativos;
    negativos = 0;
    
    for(i = 1; i <= 10; i++)
    
    {
        printf("Insira um número: (%dx)\n", i);
        scanf(" %d", &numero);
        
        if(numero < 0)
        {
            negativos++;
        }
    }
    printf("Dos números digitados, %d são negativos", negativos);
    
    
}

