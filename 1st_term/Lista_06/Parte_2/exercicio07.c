/******************************************************************************

7 - Calcular e retornar o máximo divisor comum entre dois números informados pelo usuário a partir
do algoritmo de Euclides.


*******************************************************************************/
#include <stdio.h>

int MDC(int num1, int num2, int resto)
{
    int mdc;
    
    while (num2 != 0)
    {
       resto = num1 % num2;
       num1 = num2;
       num2 = resto;
    }
    mdc = num1;
    return mdc;
    
}

int main()
{
    int num1, num2, resto, mdc;
    
    printf("Insira o primeiro número: \n");
    scanf(" %d", &num1);
    
    printf("Insira o segundo número: \n");
    scanf(" %d", &num2);
    
    
    mdc = MDC(num1, num2, resto);
    
    
    printf("O MDC entre %d e %d é %d", num1, num2, mdc);
    
    
    

    
}
