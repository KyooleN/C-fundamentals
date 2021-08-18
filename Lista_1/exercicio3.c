/******************************************************************************

3- Faça um programa retornar a raiz quadrada de um número

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
    double num,rzqd; //rzqd = Raíz Quadrada
printf("Escreva um número:\n");
scanf("%lf", &num);
rzqd = sqrt(num); //Cálculo da raiz quadrada.
printf("A raíz quadrada de %.2lf é igual a %.2lf",num,rzqd);
    
}

