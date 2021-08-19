/******************************************************************************

Parte III
Faça novamente todas as funções da parte II, porém aqui você deve modificar as funções para
procedimentos e trabalhar com passagem de parâmetros por referência. Você deve exibir o valor das
variáveis de retorno antes e depois da chamada do procedimento. Veja exemplo explicado em sala de
aula. 

7 - Calcular e retornar o máximo divisor comum entre dois números informados pelo usuário a partir
do algoritmo de Euclides.


*******************************************************************************/
#include <stdio.h>

int MDC(int num1, int num2, int resto, int *mdc)
{
    while (num2 != 0)
    {
       resto = num1 % num2;
       num1 = num2;
       num2 = resto;
    }
    *mdc = num1;
    
}

int main()
{
    int num1, num2, resto, mdc = 0;
    
    printf("Insira o primeiro número: \n");
    scanf(" %d", &num1);
    
    printf("Insira o segundo número: \n");
    scanf(" %d", &num2);
    
    printf(" %d\n", mdc); //antes do procedimento
     MDC(num1, num2, resto, &mdc);
    printf(" %d\n", mdc); //depois do procedimento
    
    printf("O MDC entre %d e %d é %d", num1, num2, mdc);
    
    
    

    
}
