/******************************************************************************
Parte III
Faça novamente todas as funções da parte II, porém aqui você deve modificar as funções para
procedimentos e trabalhar com passagem de parâmetros por referência. Você deve exibir o valor das
variáveis de retorno antes e depois da chamada do procedimento. Veja exemplo explicado em sala de
aula. 

3- Calcular e retornar o enésimo termo de uma progressão geométrica onde o primeiro termo e a
razão são informados pelo usuário.
4- Calcular e retornar também a soma dos 𝑛 primeiros termos desta progressão (veja ex. 3).

*******************************************************************************/
#include <stdio.h>
void PG(float termo1, float razao, int n, float *termoN, float *somaN)
{
    int i;
    
    *termoN = termo1;
    
    for(i = termo1; i < n; i++)
    {
        *somaN += *termoN;
        *termoN *= razao;
        
    }
     *somaN += *termoN; //dentro do loop a soma não pega o ultimo termo
}

int main()
{
    float termo1, razao, termoN, somaN;
    int n;
    
    termoN = 0;
    somaN = 0;
    
    printf("Insira o primerio termo da P.G.: \n");
    scanf(" %f", &termo1);
    
    printf("Insira a  razão:\n");
    scanf(" %f", &razao);
    
    printf("Quantos termos da P.G. deseja saber?\n");
    scanf(" %d", &n);
    
    printf("%.2f, %.2f\n", somaN, termoN); //antes do procedimento
    PG(termo1, razao, n, &termoN, &somaN);
    printf("%.2f, %.2f\n\n", somaN, termoN); //depois do procedimento
    
    printf("Termo de número %d da P.G.: %.2f\n", n, termoN);
    printf("Soma dos %d primeiros termos da P.G.: %.2f", n, somaN);
}
    
    
    
