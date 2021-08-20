/******************************************************************************

Faça funções recursivas para:
1- Implemente uma função recursiva para solucionar cada um dos problemas descritos abaixo,
supondo que sua função receba como parâmetros um vetor A de inteiros e a quantidade 𝑛 de
elementos armazenada atualmente no vetor:

a. Imprimir os elementos na ordem em que se encontram armazenados (isto é, A[0], A[1], .
. ., A[n-1]);

b. Imprimir os elementos na ordem contrária àquele em que se encontram armazenados
(isto é, A[n-1], . . ., A[1], A[0]);

c. Calcular o somatório do valor de todos os elementos;

d. Calcular a média do valor de todos os elementos.

Além disso, você deve implementar um programa para testar suas funções.

*******************************************************************************/
#include <stdio.h>

void Ordem(int n, int vetor[], int i) //ordem escaneada
{
    
    
    if(i == n)
    {
        return;
    }
    
    else
    {
        printf("[%d] ", vetor[i]);
        i++;
        return Ordem(n, vetor, i);
        
    }
}

void Contrario(int n, int vetor[], int i) //ordem contraria
{
    i--;
   
     if(i < 0)
    {
        return;
    }
    
    else
    {
        printf("[%d] ", vetor[i]);
        
        return Contrario(n, vetor, i);
        
    }
}

int Soma(int n, int vetor[], int i, int soma)
{
    
    
    
    if( i == n)
    {
        return soma;
    }
    else
    {
        soma += vetor[i];
        i++;
        return Soma(n, vetor, i, soma);
    }
    
    
}

float Media(int n, int vetor[], int i, int soma)
{
    float media = (float)soma/n;
    
   if(i == n)
   {
       return media;
   }
   else
   {
      soma += vetor[i];
      i++;
      return Media(n, vetor, i, soma);
   }
}



int main()
{
    int i, n, OptUser, soma;
    float media;
     
    printf("Insira o número de componentes que deseja no vetor: \n");
    scanf(" %d", &n);
    
    int vetor[n];
    
    printf("Insira os componentes do vetor: \n");
    for(i = 0; i < n; i++)
    {
        scanf(" %d", &vetor[i]);
    }
    
    do  //menu
    {
        printf("O que deseja fazer?\n");
        printf("Digite:\n");
        printf("1 - para imprimir os componentes do vetor em ordem de análise;\n");
        printf("2 - para imprimir os componentes do vetor em ordem contrária;\n");
        printf("3 - para exibir a soma dos componentes do vetor;\n");
        printf("4 - para exibir a média dos componentes do vetor.\n");
        printf("0 - Sair.\n\n");
        scanf(" %d", &OptUser);
        
        
        switch(OptUser)
        {
            case 1:
            printf("Ordem em que os números se encontram armazeados: \n");
            Ordem(n, vetor, 0);
            printf("\n\n");
            break;
            
            case 2:
            printf("Ordem contrária ao que os números se encontram armazeados: \n");
            Contrario(n, vetor, n);
            printf("\n\n");
            break;
            
            case 3:
            printf("Soma dos componentes: \n");
            soma = Soma(n, vetor, 0, 0);
            printf("Soma = %d", soma);
            printf("\n\n");
            break;
            
            case 4:
            printf("Média dos componentes: \n");
            media = Media(n, vetor, 0, 0);
            printf("Média = %.2f", media);
             printf("\n\n");
            break;
            
            case 0: 
            break;
            
        }
    }
        
        while(OptUser != 0);
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

   

