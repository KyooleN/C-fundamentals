/******************************************************************************
 Faça um programa que receba o valor de um carro e mostre uma tabela com os seguintes dados: preço 
final, quantidade de parcelas e valor da parcela. Considere o seguinte:
■ o preço final para compra à vista tem desconto de 20%; 
■ a quantidade de parcelas pode ser: 6, 12, 18, 24, 30, 36, 42, 48, 54 e 60; e
■ os percentuais de acréscimo encontram-se na tabela a seguir. 
*******************************************************************************/
#include <stdio.h>

void main()
{ 
    float valorCarro, valorParcela,valorFinal, aumento;
    int qntdParcelas;
    char formaPagamento;
    
    printf("Insira o valor do veículo: \n");
    printf("R$");
    scanf(" %f", &valorCarro);
    printf("Insira a forma de pagamento: \n");
    printf("Digite: \n");
    printf("V - para pagamento à vista;\n");
    printf("P - para parcelamento em até 60x.\n");
    scanf(" %c", &formaPagamento);
    
    if(formaPagamento == 'v' || formaPagamento == 'V') //Caso deseje pagar à vista.
    {
        valorFinal = valorCarro * 0.8;
        qntdParcelas = 0;
        valorParcela = 0;
       
    }
    
    else if(formaPagamento == 'p' || formaPagamento == 'P') //Caso seja parcelado.
    {
        printf("Insira o número de parcelas desejadas: \n");
        scanf(" %d", &qntdParcelas);
        if(qntdParcelas % 6 == 0 && qntdParcelas <= 60)
        {
            aumento = (((float)qntdParcelas/2)/100) * valorCarro; 
            valorFinal = valorCarro + aumento;
           valorParcela = valorFinal / qntdParcelas;
            
        }  
        else 
        {
            printf("Insira um número válido de parcelas");
            return;
        }
    }
    
    printf("Preço final: R$%.2f\n", valorFinal);
    printf("Quantidade de parcelas: %d\n", qntdParcelas);
    printf("Valor da parcela: %.2f\n", valorParcela);
    
   
}





