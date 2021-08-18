/******************************************************************************

Faça um programa que receba três números e mostre o maior.
*******************************************************************************/
#include <stdio.h>

int main()
{ double num1,num2,num3;
    printf("Insira 3 números: \n");
    scanf("%lf", &num1);
    scanf("%lf", &num2);
    scanf("%lf", &num3);
    
    if (num1>num2 && num1>num3)
    
    {
        printf("%.2lf é o maior número.",num1);
    }
    else if (num2>num1 && num2>num3)
    
    {
        printf("%.2lf é o maior número.",num2);
    }
    else if (num3>num2 && num3>num1)
    
    {
        printf("%.2lf é o maior número.",num3);
    }
    else
    {
        printf("Não há um número maior.");
    }
 

   
}

