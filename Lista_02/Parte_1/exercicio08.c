/******************************************************************************

Faça um programa que receba o salário de um funcionário e, usando a tabela a seguir, calcule e mostre
o novo salário.
FAIXA SALARIAL % DE AUMENTO
Até R$ 300,00 50%
R$ 300,00 R$ 500,00 40%
R$ 500,00 R$ 700,00 30%
R$ 700,00 R$ 800,00 20%
R$ 800,00 R$ 1.000,00 10%
Acima de R$ 1.000,00 5%
*******************************************************************************/
#include <stdio.h>

int main()
{
   double sal, newSal;
   printf("Insira o salário do funcionário: \n");
   printf("R$");
   scanf("%lf",&sal);
   
   if (sal <= 300.00) //Condição de aumento de salário
   {
       newSal = sal*1.5;
       printf("Novo Salário: R$%.2lf", newSal);
   }
   else if (sal > 300.00 && sal <= 500.00)
   {
       newSal = sal*1.4;
       printf("Novo Salário: R$%.2lf", newSal);
   }
  else  if (sal > 500.00 && sal<= 700.00)
   {
       newSal = sal*1.3;
       printf("Novo Salário: R$%.2lf", newSal);
   }
  else  if (sal > 700.00 && sal <= 800.00)
   {
       newSal = sal*1.2;
       printf("Novo Salário: R$%.2lf", newSal);
   }
   else if(sal > 800.00 && sal <= 1000.00)
   {
       newSal = sal*1.1;
       printf("Novo Salário: R$%.2lf", newSal);
   }
    else 
   {
       newSal = sal*1.05;
       printf("Novo Salário: R$%.2lf", newSal);
   }
   
}
