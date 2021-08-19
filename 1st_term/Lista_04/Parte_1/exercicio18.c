/******************************************************************************

18. Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para
isto, mandou digitar uma linha para cada mercadoria com o código, preço de compra e preço de venda
delas. Faça um algoritmo que determine e escreva quantas mercadorias proporcionam lucro < 10%, 10%
≤ lucro ≤ 20% e lucro > 20%. Determine também e escreva o valor total de compra e de venda de todas as
mercadorias, assim como o lucro total.

*******************************************************************************/
#include <stdio.h>

int main()
{
   float lucro, compra, venda, compraTotal, vendaTotal;
   int lucro10a20, lucroMenor10, lucroMaior20, codigo;
   compraTotal = 0;
   vendaTotal = 0;
   lucroMaior20 = 0;
   lucroMenor10 = 0;
   lucro10a20 = 0;
   codigo = 1;
   
   printf("Insira o código '0' para terminar o programa.\n");
   while(codigo != 0)
   {
       printf("Insira o código do produto: \n");
       scanf(" %d", &codigo);
       if(codigo == 0)
       {
           break;
       }
       printf("Insira o valor de compra do produto: \n R$");
       scanf(" %f", &compra);
       
       
        printf("Insira o valor de venda do produto: \n R$");
       scanf(" %f", &venda);
       printf("\n\n");
       
            //Cálculos
            
            compraTotal += compra;
            vendaTotal += venda;
            lucro =  venda - compra;
            
            if(lucro < compra*0.1)
            {
                lucroMenor10++;
            }
            else if(lucro >= compra*0.1 && lucro <= compra *0.2)
            {
                lucro10a20++;
            }
            else
            {
                lucroMaior20++;
            }
   }
   
   printf("Quantidade de mercadorias com lucro inferior a 10%%: %d\n", lucroMenor10);
    printf("Quantidade de mercadorias com lucro entre a 10 e 20%%: %d\n", lucro10a20);
     printf("Quantidade de mercadorias com lucro superior a 20%%: %d\n", lucroMaior20);
     printf("Valor total de compra: R$%.2f\n", compraTotal);
     printf("Valor total de venda: R$%.2f.", vendaTotal);
}

