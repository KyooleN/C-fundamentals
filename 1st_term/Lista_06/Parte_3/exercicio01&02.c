/******************************************************************************

Parte III
Faça novamente todas as funções da parte II, porém aqui você deve modificar as funções para
procedimentos e trabalhar com passagem de parâmetros por referência. Você deve exibir o valor das
variáveis de retorno antes e depois da chamada do procedimento. Veja exemplo explicado em sala de
aula. 

1- Calcular e retornar o enésimo termo de uma progressão aritmética onde o primeiro termo e a
razão são informados pelo usuário. 

2- Calcular e retornar também a soma dos 𝑛 primeiros termos desta progressão (veja ex. 1).

*******************************************************************************/
#include <stdio.h>

float Progressao(float razao, float termo, int N, float *somaN, float *termoN)
{
    int i;
    *somaN = 0;
    
    for(i = 1; i < N; i++)
    {
        (*somaN) += termo;
        termo += razao;
        
        
    }
    (*somaN) += termo; //Dentro do loop o último termo não é somado.
    
    (*termoN) = termo;
    
}

int main()
{ float razao, termo, termoN, somaN;
  int N;

    printf("Insira o primerio termo da P.A.: \n");
     scanf(" %f", &termo);

    printf("Insira a razão da P.A.: \n");
    scanf(" %f", &razao);
    
    printf("Insira quantos termos da P.A. deseja saber:\n");
    scanf(" %d", &N);
    
    printf("%.2f, %.2f\n", somaN, termoN); //antes do procedimento
    
     Progressao(razao, termo, N, &somaN, &termoN);
     
     printf("%.2f, %.2f\n", somaN, termoN); //depois do procedimento
    
    printf("O termo de número %d da P.A. de razão %.2f é %.2f.\n", N, razao, termoN);
    printf("A soma dos %d primerios números é igual a %.2f", N, somaN);
    
}
   
    
    
    


