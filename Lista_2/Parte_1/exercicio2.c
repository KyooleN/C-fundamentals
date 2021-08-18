/******************************************************************************

Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra
na tabela a seguir:
MÉDIA ARITMÉTICA MENSAGEM
0,0 3,0 Reprovado
3,0 7,0 Exame
7,0 10,0 Aprovado
*******************************************************************************/
#include <stdio.h>

int main()
{ double nota1, nota2, media;
    printf("Insira sua nota na primeira prova:\n");
    scanf("%lf", &nota1);
    printf("Insira sua nota na segunda prova: \n");
    scanf("%lf", &nota2);
    media = (nota1+nota2)/2;
    if (media < 3.0)
    {
        printf("Reprovado.");
    }
    
    else if(media>= 3.0 && media < 7.0)
    {
        printf("Exame.");
    }
    
    else
    {
        printf("Aprovado.");
    }
}
