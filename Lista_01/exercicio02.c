/******************************************************************************

2- Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O aumento
deve ser de 10%. O programa recebe um número real e retorna a o valor reajustado. 

*******************************************************************************/
#include <stdio.h>

int main()
{ double Sal,novoSal; //Sal = salário atual
    printf("Digite o salário do funcionário:\n R$");
    scanf("%lf", &Sal);
    novoSal = Sal*1.1; //cálculo novo salário
    printf("O novo salário do funcionário é de R$%.2lf",novoSal);

    
}

