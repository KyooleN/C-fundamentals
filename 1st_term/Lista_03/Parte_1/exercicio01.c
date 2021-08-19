/******************************************************************************

. Faça um programa que leia cinco grupos de quatro valores (A, B, C, D) e mostre-os na ordem lida. 
Em seguida, organize-os em ordem crescente e decrescente.

*******************************************************************************/
#include <stdio.h>


int main()
{
    int i, conjunto, num1, num2, num3, num4, crescente, decrescente;
    i = 1;
    
    printf("Os números devem ser inteiros e entre - 1 milhão e 1 milhão. \n\n");
    
    for(conjunto = 1; conjunto <= 5; conjunto++)
        {
            printf("Insira o primeiro número do conjunto %d: \n", i);
            scanf(" %d", &num1);
            
             printf("Insira o segundo número do conjunto %d: \n", i);
            scanf(" %d", &num2);
            
             printf("Insira o terceiro número do conjunto %d: \n", i);
            scanf(" %d", &num3);
            
             printf("Insira o quarto número do conjunto %d: \n", i);
            scanf(" %d", &num4);
            i++;
            printf("\n \n");
            
            //Output
            
            
            printf("Ordem lida: [%d, %d, %d, %d]\n", num1, num2, num3, num4);
            printf("Ordem crescente: ");
            
            crescente = -1000000;
            decrescente = 1000000;
            
            while(crescente != 1000000)
            {
                 if(crescente == num1 || crescente == num2 
                 || crescente == num3 || crescente == num4)
            {
                printf(" %d", crescente);
                crescente++;
            }
            else
            {
                crescente ++;
            }
            } //fim do loop crescente
            
            printf("\n");
            printf("Ordem decrescente: ");
            
            while(decrescente != -1000000)
            {
                if(decrescente == num1 || decrescente == num2 
                || decrescente == num3 || decrescente == num4)
            {
                printf(" %d", decrescente);
                decrescente --;
            }
            else
            {
                decrescente --;
            }
            } // fim do loop decrescente
            printf("\n\n");
            
            }// fim do loop
}
           
            
            
            
            
            
          
       
            

