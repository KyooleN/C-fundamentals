/******************************************************************************

4- Faça uma função recursiva para verificar se uma palavra é palíndromo (Ex. aba, abcba).

*******************************************************************************/
#include <stdio.h>

char Palindromo(char letra[], int i)
{
    if(i < 0)
    {
        return 0;
    }
    else
    {
        printf("%c", letra[i]);
        i--;
        return Palindromo(letra, i);
    }
}

int main()
{
    int i;
    
    printf("Insira um conjunto de 5 caracteres ou algarismos:\n");
    
    char letra[5]; //declaração do vetor
    
    for(i = 0; i < 5; i++) //escanear os caracteres e alocar em vetor
    {
        scanf(" %c", &letra[i]);
    }
    
    printf("\nContrário: ");
    
    Palindromo( letra, 4); //output da palavra ao contrário
    
    if(letra[0] == letra[4] && letra[1] == letra[3]) //conferindo se é um palíndromo
    {
        printf("\nÉ palíndromo.");
    }
    else
    {
        printf("\nNão é palíndromo.");
    }
    
    
    
}
    
    
     
    
    
    
   
