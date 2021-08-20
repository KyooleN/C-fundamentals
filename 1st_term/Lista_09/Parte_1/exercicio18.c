/******************************************************************************

25. Faça um programa que receba uma frase e faça a criptografia, retirando das palavras suas vogais. 
O programa deverá armazenar essas vogais e suas posições originais em vetores,
mostrar a frase criptografada e posteriormente descriptografá-la.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    int j = 0, k = 0, posicao[300];
    char frase[300], vogais[300], fraseCriptografada[300];
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin);//recebendo a frase
    
    for(int i = 0; i < strlen(frase); i++) //escanear a frase
    {
        fraseCriptografada[k] = frase[i];
        //caso a frase tenha vogais, retirá-las
        if(frase[i] == 'a' || frase[i] == 'e' ||
            frase[i] == 'i' || frase[i] == 'o' ||
             frase[i] == 'u')
        {
            vogais[j] = frase[i];
            posicao[j] = i;
            j++;
            
           int n = -1;
            
            //procurando a proxima consoante
            do {
                n++;
                fraseCriptografada[k] = frase[i + n]; 
                
            }
            while(frase[i + n] == 'a' || frase[i + n] == 'e' ||
            frase[i + n] == 'i' || frase[i + n] == 'o' ||
             frase[i + n] == 'u'); 
             
             i+= n;//atualizando a frase
            }
           
        k++;
    }
    
    printf("Frase criptografada:\n");
    puts(fraseCriptografada);

    //Descrpitografando a frase
    
    j = 0;
    k = 0;
    char fraseDescriptografada[300];
    
    for(int i = 0; i < strlen(frase); i++) {
        fraseDescriptografada[i] = fraseCriptografada[k]; //transferindo os dados da frase criptografada 
        k++;
        if(i == posicao[j]) { //caso tenha chegado na posição onde havia uma vogal
            fraseDescriptografada[i] = vogais[j];
            j++;
            k--;
        }
    }
    
    printf("Frase descriptografada:\n");
    puts(fraseDescriptografada);
    
    
}



