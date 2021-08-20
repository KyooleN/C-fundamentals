/******************************************************************************

3. Faça um programa para controlar o estoque de mercadorias de uma empresa. Inicialmente, o programa 
deverá preencher dois vetores com dez posições cada, onde o primeiro corresponde ao código do produto e o
segundo, ao total desse produto em estoque. Logo após, o programa deverá ler um conjunto indeterminado
de dados contendo o código de um cliente e o código do produto que ele deseja comprar, juntamente com a
quantidade. Código do cliente igual a zero indica fim do programa. O programa deverá verificar:
■ se o código do produto solicitado existe. Se existir, tentar atender ao pedido; caso contrário, exibir
mensagem Código inexistente;
■ cada pedido feito por um cliente só pode ser atendido integralmente. Caso isso não seja possível,
escrever a mensagem Não temos estoque suficiente dessa mercadoria. Se puder atendê-lo, escrever
a mensagem Pedido atendido. Obrigado e volte sempre;
■ efetuar a atualização do estoque somente se o pedido for atendido integralmente;
■ no final do programa, escrever os códigos dos produtos com seus respectivos estoques já atualizados. 

*******************************************************************************/
#include <stdio.h>

int ExistenciaProduto(int codigoProduto, int codeProduto[], int i, int *tipoProduto, int *existencia)
{
    for(i = 0; i < 11; i++)
    {
        if(codigoProduto == codeProduto[i]){
         *tipoProduto = i;
         *existencia = 1; //produto existe
         break;
        }
        else
        {
            *existencia = 2; //produto não existe
        }
    }
}
         
        

int main()
{
    int codeProduto[10], Estoque[10], i, codeCliente, codigoProduto, quantidadeProduto, existencia, tipoProduto;
    
    for(i = 0; i < 10; i++)
    {
      printf("Insira o código do produto %d: \n", i + 1);
      scanf(" %d", &codeProduto[i]);
      
      printf("Insira a quantidade do produto em estoque:\n");
      scanf(" %d", &Estoque[i]);
    }  
    
    while (codeCliente != 0){
        
        printf("\nInsira o código do cliente: ");
        scanf(" %d", &codeCliente);
        
        if(codeCliente == 0){ //Caso o codigo do cliente seja 0 o loop acaba
            break;
        }
        
        do{
            printf("Insira o código do produto: \n");
            scanf(" %d", &codigoProduto);
            ExistenciaProduto(codigoProduto, codeProduto, 0, &tipoProduto, &existencia); 
            if(existencia == 2)
            {
                printf("Código inválido. \n");
            }
          }
        while(existencia == 2); //Conferindo se o código do  produto existe
        
        
        
        printf("Insira a quantia desejada do produto:\n");
        scanf(" %d", &quantidadeProduto);
        
        if(quantidadeProduto > Estoque[tipoProduto])
        {
            printf("Não temos estoque suficiente dessa mercadoria.\n");
        }
        else
        {
            printf("Pedido atendido.\n");
            Estoque[tipoProduto] -= quantidadeProduto;
        }
        
        
    } //Fim da análise de dados
    
    printf("Estoques atualizados:\n\n");
    for(i = 0; i < 10; i++) 
    {
       printf("\n\nCódigo do produto: %d", codeProduto[i]);
       printf("\nEstoque: %d\n\n", Estoque[i]);
    }
    
}
         
        
       
        
        
        
        
      
    

