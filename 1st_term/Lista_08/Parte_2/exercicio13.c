/******************************************************************************

25. Crie um programa que:
■ receba o preço de dez produtos e armazene-os em um vetor;
■ receba a quantidade estocada de cada um desses produtos, em cinco armazéns diferentes, utilizando
uma matriz 5 x 10.
O programa deverá calcular e mostrar:
■ a quantidade de produtos estocados em cada um dos armazéns;
■ a quantidade de cada um dos produtos estocados, em todos os armazéns juntos;
■ o preço do produto que possui maior estoque em um único armazém;
■ o menor estoque armazenado;
■ o custo de cada armazém. 


*******************************************************************************/
#include <stdio.h>
#include <limits.h>

int main()
{
    float preco[10], custoArmazem[5], maiorEstoque = 0;
    int i, j, Estoque[5][10], quantidadeTotal_DoProduto[10], quantidadeCadaArmazem[5];
    int menorEstoque = INT_MAX;
    
    for(i = 0; i < 10; i++)//recebendo o preço dos produtos
    {
        printf("Insira o preço do produto %d: R$", i + 1);
        scanf(" %f", &preco[i]);
    }
    
    for(i = 0; i < 5; i++)//iniciando o vetor de estoque e preço em cada armzém como 0
    {
        quantidadeCadaArmazem[i] = 0;
        custoArmazem[i] = 0;
    }
    
    for(i = 0; i < 10; i++) //iniciando o vetor de quantidade total dos produtos em armazéns como 0
    {
        quantidadeTotal_DoProduto[i] = 0;
    }
    
    for(i = 0; i < 5; i++)//recebendo a quantidade dos produtos em cada armazém
    {
        for(j = 0; j < 10; j++)
        {
            printf("Insira o quantidade do estoque do produto %d no armazém %d: ",j + 1, i + 1);
            scanf(" %d", &Estoque[i][j]);
            
            quantidadeCadaArmazem[i] += Estoque[i][j];//quantidade de produtos em cada armazém
            if(menorEstoque > Estoque[i][j])//menor estoque armazenado
            {
                menorEstoque = Estoque[i][j];
            }
            
            quantidadeTotal_DoProduto[j] += Estoque[i][j]; //quantidade total de cada produto
            custoArmazem[i] += (Estoque[i][j] * preco[j]); //custo de cada armazém
            
            if(maiorEstoque < Estoque[i][j])//preço do produto com maior estoque
            {
                maiorEstoque = preco[j];
            }
            
        }
    }
    
    //output
    
    printf("\n");
    
    for(i = 0; i < 5; i++)
    {
        printf("Quantidade de produtos no armazém %d: %d\n", i + 1, quantidadeCadaArmazem[i]);
    }
    
    printf("\n");
    
    for(i = 0; i < 10; i++)
    {
        printf("Quantidade total do produto %d estocado: %d\n", i + 1, quantidadeTotal_DoProduto[i]);
    }
    
    printf("\nPreço do produto com maior estoque: R$%.2f\n", maiorEstoque);
    printf("Menor estoque armazenado: %d\n\n", menorEstoque);
    
    for(i = 0; i < 5; i++)
    {
        printf("Custo do Armazém %d: R$%.2f\n", i + 1, custoArmazem[i]);
    }
    
}
    
    


