/******************************************************************************

20. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e o 
número de filhos. Faça uma sub-rotina que leia esses dados para um número não determinado de pessoas
e retorne a média de salário da população, a média do número de filhos, o maior salário e o percentual 
de pessoas com salário inferior a R$ 380,00

*******************************************************************************/
#include <stdio.h>

float Calculos(int OptUser, float *maiorSalario, float *mediaFilhos, float *porcento380, float *mediaSalario)
{
    float salario380 = 0,  filhosTotal = 0, salario, salarioTotal = 0;
    int habitantes = 0, filhos;
    *maiorSalario = 0;
   
    
    
    while(OptUser == 1)
    {
        habitantes++;
       printf("Insira o salário do habitante: \n R$");
       scanf(" %f", &salario);
       
       if(salario < 380)
       {
           salario380++;
       }
       else if(salario >= (*maiorSalario))
       {
           (*maiorSalario) = salario;
       }
       
       salarioTotal += salario;
       
       printf("Insira o número de filhos do habitante:\n ");
       scanf(" %d", &filhos);
       filhosTotal += filhos;
       
       printf("Deseja inserir os dados de mais algum habitante?\n");
       printf("1 - Sim \n2 - Não\n");
       scanf(" %d", &OptUser);
       
       
    }                               //Fim loop
    
    (*porcento380) = (salario380/(float)habitantes) *100;
    (*mediaFilhos) = ((float)filhosTotal/(float)habitantes);
    (*mediaSalario) = (salarioTotal/(float)habitantes);
    
}
        
       
        
        
        
        

int main()
{
    int OptUser;
    float maiorSalario, mediaFilhos, porcento380, mediaSalario;
    printf("Deseja inserir os dados de um habitante?\n");
    printf("1 - Sim \n2 - Não\n");
    scanf(" %d", &OptUser);
    
    if(OptUser == 1)
    {
        Calculos(OptUser, &maiorSalario, &mediaFilhos, &porcento380, &mediaSalario);
        printf("Média de salário da população: R$%.2f\n", mediaSalario);
        printf("Maior Salário: %.2f\n", maiorSalario);
        printf("Porcentagem de habitantes com salário inferior a R$380,00: %.2f%%\n", porcento380);
        printf("Média de filhos por habitante: %.2f\n", mediaFilhos);
        
    }
    else
    {
        printf("Obrigado.");
    }
}


