/******************************************************************************

Faça um programa que receba várias idades, calcule e mostre a média das idades digitadas. 
Finalize digitando idade igual a zero.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int idade, somaIdades, pessoas;
    float mediaIdade;
    
    somaIdades = 0;
    idade = 1;
    pessoas = 0;
    
     printf("Insira 0 para terminar o programa.\n");
   while(idade != 0)
   {
      printf("Insira uma idade: \n");
      scanf(" %d", &idade);
      
      somaIdades += idade;
      pessoas++;
   }
   mediaIdade = (float)somaIdades/((float)pessoas - 1);
   
   printf("A média das idades é igual a %.2f.", mediaIdade);
}
   
  

