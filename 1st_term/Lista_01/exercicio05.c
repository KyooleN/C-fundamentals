/******************************************************************************

5- Faça um programa que calcule três notas e seus respectivos pesos, calcule e mostre a média
ponderada.


*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{ double nota1,nota2,nota3,soma,media;
    printf("Digite sua nota na redação:\n ");
    scanf("%lf",&nota1);
    printf("Digite sua nota em Matemática e suas Tecnologias:\n");
    scanf("%lf",&nota2);
    printf("Por último, digite sua nota em Ciências da Natureza e suas Tecnologias: \n");
    scanf("%lf",&nota3);
    soma = (nota1*2.5)+(nota2*2.0)+(nota3*3.5); //Calculando com o peso das notas
    media = soma/3;
    printf("Sua média ponderada é de %.2lf pontos.",media);
    
}

