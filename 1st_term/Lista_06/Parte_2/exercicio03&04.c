/******************************************************************************

3- Calcular e retornar o enésimo termo de uma progressão geométrica onde o primeiro termo e a
razão são informados pelo usuário.
4- Calcular e retornar também a soma dos 𝑛 primeiros termos desta progressão (veja ex. 3).

*******************************************************************************/
#include <stdio.h>


float ProgressaoN(float razao, float termo, int N)
{
    int i, termoN;
    
    for(i = 1; i < N; i++)
    {
        
        termo *= razao;
        
    }
        return termo;
    
}

float SomaN(float razao, float termo, int N)
{
    int i, somaN = 0;
    
    for(i = 1; i < N; i++)
    {
        somaN += termo;
        termo *= razao;
        
        
    }
        somaN += termo; //dentro do loop não é somado o ultimo termo;
        return somaN;
    
}
int main()
{ float razao, termo, termoN, somaN;
  int N;

    printf("Insira o primerio termo da P.G.: \n");
     scanf(" %f", &termo);

    printf("Insira a razão da P.G.: \n");
    scanf(" %f", &razao);
    
    printf("Insira quantos termos da P.G. deseja saber:\n");
    scanf(" %d", &N);
    
    
    
    termoN = ProgressaoN(razao, termo, N);
    somaN = SomaN(razao, termo, N);
     
     
    
    printf("O termo de número %d da P.G. de razão %.2f é %.2f.\n", N, razao, termoN);
    printf("A soma dos %d primerios números é igual a %.2f", N, somaN);
    
}
    
    
    
    
    
    
    
    
