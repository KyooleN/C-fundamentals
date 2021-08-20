/******************************************************************************

18. Crie uma sub-rotina que gere e mostre os três primeiros números primos acima de 100.

*******************************************************************************/
#include <stdio.h>

int CalculoPrimos(int primos[])
{
  int j = 100, k, i = 0;
    
    do
    {
        j += 1;
        
        for(k = 2; k < j; k++)
        {
            if(j % k != 0 && k == (j - 1))//caso J não tenha sido divisivel por nenhum número antes dele
            {
                primos[i] = j;
                i++;
            }
            else if(j % k == 0)//caso J tenha sido dividido por algum número
            {
                break;
            }
        }  
    }
    while(i < 3);

}
            
           
                

int main()
{
    int primos[3], i;
    
    printf("Os 3 números primos acima de 100 são:\n");
    
    CalculoPrimos(primos);
    
    for(i = 0; i < 3; i++)
    {
        printf("[%d] ", primos[i]);
    }

}
        


