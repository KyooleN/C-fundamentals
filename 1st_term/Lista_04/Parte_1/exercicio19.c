/******************************************************************************

19. Deseja-se fazer um levantamento a respeito da ausência de alunos à primeira prova de Fundamentos
de Computação para cada uma das 14 turmas existentes. Para cada turma, é fornecido um conjunto de
valores, sendo que os dois primeiros valores do conjunto correspondem à identificação da turma (A, ou
B, ou C, ...) e ao número de alunos matriculados, e os demais valores deste conjunto contêm o número de
matrícula do aluno e a letra A ou P para o caso de o aluno estar ausente ou presente, respectivamente.
Faça um algoritmo que, para cada turma, calcule a porcentagem de ausência e escreva a identificação da
turma e a porcentagem calculada; determine e escreva quantas turmas tiveram porcentagem de ausência
superior a 5%

*******************************************************************************/
#include <stdio.h>

int main()
{ int turma, alunos, matricula, i, ausencia, ausencia5;
char turmaLetra, presenca;
float porcentoAusencia;
ausencia5 = 0;

    for(turma = 1; turma <= 14; turma++)
    {
        
        printf("Insira a letra da turma %d:\n", turma);
        scanf(" %c", &turmaLetra);
        
        alunos = 0;
        printf("Insira quantos alunos tem na sala: \n");
        scanf(" %d", &alunos);
        
        ausencia = 0;
        
        for(i = 1; i <= alunos; i++)
        {
            printf("Insira o número de matrícula do aluno: \n"); 
            scanf(" %d", &matricula);
            
            printf("Digite 'P' caso o aluno esteja presente ou 'A' caso esteja ausente: \n\n");
            scanf(" %c", &presenca);
            
            if(presenca == 'a' || presenca == 'A')
            {
                ausencia++;
                 
            }
            
        }    
            if(ausencia > alunos*0.05)
            {
                ausencia5++;
            }
            
            
            porcentoAusencia = ((float)ausencia/(float)alunos)*100;
            
           
            
            printf("%.2f%% dos alunos da turma %c não compareceram à aula. \n\n", porcentoAusencia, turmaLetra);
    }
    
    printf("Total de turmas com ausência superior a 5%%: %d", ausencia5);
    
    
}
        
       

