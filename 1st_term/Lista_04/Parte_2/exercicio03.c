/******************************************************************************

3. Faça um algoritmo que calcule o seguinte somatório:
s = 1/225 + 2/196 + 4/169 + 8/144 + ... + 16384/1

*******************************************************************************/
#include <stdio.h>

int main()
{
    double numerador, denominador, novoDenominador, resultado;
    denominador = 225;
    resultado = 0;
    novoDenominador = 1;
  
     for(numerador = 1; numerador <= 16384; numerador *=2)
    {  
        printf(" %.2lf", resultado);
        resultado += numerador/denominador;
         printf(" + %.2lf/%.2lf = %lf\n",numerador, denominador, resultado);
        
            denominador = denominador - 30 + novoDenominador;
            novoDenominador += 2;
            if(denominador < 1)
            {
                denominador= 1;
            }
      
    }
    printf("\n\n");
    printf("s = %.2lf", resultado);
}
            
          
           
           
           
        
       
               
                


