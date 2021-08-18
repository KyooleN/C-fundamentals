/******************************************************************************

9- Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: área = π * R
2


*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{ double raio, area;
    printf("Insira o valor do raio do círculo em metros: ");
    scanf("%lf",&raio);
    area = (3.14*raio*raio);
    printf("A área do círculo é de %.3lf metros quadrados.",area);

   
}
