/******************************************************************************

Crie uma sub-rotina que receba como parâmetro a altura (alt) e o sexo de uma pessoa e retorne seu peso ideal. 
Para homens, deverá calcular o peso ideal usando a fórmula: peso ideal = 72.7 *alt − 58; para mulheres: peso 
ideal = 62.1 *alt − 44.7. 

*******************************************************************************/
#include <stdio.h>

void PesoIdeal(float altura, char sexo, float peso)
{
    printf("Insira seu sexo: \n");
    printf("M - Mulher\n");
    printf("H - Homem\n");
    scanf(" %c", &sexo);
    
    printf("Insira sua altura: \n");
    scanf(" %f", &altura);
    
    if(sexo == 'h' || sexo == 'H')
    {
        peso = 72.7*altura - 58;
    }
    else if(sexo == 'm' || sexo == 'M')
    {
        peso = 62.1*altura - 44.7;
    }
    else
    {
        printf("Resposta inválida");
        return;
    }
    printf("Peso ideal = %.2f", peso);
    
}

int main()
{
    float altura, peso;
    char sexo;  
    PesoIdeal(altura, peso, sexo);
}

