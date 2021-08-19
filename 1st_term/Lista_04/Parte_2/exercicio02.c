/******************************************************************************

2. Calcule a média e o desvio padrão de uma sequência de 3 números.


*******************************************************************************/
#include <stdio.h>
#include <math.h>


int main()
{
    float num1, num2, num3, mediaAritmetica, desvio;
  
    
 
        printf("Insira um valor: \n");
        scanf(" %f", &num1);
        
        printf("Insira outro valor: \n");
        scanf(" %f", &num2);
        
        printf("Insira o último valor: \n");
        scanf(" %f", &num3);
        
        mediaAritmetica = (num3 + num2 + num1)/3;
        desvio = sqrt((pow((num1 - mediaAritmetica), 2) + pow((num2 - mediaAritmetica), 2) + pow((num3 - mediaAritmetica), 2))/3);
        
        printf("Desvio padrão: %.2f", desvio);
        

        

        
        
        
    
}



