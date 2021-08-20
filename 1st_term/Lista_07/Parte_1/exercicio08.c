/******************************************************************************

8 - Faça uma função recursiva que gere a seguinte sequência:
𝐹(𝑛) = {
1 𝑠𝑒 𝑛 = 1
2 𝑠𝑒 𝑛 = 2
2 ∗ 𝐹(𝑛 − 1) + 3 ∗ 𝐹(𝑛 − 2) 𝑠𝑒 𝑛 = é í𝑚𝑝𝑎�

*******************************************************************************/
#include <stdio.h>

int Calculos(int n)
{
    if(n == 1)
    {
        return 1;
    }
    
    else if(n == 2)
    {
        return 2;
    }
    
    else if(n % 2 != 0)
    {
        return 2* (Calculos(n - 1)) + 3 * (Calculos(n - 2));
    }
}

int main()
{ 
    int n, resultado;

    printf("Insira um valor para 'N':\n");
    scanf(" %d", &n);
    
    resultado = Calculos(n);
    
    printf("F(%d) = %d", n, resultado);

   
}
