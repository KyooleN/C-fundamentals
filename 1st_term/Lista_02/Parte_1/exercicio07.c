/******************************************************************************

Faça um programa que receba o preço de um produto, calcule e mostre, de acordo com as tabelas a seguir, o novo preço e a classificação.
TABELA 1 — PERCENTUAL DE AUMENTO
PREÇO %
Até R$ 50,00 5
Entre R$ 50,00 e R$ 100,00 10
Acima de R$ 100,00 15
TABELA 2 — CLASSIFICAÇÕES
NOVO PREÇO CLASSIFICAÇÃO
Até R$ 80,00 Barato
Entre R$ 80,00 e R$ 120,00 (inclusive) Normal
Entre R$ 120,00 e R$ 200,00 (inclusive) Caro
Maior que R$ 200,00 Muito caro
*******************************************************************************/
#include <stdio.h>

int main()
{double price,NewPrice;

    printf("Insira o preço do produto: \n");
    printf("R$");
    scanf("%lf", &price);
    
    if(price <= 50.00) //Condição do preço inserido.
    {
        NewPrice = price*1.05;
       
    }
     else if(price > 50.00 && price <= 100.00)
    {
        NewPrice = price*1.1;
       
    }
    
    else 
    {
        NewPrice = price*1.15; 
    }
    
    if (NewPrice <= 80.00) //Condição do novo preço.
    {
        printf("Novo preço: R$%.2lf; Classificação: Barato.", NewPrice);
    }
     else if (NewPrice > 80.00 && NewPrice <= 120.00)
     {
        printf("Novo preço: R$%.2lf; Classificação: Normal.", NewPrice);
    }
    else if (NewPrice > 120.00 && NewPrice <= 200.00)
     {
        printf("Novo preço: R$%.2lf; Classificação: Caro.", NewPrice);
    }
    else 
     {
        printf("Novo preço: R$%.2lf; Classificação: Muito caro.", NewPrice);
    }
    
    
    


   

    
}


