/******************************************************************************

23. Faça um algoritmo que receba uma sequência de
números e retorne o maior e o menor número da sequência. A quantidade de números n é fornecida pelo
usuário.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, num, i, maior, menor;
    menor = 10000000;
    maior = -10000000;
    
    printf("Insira quantos números terão na sequência: \n");
    scanf(" %d", &n);
    
    for(i = 1; i <= n; i++)
    {
        printf("Insira um número: \n");
        scanf(" %d", &num);
        
        if(num > maior)
        {
            maior = num;
        }
         if(num < menor)
        {
            menor = num;
        }
        
        
    }
    printf("Maior número da sequência: %d\n", maior);
    printf("Menor número da sequência: %d", menor);
}

