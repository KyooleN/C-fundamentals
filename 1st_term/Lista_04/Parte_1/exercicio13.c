/******************************************************************************

13. Ler 10 valores e contar quantos estão no intervalo [10,20] e quantos deles estão fora deste intervalo.
Escrever o resultado das duas contagens.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int dentroIntervalo, foraIntervalo, numero, i;
    dentroIntervalo = 0;
    foraIntervalo = 0;
    for(i = 1; i <= 10; i++)
    {
        printf("Insira um número (%dx)\n", i);
        scanf(" %d", &numero);
        
        if(numero >= 10 && numero <= 20)
        {
            dentroIntervalo++;
        }
        else
        {
            foraIntervalo++;
        }
        
    }
    printf("Números entre 10 e 20: %d. \n", dentroIntervalo);
    printf("Números fora do conjunto: %d.", foraIntervalo);
    
}

