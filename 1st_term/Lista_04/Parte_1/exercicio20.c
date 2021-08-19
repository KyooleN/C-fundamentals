/******************************************************************************

20. Faça um algoritmo para ler dois valores inteiros e imprimir o resultado da divisão do primeiro pelo
segundo. Se o segundo valor informado for ZERO, deve ser impressa uma mensagem de VALOR INVÂLIDO
e deverá ser lido um novo valor. Ao final do programa deve ser impressa a seguinte mensagem: VOCE
DESEJA OUTRO CÁLCULO (S/N)?. Se a resposta for S o programa deverá retornar ao começo, caso
contrário deverá encerrar a sua execução imprimindo quantos cálculos foram feitos.
OBS: O programa só deverá aceitar com a resposta para a pergunta as letras S ou N.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int num1, num2, calculos;
    char optUser;
    float divisao;
    calculos = 0;
   optUser = 's';
   while(optUser == 'S' || optUser == 's') 
   {   
        printf("Insira o número a ser dividido: ");
        scanf(" %d", &num1);
        
       printf("Insira o segundo número: ");
        scanf(" %d", &num2);
        if(num2 == 0)
        {
            printf("Erro; Valor inválido.");
            printf("Insira um valor diferente de '0': \n");
            scanf(" %d", &num2);
        }
        
        divisao = (float)num1/(float)num2;
        calculos++;
        printf("%d/%d = %.2f\n\n", num1, num2, divisao);
        printf("VOCE DESEJA OUTRO CÁLCULO (S/N)?\n");
        scanf(" %c", &optUser);
        
        
    }
    printf("%d cálculos foram feitos.", calculos);
    
}
        

   
    
        
       

