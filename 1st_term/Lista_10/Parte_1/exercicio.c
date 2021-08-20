/******************************************************************************

Faça um programa de criptografia de dados, ou seja, um programa capaz de ler um arquivo texto, codificar
este arquivo através de alguma técnica de alteração do código ASCII (exemplo: somar 1 ao valor ASCII de
cada carácter), e escrever em disco o arquivo codificado.

Crie um outro programa que descriptografe um arquivo criado pelo programa de criptografia, realizando
a operação inversa: ler o arquivo do disco, descodificar e escrever o novo arquivo em disco
descriptografado. Lembre-se que para que seja possível criptografar/descriptografar um arquivo a função
de codificação deve possuir uma função inversa.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    
    FILE *fp;
    
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
         if(letraAnalisada + 17 > 255) {// a tabela ASCII vai somente até 255
             letraCriptografada[i] = letraAnalisada; 
         } else {
            letraCriptografada[i] = letraAnalisada + 17;//o novo caractere é 17 posições acima na tabela ASCII
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
         
         letraDescriptografada[i] = letraAnalisada - 17;
         
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
       
        
         



