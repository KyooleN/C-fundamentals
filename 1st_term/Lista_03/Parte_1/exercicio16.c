/******************************************************************************

. Faça um programa que apresente o menu de opções a seguir:
Menu de opções:
1. Média aritmética 
2. Média ponderada 
3. Sair 
Digite a opção desejada.
Na opção 1: receber duas notas, calcular e mostrar a média aritmética.
Na opção 2: receber três notas e seus respectivos pesos, calcular e mostrar a média ponderada.
Na opção 3: sair do programa.

*******************************************************************************/
#include <stdio.h>

void main()
{ int optUser;
  float mediaAritmetica, mediaPonderada, 
  peso1, peso2, peso3,
  nota1, nota2, nota3; 
  
  while(optUser != 3)
  {
     printf("O que deseja?\n");
     printf("Digite:\n");
     printf("1 - para calcular a média aritmética de duas notas;\n");
     printf("2 - para calcular a média ponderada de três notas;\n");
     printf("3 - para sair.\n \n");
     scanf(" %d", &optUser);
     
     if(optUser == 1)
     {
         printf("Insira a primeira nota: ");
         scanf(" %f", &nota1);
        printf("\n");
         
         printf("Insira a segunda nota: ");
         scanf(" %f", &nota2);
         printf("\n");
         
         mediaAritmetica = (nota1 + nota2)/2;
         
         printf("A média aritmética entre as notas é igual a %.2f \n \n", mediaAritmetica);
         
     }
     else if(optUser == 2)
     {
         printf("Insira a primeira nota: ");
         scanf(" %f", &nota1);
         printf("\n");
         printf("Insira o peso da primeira nota: ");
         scanf(" %f", &peso1);
         printf("\n");
         
         printf("Insira a segunda nota: ");
         scanf(" %f", &nota2);
          printf("\n");
         printf("Insira o peso da segunda nota: ");
         scanf(" %f", &peso2);
         printf("\n");
         
         printf("Insira a terceira nota: ");
         scanf(" %f", &nota3);
         printf("\n");
         printf("Insira o peso da terceira nota: ");
         scanf(" %f", &peso3);
         printf("\n");
         
         mediaPonderada = ((nota1*peso1) + (nota2*peso2) + (nota3*peso3))/3;
         
         printf("Média ponderada: %.2f \n \n", mediaPonderada);
     }
     else
     {
         printf("Erro; Opção inválida. \n \n");
     }
  }
 
 
 

  
}




