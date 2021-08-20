/******************************************************************************

20. Faça um programa que receba uma frase e faça a criptografia dela, utilizando a representação ASCII de
cada caractere mais um espaço, e depois proceda à sua descriptografia.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char frase[500];
    int fraseCriptografada[500];
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin); //recebendo a frase
    
    printf("Frase criptografada: ");
    
    for(int i = 0; i < strlen(frase); i++) { //criptografando a frase e passando ela para outra string
        fraseCriptografada[i] = frase["%d", i]; 
        printf("%d ", fraseCriptografada[i]);
    }
    
    printf("\nFrase descriptografada: ");
    
    for(int i = 0; i < strlen(frase); i++) { //descriptografando a frase
        printf("%c", fraseCriptografada[i]);
    }
    
    
}

