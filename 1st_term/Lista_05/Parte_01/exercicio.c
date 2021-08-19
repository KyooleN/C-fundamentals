/******************************************************************************

Desenvolva uma calculadora e implemente cada operação como um procedimento em seu programa.
Faça um menu interativo exibindo as opções para que o usuário escolha qual operação realizar. Após a
escolha do usuário, imprima na tela as instruções referentes a aquela operação. Ao finalizar a exibir o
resultado da operação, exiba novamente o menu de opções inicial. Uma das opções deve ser a opção para
inserir 0 (zero), para sair.
O seu programa deverá implementar as seguintes operações (cada uma em um procedimento diferente):
a) Soma
b) Subtração
c) Multiplicação
d) Divisão
e) Raiz quadrada
f) Potência
g) Seno
h) Cosseno
i) Hipotenusa de um triângulo retângulo
j) Tangente
k) Logaritmo
l) Area de um retângulo
m) Área de uma circunferência
n) Fatorial

*******************************************************************************/
#include <stdio.h>
#include <math.h>

void showMenu()
{ 
    printf("Qual operação deseja realizar?\n ");
    printf("Digite:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("5 - Raiz quadrada\n");
    printf("6 - Potência\n");
    printf("7 - Seno\n");
    printf("8 - Cosseno\n");
    printf("9 - Tangente\n");
    printf("10 - Hipotenusa de um triângulo retângulo\n");
    printf("11 - Logaritmo\n");
    printf("12 - Area de um retângulo\n");
    printf("13 - Área de uma circunferência \n");
    printf("14 - Fatorial \n");
    printf("0 - Sair\n\n");
}

void Soma(float num1, float num2)
{
    printf("Insira o primeiro número: ");
    scanf(" %f", &num1);
    printf("Insira o segundo número: ");
    scanf(" %f", &num2);
    
    printf("%.2f + %.2f = %.2f\n\n", num1, num2, num1 + num2);
}

void Subtracao(float num1, float num2)
{
     printf("Insira o primeiro número: ");
    scanf(" %f", &num1);
    printf("Insira o segundo número: ");
    scanf(" %f", &num2);
    printf("%.2f - %.2f = %.2f\n\n", num1, num2, num1 - num2);
}

void Multiplicacao (float num1, float num2)
{
    printf("Insira o primeiro número: ");
    scanf(" %f", &num1);
    printf("Insira o segundo número: ");
    scanf(" %f", &num2);
    printf("%.2f x %.2f = %.2f\n\n", num1, num2, num1 * num2);
}

void Divisao (float num1, float num2)
{
    printf("Insira o numerador: ");
    scanf(" %f", &num1);
    printf("Insira o divisor: ");
    scanf(" %f", &num2);
    printf("%.2f/%.2f = %.2f\n\n", num1, num2, num1 / num2);
}

void raizQuadrada (float num1)
{
    printf("Insira um numero: ");
    scanf(" %f", &num1);
    printf("Raíz quadrada de %.2f = %.2f\n\n", num1, sqrt(num1));
}

void Potencia (float num1, float num2)
{
    printf("Insira a base da potência: ");
    scanf(" %f", &num1);
    printf("Insira a potência: ");
    scanf(" %f", &num2);
    printf("%.2f^%.2f = %.2f\n\n", num1, num2, pow(num1,num2));
}

void Seno (float num1)
{
    printf("Insira o ângulo em graus: ");
    scanf(" %f", &num1);
    printf("Sen(%.2f) = %.2f \n\n", num1, sin(num1));
}

void Cosseno (float num1)
{
    printf("Insira o ângulo em graus: ");
    scanf(" %f", &num1);
    printf("Cos(%.2f) = %.2f \n\n", num1, cos(num1));
}

void Tangente (float num1)
{
    printf("Insira o ângulo em graus: ");
    scanf(" %f", &num1);
    printf("Tan(%.2f) = %.2f \n\n", num1, tan(num1));
}

void Hipotenusa (float num1, float num2)
{
    printf("Insira a medida do lado A do triângulo: ");
    scanf(" %f", &num1);
    printf("Insira a medida do lado B do triângulo: ");
    scanf(" %f", &num2);
    printf("A Hipotenusa do Triângulo Retâgulo é igual a %.2f\n\n", (sqrt(pow(num1,2)+pow(num2,2))));
    
}

void Logaritmo (float num1)
{
    printf("Insira um numero: ");
    scanf(" %f", &num1);
    printf("Log(%.2f) = %.2f\n\n", num1, log(num1));
}

void areaRetangulo (float num1, float num2)
{
    printf("Insira a medida da largura do retângulo: ");
    scanf(" %f", &num1);
    printf("Insira o valor do comprimento do retângulo: ");
    scanf(" %f", &num2);
    printf("Área do retângulo = %.2f x %.2f = %.2f\n\n", num1, num2, num1*num2);
}

void areaCircunferencia (float num1)
{
    printf("Insira a medida do raio do círculo: ");
    scanf(" %f", &num1);
    printf("Área da circunferência = 2 x 3.14 x %.2f = %.2f\n\n", num1, 2*3.14*num1);
}

void Fatorial (float num1)
{
    float resultado = 1;
    printf("Insira um numero: ");
    scanf(" %f", &num1);
    for(int i = 1; i <= num1; i++)
    {
         resultado*= i;
        
    }
    printf("%.2f! = %.2f\n\n", num1, resultado);
}


int main()
{
    int OptUser;
    float num1, num2;

  do
  {
    showMenu();
   scanf(" %d",&OptUser);
   printf("\n");
   
   switch(OptUser)
   {
       case 1:
       Soma(num1, num2);
       break;
       
       case 2:
       Subtracao(num1, num2);
       break;
       
       case 3:
       Multiplicacao(num1, num2);
       break;
       
       case 4:
       Divisao(num1, num2);
       break;
       
       case 5:
       raizQuadrada(num1);
       break;
       
       case 6:
       Potencia(num1, num2);
       break;
       
       case 7:
       Seno(num1);
       break;
       
       case 8:
       Cosseno(num1);
       break;
       
       case 9:
       Tangente(num1);
       break;
       
       case 10:
       Hipotenusa(num1, num2);
       break;
       
       case 11:
       Logaritmo(num1);
       break;
       
       case 12:
       areaRetangulo(num1, num2);
       break;
       
       case 13:
       areaCircunferencia(num1);
       break;
       
       case 14:
       Fatorial(num1);
       break;
       
       case 0:
       break;
       
       default:
       printf("Opção inválida\n");
       break;
   }
  
}
 while(OptUser != 0);
}


