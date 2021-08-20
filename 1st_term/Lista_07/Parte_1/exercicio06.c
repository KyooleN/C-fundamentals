/******************************************************************************

6- Calcular o máximo divisor comum (MDC) de dois números


*******************************************************************************/
#include <stdio.h>

int MDC(int num1, int num2)
{
    int resto;
    
    while (num2 != 0)
    {
       resto = num1 % num2;
       num1 = num2;
       num2 = resto;
       return MDC(num1, num2); 
    }
       
    
}

int main()
{
    int num1, num2, mdc;
    printf("Insira o primeiro número: \n");
    scanf(" %d", &num1);
    
    printf("Insira o segundo número: \n");
    scanf(" %d", &num2);
    
    mdc = MDC(num1, num2);
    
    printf("%d", mdc);
}

