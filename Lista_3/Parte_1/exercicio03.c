/******************************************************************************

Faça um programa que receba um número, calcule e mostre a tabuada desse número. 
Exemplo:


*******************************************************************************/
#include <stdio.h>
//Faça um programa que receba um número, calcule e mostre a tabuada desse número. 

int main()
{ float num, i,prod;
printf("Deseja saber a tabuada de qual número?\n");
scanf(" %f", &num);
i=0;
while(i<=9)
{
    i++;
    prod = num*i;
    printf("%.2f x %.2f = %.2f\n", num, i, prod);
}

   
}



