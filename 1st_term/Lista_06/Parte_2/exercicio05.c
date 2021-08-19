/******************************************************************************



5- Calcular e retornar a soma e o produto (faça funções separadas) dos dígitos de um número inteiro
informado pelo usuário.

*******************************************************************************/
#include <stdio.h>

int Soma(int num)
{
    int digito1, digito2, soma;
    
    digito2 = num % 10;
    digito1 = num / 10;
   
    
    soma = digito2 + digito1;
    return soma;
    
}

int Produto(int num)
{
    int digito1, digito2, produto;
    
    digito2 = num % 10;
    digito1 = num / 10;
   
    
    produto = digito1 * digito2;
    return produto;
    
}



int main()
{
    int num, soma, produto;
    
    printf("Insira um número: \n");
    scanf(" %d", &num);
    
   soma = Soma(num);
   produto = Produto(num);
   
    printf("Soma: %d\n", soma);
    printf("Produto: %d", produto);
    
    
    
}
 
    
    
  
    
    
   
    
