/******************************************************************************

Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a
mensagem de aprovado ou reprovado, considerando para aprovação média 7
*******************************************************************************/
int main()
{double nota1,nota2,nota3,nota4,media;
    printf("Por favor, insira sua primeira nota, de 0 a 10:\n");
    scanf("%lf", &nota1);
    printf("Insira sua segunda nota: \n");
    scanf("%lf", &nota2);
    printf("Insira sua terceira nota: \n");
    scanf("%lf", &nota3);
    printf("Por último, escreva sua quarta nota: \n");
    scanf("%lf", &nota4);
media = (nota1+nota2+nota3+nota4)/4;

 if (media >=7)
 {
     printf("Parabéns! Você foi aprovado com uma média de %.2lf pontos!", media) ;
 }
 
 else
 
 {
     printf("Infelizmente sua média de %.2lf pontos não garante a aprovação.", media);
 }

    
}