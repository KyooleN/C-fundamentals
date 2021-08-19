/******************************************************************************

Parte III
Faça novamente todas as funções da parte II, porém aqui você deve modificar as funções para
procedimentos e trabalhar com passagem de parâmetros por referência. Você deve exibir o valor das
variáveis de retorno antes e depois da chamada do procedimento. Veja exemplo explicado em sala de
aula

5- Calcular e retornar a soma e o produto (faça funções separadas) dos dígitos de um número inteiro
informado pelo usuário.

*******************************************************************************/
#include <stdio.h>

void Calculos(int num, int *soma, int *produto)
{
    int digito1, digito2;
    
    digito2 = num % 10;
    digito1 = num / 10;
   
    
    *soma = digito2 + digito1;
    *produto = digito1 * digito2;
}



int main()
{
    int num, soma, produto;
    
    printf("Insira um número: \n");
    scanf(" %d", &num);
    
    
    printf("%d, %d\n", soma, produto); //antes dos procedimentos
    
    Calculos(num, &soma, &produto);
 
    
    printf("%d, %d\n\n", soma, produto); // depois dos procedimentos
    
    printf("Soma: %d\n", soma);
    printf("Produto: %d", produto);
    
    
    
}
