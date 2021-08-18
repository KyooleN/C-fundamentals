/******************************************************************************

Faça um programa que receba a idade de um nadador e mostre sua categoria, usando as regras a seguir.
Para idade inferior a 5, deverá mostrar mensagem.
CATEGORIA IDADE
Infantil 5 a 7
Juvenil 8 a 10
Adolescente 11 a 15
Adulto 16 a 30
Sênior Acima de 30
*******************************************************************************/
#include <stdio.h>

int main()
{ int idade;
    printf("Insira a idade do nadador: ");
    scanf("%d", &idade);
    
    if(idade >= 5 && idade <=7)
    {
        printf("Categoria: Infantil.");
    }
    
    else if(idade >= 8 && idade <=10)
    {
        printf("Categoria: Juvenil.");
    }
     else if(idade >= 11 && idade <=15)
    {
        printf("Categoria: Adolescente.");
    }
     else if(idade >= 16 && idade <=30)
    {
        printf("Categoria: Adulto.");
    }
    else if(idade > 30)
    {
        printf("Categoria: Sênior.");
    }
    else
    {
        printf("O nadador não se encaixa em nenhuma das categorias.");
    }

    
}
