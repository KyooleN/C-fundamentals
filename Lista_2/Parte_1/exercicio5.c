/******************************************************************************

Faça um programa que receba dois números e execute uma das operações listadas a seguir, de acordo com a
escolha do usuário. Se for digitada uma opção inválida, mostre mensagem de erro e termine a execução do
programa. As opções são:
a) O primeiro número elevado ao segundo número.
b) Raiz quadrada de cada um dos números.
c) Raiz cúbica de cada um dos números. 
*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
   double num1, num2, potencia, rzqd1,rzqd2, rzcb1, rzcb2;
   int OptUser;
   
   printf("Insira dois números: \n");
   scanf("%lf",&num1);
   scanf("%lf",&num2);
   printf("Escolha uma opção:\n");
   printf("Digite:\n");
   printf("1 - para elevar o primeiro número ao segundo;\n");
   printf("2 - para exibir a raíz quadrada de ambos os números;\n");
   printf("3 - para exibir a raíz cúbica de ambos os números.\n");
   
   scanf("%d", &OptUser);
   
   if (OptUser == 1)
   {
       potencia = pow(num1, num2);
       printf("%.2lf elevado a %.2lf é igual a %.2lf", num1, num2, potencia);
   }
   
   else if (OptUser == 2)
   {
       rzqd1 = sqrt (num1);
       rzqd2 = sqrt (num2);
       printf (" %.2lf e %.2lf.",rzqd1,rzqd2);
   }
   
   else if (OptUser == 3)
   {
       rzcb1 = cbrt(num1);
       rzcb2 = cbrt (num2);
       printf("%.2lf e %.2lf.",rzcb1,rzcb2);
   }   
   else 
   {
       printf("Erro; Opção inválida.");
   }
   
   
}
