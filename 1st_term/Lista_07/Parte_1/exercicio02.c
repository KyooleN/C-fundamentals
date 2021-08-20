/******************************************************************************

2- Calcular o fatorial de x

*******************************************************************************/
#include <stdio.h>

int Fatorial(int x)
{
    if (x == 0)
    {
        return 1;
    }
    else
    {
        return x * Fatorial(x - 1);
    }
}

int main()
{
    int x, fatorial;
    
    printf("Insira o valor fatorial: \n");
    scanf(" %d", &x);
    
    fatorial = Fatorial(x);
    
    printf("%d! = %d", x, fatorial);

    
}

