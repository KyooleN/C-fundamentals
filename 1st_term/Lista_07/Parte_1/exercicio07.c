/******************************************************************************

7- Faça uma função recursiva para calcular (e imprimir) os elementos da seguinte sequência: 
1 + 1/2 + 1/3 + 1/4 +...+ 1/N.


*******************************************************************************/
#include <stdio.h>

float Calculos(int N, int i, float resultado)
{
   
    
    if( i>N)
    {
        return resultado;
    }
    
    else
    {
        
        printf("%.2f + 1/%d = %.2f \n", resultado, i, resultado + 1/(float) i);
        resultado +=  1/(float) i;
        i++;
        return Calculos(N, i, resultado);
    }
}

int main()
{
   int N;
   float resultado;
   
   printf("Insira um valor para 'N': \n");
   scanf(" %d", &N);
   
   resultado = Calculos(N, 1, 0);
   
   printf("Resultado: %.2f", resultado);
}

