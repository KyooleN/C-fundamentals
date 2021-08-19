/******************************************************************************

A Universidade possui regras muito claras sobre a aprovação e reprovação de alunos. Suponha que uma
disciplina possua o seguinte processo de avaliação:
• Total de aulas do semestre.
• Total de faltas do semestre.
• Nota de exercícios e trabalhos (25 pontos).
• Notas de avaliações (3 provas de 25 pontos cada).
• Nota de reavaliação (25 pontos).
Para saber se um aluno foi aprovado ele tem que obedecer aos seguintes requisitos:
1. O aluno deve obter pelo menos 75% de frequência.
2. A nota final do semestre deve ser superior ou igual a 60 pontos.
3. Caso a nota final seja inferior a 60 pontos, o aluno fará uma reavaliação, que deverá substituir
a menor nota entre as avaliações.
Desenvolva um algoritmo que, dados o Código da disciplina, total de aulas no semestre, total de
faltas no semestre, nota de exercícios e trabalhos, notas das três avaliações e a nota da reavaliação
(se houver), determine se aluno foi aprovado ou reprovado.
*******************************************************************************/
#include <stdio.h>

void
main ()
{
  int fAula, tAula, OptUser;
  double nota1, nota2, nota3, notaT, notaR, codigo, notaF;


  printf ("Insira o código da disciplina:\n");
  scanf ("%lf", &codigo);

  printf ("Insira o número total de aulas: ");
  scanf (" %d", &tAula);

  printf ("Insira o número de faltas: ");
  scanf (" %d", &fAula);

  if (fAula > 0.25 * tAula) //Caso não tenha 75% de presença, ja está reprovado
    {
      printf ("Você está reprovado.");
      return;
    }

  printf ("Insira sua nota na primeira prova: \n");
  scanf (" %lf", &nota1);



  printf ("Insira sua nota na segunda prova: \n");
  scanf (" %lf", &nota2);


  printf ("Insira sua nota na terceira prova: \n");
  scanf (" %lf", &nota3);

  printf ("Insira sua nota nos trabalhos: \n");
  scanf (" %lf", &notaT);
  if (nota1 < 0 || nota2 < 0 || nota3 < 0 || notaT < 0) //Evitar que o aluno insira valores exorbitantes
    {
      printf ("Erro; Insira uma nota maior ou igual a zero.");
      return;
    }
  else if (nota1 > 25 || nota2 > 25 || nota3 > 25 || notaT > 25)
    {
      printf ("Erro; Insira uma nota maior ou igual a zero.");
      return;
    }

  if (nota1 + nota2 + nota3 + notaT < 60.00) //Caso o aluno não tenha aprovação imediata
    {
      printf ("Você realizou uma reavaliação?\n");
      printf ("Digite:\n");
      printf ("1 - Sim\n");
      printf ("2 - Não\n");
      scanf ("%d", &OptUser);

      switch (OptUser)
	{
	case 1:
	  printf ("Digite sua nota: ");
	  scanf ("%lf", &notaR);
	  
	  if(notaR > 25 || notaR < 0)
	  {
	      printf ("Erro; Insira uma nota maior ou igual a zero.");
      return; 
	  }

	  if (nota1 < nota2 && nota1 < nota3)
	    {
	      notaF = notaR + nota2 + nota3 + notaT;
	    }
	  else if (nota2 < nota1 && nota2 < nota1)
	    {
	      notaF = notaR + nota1 + nota3 + notaT;
	    }
	  else if (nota3 < nota1 && nota3 < nota2)
	    {
	      notaF = notaR + nota1 + nota2 + notaT; //Cálculo da nota final
	    }
	  break;

	case 2:
	  notaF = nota1 + nota2 + nota3 + notaT;

	  printf ("Você foi reprovado com um total de %.2lf pontos.", notaF);
	}
    }
  else if (nota1 + nota2 + nota3 + notaT >= 60.00) //Caso o aluno tenha aprovação direta
    {
      notaF = nota1 + nota2 + nota3 + notaT;
      printf ("Você foi aprovado com um total de %.2lf pontos.", notaF);
      return;
    }

  if (notaF < 60.00) //Se após a reavaliação o aluno não tiver sido aprovado
    {
      printf ("Você foi reprovado com um total de %.2lf pontos.", notaF);
    }
  else //Se após a reavaliação o aluno tiver sido aprovado
    {
      printf ("Você foi aprovado com um total de %.2lf pontos.", notaF);
    }
}

