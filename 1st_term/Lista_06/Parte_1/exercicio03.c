/******************************************************************************

18. Crie uma sub-rotina que gere e mostre os três primeiros números primos acima de 100.

*******************************************************************************/
#include <stdio.h>



void Primos()
{
    int i, j;
    i = 100;
    j = 1;
    
    while(j <= 3)
    {
        
        if(i % 2 != 0 && i % 3 != 0)
        {
            printf("[%d] ", i);
            j++;
        }
        i++;
    }
}
    

int main()
{ 
    
    
    printf("Os 3 primeiros números primos após 100 são: \n");
    Primos();
   
}
    
    
    
    


