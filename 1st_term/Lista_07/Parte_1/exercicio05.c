/******************************************************************************

5- Calcule a soma dos números de 1 a n (ex.: 3 = 1 + 2 + 3 = 6

*******************************************************************************/
#include <stdio.h>

int Soma( int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return n + Soma(n - 1);
    }
}

int main()
{
    int n, resultado;
    
    printf("Insira um valor para 'n': \n");
    scanf(" %d", &n);
    
    resultado = Soma(n);
    
    printf("%d", resultado);

    
}

