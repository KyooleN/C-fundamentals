/******************************************************************************

Faça um programa que receba o tipo da ação, ou seja, uma letra a ser comercializada na bolsa de valores, 
o preço de compra e o preço de venda de cada ação e que calcule e mostre:
■ o lucro de cada ação comercializada; 
■ a quantidade de ações com lucro superior a R$ 1.000,00; 
■ a quantidade de ações com lucro inferior a R$ 200,00; 
■ o lucro total da empresa. 
Finalize com o tipo de ação ‘F’.

*******************************************************************************/
#include <stdio.h>

int main()
{   int lucro1000, lucro200;
    float lucro, lucroTotal, compra, venda;
    char tipoAcao;
    
    lucroTotal = 0;
    lucro200 = 0;
    lucro1000 = 0;
    
    while(tipoAcao != 'f' || tipoAcao != 'F')
    {
         printf("Insira o tipo de ação:\n");
         scanf(" %c", &tipoAcao);
         if(tipoAcao == 'f' || tipoAcao == 'F')
         {
             break;
         }
         
         printf("Insira o preço de compra da ação: \n ");
         printf("R$");
         scanf(" %f", &compra);
         
         printf("Insira o preço de venda da ação: \n");
          printf("R$");
         scanf(" %f", &venda);
         
         lucro = venda - compra;
         lucroTotal += lucro; 
         
         printf("Lucro da ação %c: R$%.2f \n \n", tipoAcao, lucro);
         
         if(lucro > 1000)
         {
             lucro1000++;
         }
         else if(lucro < 200)
         {
             lucro200++;
         }
        
          } //Fim do Loop
          
          printf("Quantidade de ações com lucro superior a R$1000,00: %d\n", lucro1000);
           printf("Quantidade de ações com lucro inferior a R$200,00: %d\n", lucro200);
            printf("Lucro total da empresa: R$%.2f\n", lucroTotal);
          
    
    
}
         
         
         
   

