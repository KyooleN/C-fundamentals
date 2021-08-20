/******************************************************************************

Faça funções recursivas para:
1- Calcular a potência de x elevado a y


*******************************************************************************/
#include <stdio.h>

int potencia(int x, int y)
{
    if(y == 0)
    {
       return 1;
    }
    else
    {
       return x * potencia(x, y - 1);
    }
}

int main()
{
    int x, y, resultado;
    
    printf("Insira o valor da base da potência: \n");
    scanf(" %d", &x);
    
    printf("Insira o valor do expoente da potência: \n");
    scanf(" %d", &y);
    
    resultado = potencia(x, y);
    
    printf("%d elevado a %d = %d", x, y, resultado);
}

