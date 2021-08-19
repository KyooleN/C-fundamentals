/******************************************************************************

7. Elabore uma sub-rotina que leia um número não determinado de valores positivos
e retorne a média aritmética desses valores. Terminar a entrada de dados com o valor zero.

*******************************************************************************/
#include <stdio.h>

void Media(float num, float media, float qntdNum)
{
    media = 0;
    qntdNum = 0;
    printf("Digite 0 para obter a média\n");
    do
    {
         printf("Insira um número: \n");
         scanf(" %f", &num);
         qntdNum++;
         media+= num;
    }
    while(num != 0);
    
    media = media/(qntdNum - 1);
    
    printf("Média aritmética: %.2f", media);
    
}

int main()
{
    float media, qntdNum, num;
    Media(media, qntdNum, num);
}
    
   


