/******************************************************************************

Em uma eleição presidencial existem quatro candidatos. Os votos são informados por meio de código.
Os códigos utilizados são:
1, 2, 3, 4 Votos para os respectivos candidatos
5 Voto nulo
6 Voto em branco
Faça um programa que calcule e mostre:
■ o total de votos para cada candidato; 
■ o total de votos nulos; 
■ o total de votos em branco; 
■ a porcentagem de votos nulos sobre o total de votos; e
■ a porcentagem de votos em branco sobre o total de votos. 
Para finalizar o conjunto de votos, tem-se o valor zero e, para códigos inválidos, o programa deverá 
mostrar uma mensagem.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int voto, votos1, votos2, votos3, votos4,
    votosNulo, votosBranco, votosTotais;
    float porcentoNulo, porcentoBranco;
    
    votos1 = 0;
    votos2 = 0;
    votos3 = 0;
    votos4 = 0;
    votosBranco = 0;
    votosNulo = 0;
    votosTotais = 0;
    voto = 1;
    printf("Para finalizar, digite '0'.\n\n");
    
    while(voto != 0)
    {
        printf("Digite o número do político que deseja votar: \n \n");
        scanf(" %d", &voto);
        votosTotais++;
        
        if(voto == 1)
        {
            votos1++;
        }
        else if(voto == 2)
        {
            votos2++;
        }
         else if(voto == 3)
        {
            votos3++;
        }
         else if(voto == 4)
        {
            votos4++;
        }
         else if(voto == 5)
        {
            votosNulo++;
        }
         else if(voto == 6)
        {
            votosBranco++;
        }
        else
        {
            printf("Erro; Insira uma opção válida. \n \n");
        }
        
    } //Fim do loop.
    
    porcentoBranco = ((float)votosBranco/(float)votosTotais) * 100;
    porcentoNulo = ((float)votosNulo/(float)votosTotais) * 100;
    
    printf("Votos para o candidato número 1: %d\n", votos1);
     printf("Votos para o candidato número 2: %d\n", votos2);
      printf("Votos para o candidato número 3: %d\n", votos3);
       printf("Votos para o candidato número 4: %d\n", votos4);
        printf("Votos Brancos totais: %d\n", votosBranco);
        printf("Porcentagem de votos brancos em relação ao total: %.2f\n", porcentoBranco);
         printf("Votos nulos totais: %d\n", votosNulo);
           printf("Porcentagem de votos nulos em relação ao total: %.2f\n", porcentoNulo);
    
    
}

