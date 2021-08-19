/******************************************************************************

 Cada espectador de um cinema respondeu a um questionário no qual constava sua idade e sua opinião 
em relação ao filme: ótimo — 3; bom — 2; regular — 1. Faça um programa que receba a idade e a opinião de quinze espectadores, calcule e mostre: 
■ a média das idades das pessoas que responderam ótimo; 
■ a quantidade de pessoas que responderam regular; e
■ a percentagem de pessoas que responderam bom, entre todos os espectadores analisados. 

*******************************************************************************/
#include <stdio.h>

void main()
{
    float mediaIdadesOtimo, porcentoBom;
    int idade, opiniao, pessoasRegular, pessoasBom, idadeOtimo, pessoasOtimo, i;
    
    mediaIdadesOtimo = 0;
    pessoasRegular = 0;
    porcentoBom = 0;
    idadeOtimo = 0;
    pessoasOtimo = 0;
    pessoasBom = 0;
    
    for(i = 1; i <= 15; i++) //São 15 clientes;
    {
        printf("Quantos anos você tem? (%dx)\n", i);
        scanf(" %d", &idade);
        
        printf("O que você achou do filme?\n");
        printf("Digite:\n");
        printf("1 - se achou o filme Regular;\n");
        printf("2 - se achou o filme Bom;\n");
        printf("3 - se achou o filme Ótimo;\n");
        scanf(" %d", &opiniao);
        
        if(opiniao == 3)
        {
            idadeOtimo += idade;
            pessoasOtimo ++;
        }
        else if( opiniao == 2)
        {   
            pessoasBom++;
        }
        else if(opiniao == 1)
        {
            pessoasRegular++;
        }
        else
        {
            printf("Erro; Insira uma opinião válida.");
            return;
        }
    }
    porcentoBom = (float)pessoasBom/15 * 100;
    mediaIdadesOtimo = idadeOtimo/pessoasOtimo;
    
    printf("Média da idade das pessoas que responderam 'Ótimo': %.2f \n", mediaIdadesOtimo);
    printf("Quantidade de pessoas que responderam 'Regular': %d \n", pessoasRegular);
    printf("Porcentagem das pessoas que responderam 'Bom': %.2f porcento", porcentoBom);
}
           

