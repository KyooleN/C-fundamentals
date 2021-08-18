/******************************************************************************

8- Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que: área =
base*altura/2.

*******************************************************************************/
#include <stdio.h>

int main()
{ double base, altura, area;
    printf("Insira o valor da base do triângulo em metros: ");
    scanf("%lf", &base);
     printf("Insira o valor da altura do triângulo em metros: ");
     scanf("%lf", &altura);
     area = (base*altura)/2; 
     printf("A área do triângulo é de %.3lf metros quadrados.",area);

    
}
