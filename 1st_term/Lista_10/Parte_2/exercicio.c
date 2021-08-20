/******************************************************************************

Agora modifique o exercício e faça dois programas, um para criptografar o arquivo texto e outro para
descriptografar o arquivo texto. O programa deverá receber uma chave de criptografia. Por exemplo, no
código acima, a chave pode ser um valor qualquer no lugar da constante “1” usada para somar a posição
de cada caractere da tabela ASCII. 

*******************************************************************************/
#include <stdio.h>

int main() {
    
    FILE *fp;
    int chave;
    
    printf("Insira uma chave de criptografia: ");//numeros somados na tabela ASCII
    scanf("%d", &chave);
    
    fp = fopen("text.txt", "r"); //ler o arquivo
    
    //caso o arquivo não seja encontrado
    if(fp == NULL) { 
        printf("Não foi possível abrir o arquivo.");
        return 0;
    }
    
    char letraAnalisada, letraCriptografada[300];
    int i = 0;
    
    do {
         letraAnalisada = fgetc(fp); //analisando uma letra do arquivo
         if(letraAnalisada == EOF){ //caso seja o fim do arquivo
             break;
         }
         if(letraAnalisada + chave > 255) {// a tabela ASCII vai somente até 255
             letraCriptografada[i] = letraAnalisada; 
         } else {
            letraCriptografada[i] = letraAnalisada + chave;//o novo caractere é 17 posições acima na tabela ASCII
         }
         
         i++; 
        
    } while(letraAnalisada != EOF); //enquanto não chegar o fim do arquivo
    
    fclose(fp);
    
    fp = fopen("text.txt", "w");//abrindo o arquivo para criptografá-lo
    
    int j = 0;
    
    while(j <= i) { //criptografando
        fputc(letraCriptografada[j], fp);
        j++;
    }
    
     fclose(fp);
     
     /*******************Parte para descriptografar*************************************/
     
     fp = fopen("text.txt", "r"); //ler o arquivo
    
    char letraDescriptografada[300];
     i = 0;
    
    do {
         letraAnalisada = fgetc(fp); //analisando uma letra do arquivo
         if(letraAnalisada == EOF){ //caso seja o fim do arquivo
             break;
         }
         
         letraDescriptografada[i] = letraAnalisada - chave;
         
         i++; 
        
    } while(letraAnalisada != EOF); //enquanto não chegar o fim do arquivo
    
    fclose(fp);
    
    fp = fopen("textDescriptografado.txt", "w");//abrindo um novo arquivo para descriptografar o antigo
    
    //caso o arquivo não seja encontrado
    if(fp == NULL) { 
        printf("Não foi possível abrir o arquivo.");
        return 0;
    }
    
     j = 0;
    
    while(j < i) { //descriptografando
       fputc(letraDescriptografada[j], fp);
        j++;
    }
    
     fclose(fp);
     
     printf("Criptografia realizada com sucesso.");
}