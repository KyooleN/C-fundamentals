/******************************************************************************

22. Um posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus
clientes. Faça um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma:
1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a 4) deve
ser solicitado um novo código (até que seja válido). Ao ser informado o código do combustível, o seu
respectivo nome deve ser impresso na tela. O programa será encerrado quando o código informado for o
número 4 escrevendo então a mensagem : "MUITO OBRIGADO" e a quantidade de clientes que
abasteceram cada tipo de combustível.
*******************************************************************************/
#include <stdio.h>

int main()
{
   int optUser, alcool, gasolina, diesel;
   optUser = 0;
   alcool = 0;
   gasolina = 0;
   diesel = 0;
   while(optUser != 4)
   {
       printf("Escolha um tipo de combustível: \n");
       printf("Digite: \n");
       printf("1 - para Álcool;\n");
       printf("2 - para Gasolina; \n");
       printf("3 - para Diesel;\n");
       printf("4 - para Sair.\n");
       scanf(" %d", &optUser);
       printf("\n\n");
       
       while (optUser != 1 && optUser != 2 && optUser != 3 && optUser != 4)
       {
           printf("Insira um código válido: \n");
           scanf(" %d", &optUser);
       }
       
       if(optUser == 1)
       {
           printf("ÁLCOOL\n\n");
           alcool++;
       }
       else if(optUser == 2)
       {
           printf("GASOLINA\n\n");
           gasolina++;
       }
       else if(optUser == 3)
       {
           printf("DIESEL\n\n");
           diesel++;
       }
       else if(optUser == 4)
       {
           printf("MUITO OBRIGADO\n\n");
           
       }
   }
   printf("Quantidade de pessoas que abasteceram com ÁLCOOL: %d\n", alcool);
  printf("Quantidade de pessoas que abasteceram com GASOLINA: %d\n", gasolina);
   printf("Quantidade de pessoas que abasteceram com DIESEL: %d\n", diesel);


}


