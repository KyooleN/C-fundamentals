/******************************************************************************

. Uma empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um novo produto lançado. Para isso, forneceu o sexo do entrevistado e sua resposta (S — sim; ou N — não). Sabe-se
que foram entrevistadas dez pessoas. Faça um programa que calcule e mostre: 
■ o número de pessoas que responderam sim; 
■ o número de pessoas que responderam não; 
■ o número de mulheres que responderam sim; e
■ a percentagem de homens que responderam não, entre todos os homens analisados. 

*******************************************************************************/
#include <stdio.h>

void
main ()
{
  float porcentoHomemNao;
  char resposta, sexo;
  int pessoasSim, pessoasNao, mulheresSim, homens, homemNao, i;

  pessoasSim = 0;
  pessoasNao = 0;
  mulheresSim = 0;
  homens = 0;
  homemNao = 0;


  for (i = 1; i <= 10; i++) // São 10 respostas
    {
      printf ("Informe o sexo: (%dx) \n", i);
      printf ("Digite:\n");
      printf ("H - para 'Homem';\n");
      printf ("M - para 'Mulher'.\n");
      scanf (" %c", &sexo);

      if (sexo != 'H' && sexo != 'h' && sexo != 'M' && sexo != 'm') //Se digitar uma letra diferente de M ou H;
	{
	  printf ("Erro; Opçãoo inválida.");
	  return;
	}

      printf ("Gostou do produto? \n");
      printf ("Digite:\n");
      printf ("S - para 'Sim'; \n");
      printf ("N - para 'Não'\n");
      scanf (" %c", &resposta);

      if (resposta != 's' && resposta != 'n' && resposta != 'S' // Se digitar uma resposta diferente de S ou N;
	  && resposta != 'N')
	{
	  printf ("Erro; Insira uma respota válida.");
	}
      else if (resposta == 's' || resposta == 'S')
	{
	  pessoasSim++;
	}
      else
	{
	  pessoasNao++;
	}

      if (sexo == 'M' || sexo == 'm')  //Caso seja mulher;
	{
	  if (resposta == 's' || resposta == 'S')
	    {
	      mulheresSim++;
	    }
	}
	
	else // Caso seja homem;
	{
	    homens++;
	    if(resposta == 'n' || resposta == 'N')
	    {
	       homemNao++; 
	    }
	}
    } //Fim do Loop
    
    porcentoHomemNao = ((float)homemNao/(float)homens) * 100;
    
    printf("Número de pessoas que gostaram do produto: %d.\n",pessoasSim);
    printf("Número de pessoas que não gostaram do produto: %d.\n", pessoasNao);
    printf("Número de mulheres que gostaram do produto: %d.\n", mulheresSim);
    printf("Homens que não gostaram do produto em relação ao número total de homens: %.2f porcento.", porcentoHomemNao);
    
}   
	
	


	    

