/******************************************************************************

14. Ler o número de alunos existentes em uma turma, ler as notas destes alunos, e calcular a média
aritmética destas notas.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int alunos, i;
    float nota, media, soma;
    soma = 0;
    media = 0;
    
    printf("Insira o número de alunos na classe: \n");
    scanf(" %d", &alunos);
    
    for(i = 1; i <= alunos; i++)
    {
        printf("Insira a nota do aluno número (%d)\n", i);
        scanf(" %f", &nota);
        
        soma += nota;
    }
    media = soma/alunos;
    printf("Média artmética das notas: %.2f", media);
}
        
        

