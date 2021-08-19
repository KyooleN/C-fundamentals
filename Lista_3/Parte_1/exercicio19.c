/******************************************************************************

Faça um programa que receba um conjunto de valores inteiros e positivos, calcule e mostre o maior e o
menor valor do conjunto. Considere que:
■ para encerrar a entrada de dados, deve ser digitado o valor zero; 
■ para valores negativos, deve ser enviada uma mensagem; 
■ os valores negativos ou iguais a zero não entrarão nos cálculos. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, soma, maior, menor, i;
    i = 1;
    maior = 0;
    menor = 0;
    num = 1;
    while(num != 0)
    {   
        printf("Insira um número inteiro e positivo (%dx)\n", i);
        scanf(" %d", &num);
         printf("\n \n");
         
        if(num > 0) //If caso o input seja válido
        {i++;
        
        soma+= num;
        if(maior <=  num)
        {
            maior = num;
        }
        else if(menor >= num)
        {
            menor = num;
        } // fim do input válido.
        }
        else if(num < 0)
        {
            printf("Erro; Insira um valor acima de '0'.\n \n");
        }
        } // fim do loop.
        printf("Maior número: %d\n", maior);
        printf("Menor número: %d\n", menor);
}
       
         
       
            
        
        
        
     
        
        

