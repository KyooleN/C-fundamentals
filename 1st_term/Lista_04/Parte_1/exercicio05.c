/******************************************************************************

5. Faça um algoritmo para ler um valor N (validar para aceitar apenas valores positivos) e imprimir
apalavra PROGRAMACAO N vezes.

*******************************************************************************/
#include <stdio.h>

void main()
{ int n, i;
printf("Insira um valor para 'N'\n");
scanf(" %d", &n);
if(n < 0)
{
    printf("Erro; insira um valor positivo.");
    return;
}

for(i = 1; i <= n; i++)
{
    printf("PROGRAMAÇÃO (%dx)\n", i);
    
}



  
}

