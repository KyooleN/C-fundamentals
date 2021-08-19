/******************************************************************************

15. Faça um algoritmo para repetir a leitura de um número enquanto o valor fornecido for diferente de
0. Para cada número fornecido, imprimir se ele é NEGATIVO ou POSITIVO. Quando o número 0 for
fornecido a repetição deve ser encerrada sem imprimir mensagem alguma. Use a estrutura
FAÇA/ENQUANTO

*******************************************************************************/
#include <stdio.h>

int main()
{
    float numero;
    
    do
    {
        printf("Insira um número: ");
        scanf(" %f", &numero);
        
        if(numero > 0)
        {
            printf("Número positivo \n");
        }
        else if (numero < 0)
        {
            printf("Número negativo \n");
        }
        
        
    }
    while(numero != 0);
    }
    


