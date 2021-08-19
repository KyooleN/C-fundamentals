/******************************************************************************

4. Faça uma sub-rotina que receba como parâmetro o raio de uma esfera, calcule e mostre no programa principal 
o seu volume: v = 4/3 * R3

*******************************************************************************/
#include <stdio.h>
#include <math.h>

void Volume (float raio, float volume)
{
    printf("Insira a medida do raio:\n");
    scanf(" %f", &raio);
    
    volume = (4*3.14*(pow(raio,3)))/3;
    printf("Volume da esfera: %.2f", volume);
}

int main()
{ float raio, volume;
    Volume (raio, volume);
}

