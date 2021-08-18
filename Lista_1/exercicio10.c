/******************************************************************************

10- Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre
a idade dessa pessoa e quantos anos ela terá em 2050.

*******************************************************************************/
#include <stdio.h>

int main()
{ int age,newAge;
    printf("Insira o ano de seu nascimento: ");
    scanf("%d",&age);
    newAge = 2050 - age;
    printf("Em 2050 você terá %d anos.",newAge);

}
