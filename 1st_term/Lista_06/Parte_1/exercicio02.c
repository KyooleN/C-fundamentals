/******************************************************************************

17. Elabore uma sub-rotina que calcule o máximo divisor comum (MDC) de dois números recebidos como 
parâmetros. 

*******************************************************************************/
#include <stdio.h>

int MDC(int num1, int num2) 
{
    int i = 1, mdc;
    
    
    if(num1 > num2 || num1 == num2)
    {
        while(i <= num1)
        {
            if(num1 % i == 0 && num2 % i == 0)
            {
                mdc = i;
            }
            i++;
        }
    }
    
   else if(num2 > num1)
    {
        while(i <= num2)
        {
            if(num1 % i == 0 && num2 % i == 0)
            {
                mdc = i;
            }
            i++;
        }
    }
    return mdc;
}

int main()
{
   int num1, num2, mdc;
   printf("Insira o primeiro número: \n");
   scanf(" %d", &num1);
   printf("Insira o segundo número: \n");
   scanf(" %d", &num2);
   
   mdc = MDC(num1, num2);
   
   printf("O MDC entre %d e %d é %d", num1, num2, mdc); 
   
   
   
   
}


