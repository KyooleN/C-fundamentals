/******************************************************************************

Uma loja utiliza o código V para transação à vista e P para transação a prazo. Faça um programa que receba 
o código e o valor de quinze transações, calcule e mostre:
■ o valor total das compras à vista; 
■ o valor total das compras a prazo; 
■ o valor total das compras efetuadas; e
■ o valor da primeira prestação das compras a prazo juntas, sabendo-se que serão pagas em três vezes.

*******************************************************************************/
#include <stdio.h>

int main()
{ char codigo;
float preco, somaT, somaV, somaP, valor1P;
int produto, i;
somaT = 0;
somaV = 0;
somaP = 0;
valor1P = 0;
i = 1;
   
   for(produto = 1; produto <= 15; produto++)
   {
    preco = 0;
   printf("Insira: (%dx)\n", i);
   printf("V - para pagamento à vista;\n");
   printf("P - para pagamento à prazo.\n");
   scanf(" %c", &codigo);
   
   printf("Insira o preço do produto: R$");
   scanf(" %f", &preco);
   printf("\n");
   i++;
   
   somaT += preco;
   
   if(codigo == 'v')
   {
       somaV += preco;
   }
   else
   {
       somaP += preco;
   }
   }
   valor1P = somaP/3;
   
   printf("Valor compras à vista: R$%.2f\n", somaV);
   printf("Valor compras à prazo: R$%.2f\n", somaP);
   printf("Valor total: R$%.2f\n", somaT);
   printf("Valor primeira parcela à prazo: R$%.2f\n", valor1P);
   
}


