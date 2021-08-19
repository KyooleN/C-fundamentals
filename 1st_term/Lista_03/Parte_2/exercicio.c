/******************************************************************************

Dado um número L > 0 entrado pelo usuário, faça um programa que imprima
os L primeiros elementos da série de Fibonacci.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1, num2, num3, L, i;
    num1 = 1;
    num2 = 1;
    num3 = num2 + num1;
    
    printf("Insira quantos números da sequência de Fibonacci deseja saber: ");
    scanf(" %d", &L);
    
    for(i = 1; i <= L; i++)
    {
        printf(" %d", num1);
        num1 = num2;
        num2 = num3;
        num3 = num2 + num1;
    }
    
    
    
}

