/******************************************************************************

6- Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a
receber,sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto
de 7% também sobre o salário base 

*******************************************************************************/
#include <stdio.h>

int main()
{ double salario,novoSal;
    printf("Insira o salário do funcionário:\n");
    printf("R$");
    scanf("%lf",&salario);
    novoSal = (salario*1.05)-(salario*0.93) + salario; //cálculo do novo salário
    printf("O novo salário é de R$%.2lf",novoSal);

    
}
