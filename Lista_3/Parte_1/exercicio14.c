/******************************************************************************

Foi feita uma pesquisa sobre a audiência de canal de TV em várias casas de uma cidade, em determinado 
dia. Para cada casa consultada foi fornecido o número do canal (4, 5, 7, 12) e o número de pessoas que
estavam assistindo àquele canal. Se a televisão estivesse desligada, nada era anotado, ou seja, essa casa 
não entrava na pesquisa. Faça um programa que: 
■ leia um número indeterminado de dados (número do canal e número de pessoas que estavam assistindo); e
■ calcule e mostre a porcentagem de audiência de cada canal.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int numeroCanal, pessoas, audiencia, audiencia4, 
    audiencia5, audiencia7, audiencia12;
    float porcento4, porcento5, porcento7, porcento12;
    char opcao;
    
    audiencia = 0;
    audiencia4 = 0;
    audiencia5 = 0;
    audiencia7 = 0;
    audiencia12 = 0;
    
    while(opcao != 'n' && opcao != 'N') //Pergunta no final do Loop
    
    {
        printf("Qual canal estava sendo assistido?\n");
        scanf(" %d", &numeroCanal);
        
        printf("Quantas pessoas estavam assistindo?\n");
        scanf(" %d", &pessoas);
        
        audiencia += pessoas;
        
        if(numeroCanal == 4)
        {
            audiencia4 += pessoas;
        }
        else if(numeroCanal == 5)
        {
            audiencia5 += pessoas;
        }
         else if(numeroCanal == 7)
        {
            audiencia7 += pessoas;
        }
         else if(numeroCanal == 12)
        {
            audiencia12 += pessoas;
        }
        
        printf("Deseja inserir mais um telespectador?\n");
        printf("Digite: \n");
        printf("S - para 'Sim';\n");
        printf("N - para 'Não'.\n");
        scanf(" %c", &opcao);
       
        if(opcao != 's' && opcao != 'S' && opcao != 'n' && opcao != 'N')
        {
           printf("Erro; insira uma opção válida.");
           return;
        }
        
        
        
    }
    
    porcento4 = ((float)audiencia4/(float)audiencia) * 100;
     porcento5 = ((float)audiencia5/(float)audiencia) * 100;
      porcento7 = ((float)audiencia7/(float)audiencia) * 100;
       porcento12 = ((float)audiencia12/(float)audiencia) * 100;
       
       printf("Porcentagem de audiência de cada canal: \n");
       printf("Canal 4: %.2f/100\n", porcento4);
       printf("Canal 5: %.2f/100\n", porcento5);
       printf("Canal 7: %.2f/100\n", porcento7);
       printf("Canal 12: %.2f/100\n", porcento12);
       
    
}
        
    
        
       
        
        
        





