/******************************************************************************

3.Elabore uma sub-rotina que receba dois números como parâmetros e retorne 0  se o primeiro número for 
divisível pelo segundo número. Caso contrário, deverá retornar o próximo divisor. 

*******************************************************************************/
#include <stdio.h>

void Divisao (int num1, int num2)
{
    printf("Insira o primeiro número: \n");
    scanf(" %d", &num1);
    printf("Insira o segundo número: \n");
    scanf(" %d", &num2);
    
    
    if(num1%num2 == 0)
        {
            printf("0");
        }
        
        else
        { 
            
           while(num1%num2 != 0)
           {
              num2+=1;
           }
           printf("Próximo divisor: %d", num2);
        }
    
    
}

int main()
{
   int num1, num2;
   Divisao(num1, num2);
}

