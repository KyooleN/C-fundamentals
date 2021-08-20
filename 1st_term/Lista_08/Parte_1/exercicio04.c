/******************************************************************************

6. Faça um programa que receba o total das vendas de cada vendedor de uma loja e armazene-as em um vetor.
Receba também o percentual de comissão a que cada vendedor tem direito e armazene-os em outro vetor.
Receba os nomes desses vendedores e armazene-os em um terceiro vetor. Existem apenas dez vendedores na
loja. Calcule e mostre:
■ um relatório com os nomes dos vendedores e os valores a receber referentes à comissão;
■ o total das vendas de todos os vendedores;
■ o maior valor a receber e o nome de quem o receberá;
■ o menor valor a receber e o nome de quem o receberá. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    char nome[10][40]; //nomes de até 40 caracteres
    float comissao[10], vendas[10], soma = 0;
    int i, vendaMaior = 0, vendaMenor = 0, j = 0, k = 0; 
    
    
    for(i = 0; i < 10; i++)
    {
       printf("Insira seu nome: ");
       scanf(" %s", nome[i]); 
      
       printf("Insira o total de vendas: R$");
       scanf(" %f", &vendas[i]);
       
       soma += vendas[i]; //total das vendas
       
       if(vendas[i] > vendaMaior)
       {
           vendaMaior = vendas[i]; //maior venda
           k = i; //nome
       }
       
       if(vendas[i] < vendaMenor) //menor venda
       {
           vendaMenor = vendas[i];
           j = i; //nome
       }
       
       printf("Insira a porcentagem de comissão: ");
       scanf(" %f", &comissao[i]);
    }
    
    for(i = 0; i < 10; i++) //Nome e renda total de cada vendedor
    {
        printf("\n\nNome:  %s\n", nome[i]);
        printf("Valor a receber: R$%.2f", comissao[i]/100 * vendas[i]);
        
    }
    
    
    
    printf("\n\nTotal das vendas: R$%.2f", soma);
    printf("\n%s foi a pessoa que MAIS vendeu, totalizando R$%.2f!", nome[k], vendas[k]);
    printf("\n%s foi a pessoa que MENOS vendeu, totalizando R$%.2f!", nome[j], vendas[j]);
    
    
    
    
    

    
}


