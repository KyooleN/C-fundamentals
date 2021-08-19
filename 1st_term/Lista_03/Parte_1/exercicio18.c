/******************************************************************************

 Faça um programa que apresente o menu de opções a seguir, que permita ao usuário escolher a opção
desejada, receba os dados necessários para executar a operação e mostre o resultado. Verifique a possibilidade de opção inválida e não se preocupe com as restrições como salário inválido. 
Menu de opções:
1. Novo salário 
2. Férias 
3. Décimo terceiro 
4. Sair 
Digite a opção desejada.
Na opção 1: receber o salário de um funcionário, calcular e mostrar o novo salário usando as regras a seguir:
05 asc0711_CAP05 BR.indd 149 4/26/12 10:45 AM150 | Fundamentos da programação de computadores
SALÁRIOS PERCENTAGEM DE AUMENTO
Até R$ 210,00 15%
De R$ 210,00 a R$ 600,00 (inclusive) 10%
Acima de R$ 600,00 5%
Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor de suas férias. Sabe-se que as 
férias equivalem a seu salário acrescido de um terço do salário.
Na opção 3: receber o salário de um funcionário e o número de meses de trabalho na empresa, no máximo 
doze, calcular e mostrar o valor do décimo terceiro. Sabe-se que o décimo terceiro equivale a seu salário 
multiplicado pelo número de meses de trabalho dividido por 12.
Na opção 4: sair do programa.

*******************************************************************************/
#include <stdio.h>

void main()
{
   float salario, novoSalario;
   int optUser, meses;
   
   while(optUser != 4)
   {
       printf("Escolha uma das opções: \n");
       printf("Digite: \n");
       printf("1 - para 'Novo Salário';\n");
       printf("2 - para 'Férias';\n");
       printf("3 - para 'Décimo Terceiro';\n");
       printf("4 - para 'Sair'. \n \n");
       
       
       
       scanf(" %d", &optUser);
       if(optUser == 4)
       {
           return;
       }
       
       printf("Insira o salário: \n");
       printf("R$");
       scanf(" %f", &salario);
       printf("\n");
       
       if(optUser == 1) //seguindo a tabela do problema;
       {
           if(salario <= 210)
           {
               novoSalario = salario*1.15;
           }
           else if( salario > 210 && salario <= 600)
           {
               novoSalario = salario*1.1;
           }
           else 
           {
               novoSalario = salario*1.05;
           }
            printf("Novo salário: R$%.2f\n \n",  novoSalario);
           
       }
       
       else if(optUser == 2) //Férias
       {
           novoSalario = salario + (salario/3);
            printf("Novo salário: R$%.2f\n \n",  novoSalario);
           
       }
       else if( optUser == 3) //Décimo terceiro;
       {
           printf("Insira o número de meses trabalhado no ano: \n");
           scanf(" %d", &meses);
           
           if(meses >12 || meses < 0)
           {
               printf("Erro; Insira uma opção válida");
               return;
           }
           novoSalario = (salario*meses)/12;
            printf("Novo salário: R$%.2f\n \n",  novoSalario);
       }
       
       else
       {
           printf("Erro; Insira uma opção válida.");
           return;
       }
       
      
       
       
   }
   
   
}
           

           
           
           

