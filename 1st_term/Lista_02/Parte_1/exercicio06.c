/******************************************************************************

O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos, ambos aplicados ao custo de fábrica. As porcentagens encontram-se na tabela a
seguir. Faça um programa que receba o custo de fábrica de um carro e mostre o preço ao consumidor.
CUSTO DE FÁBRICA % DO DISTRIBUIDOR % dos IMPOSTOS
Até R$ 12.000,00 5 isento
Entre R$ 12.000,00 e R$ 25.000,00 10 15
Acima de R$ 25.000,00 15 20
*******************************************************************************/
#include <stdio.h>

int main()
{double custo1, custo2;
printf ("Insira o custo de fábrica: \n");
printf("R$");
scanf("%lf", &custo1);

if (custo1 <= 12000)
{
    custo2 = custo1*1.05;
    printf("Preço consumidor: R$%.2lf", custo2);
}
else if(custo1 > 12000 && custo1 <= 25000)
   {
    custo2 = custo1*1.1 + custo1*1.15 - custo1;
    printf("Preço consumidor: R$%.2lf", custo2);
}
else 
   {
    custo2 = custo1*1.15 + custo1*1.2 - custo1;
    printf("Preço consumidor: R$%.2lf", custo2);
}

    
}

