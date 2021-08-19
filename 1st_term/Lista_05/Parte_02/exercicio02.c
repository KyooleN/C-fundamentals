/******************************************************************************

2. Crie uma sub-rotina que receba três números inteiros como parâmetros, 
representando horas, minutos e segundos, e os converta em segundos. 
Exemplo: 2h, 40min e 10s correspondem a 9.610 segundos.

*******************************************************************************/
#include <stdio.h>

void Segundos(int horas, int minutos, int segundos)
{
    printf("Insira o número de horas: ");
    scanf(" %d", &horas);
    printf("Insira o número de minutos: ");
    scanf(" %d", &minutos);
    printf("Insira o número de segundos: ");
    scanf(" %d", &segundos);
    
    segundos += horas*60*60;
    segundos += minutos*60;
    
    printf("Total de segundos: %d", segundos);
}

int main()
{
    int horas,  minutos, segundos;
    Segundos(horas, minutos, segundos);

}




