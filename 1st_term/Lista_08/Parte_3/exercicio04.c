/******************************************************************************

23. Crie um programa que receba três valores (obrigatoriamente maiores que zero),
representando as medidas dos três lados de um triângulo.
Elabore sub-rotinas para:
■ determinar se esses lados formam um triângulo (sabe-se que, para ser triângulo, a medida de um
lado qualquer deve ser inferior ou igual à soma das medidas dos outros dois).
■ determinar e mostrar o tipo de triângulo (equilátero, isósceles ou escaleno), caso as medidas formem um triângulo.
Todas as mensagens deverão ser mostradas no programa principal

*******************************************************************************/
#include <stdio.h>

void Triangulo(float ladoA, float ladoB, float ladoC, int *triangulo)
{
    if((ladoA <= (ladoB + ladoC)) && (ladoB <= (ladoA + ladoC)) && (ladoC <= (ladoA + ladoB)))
    {
        *triangulo = 1; //É triângulo
    }
    else
    {
        *triangulo = 2; //Não é triângulo
    }
}

void TipoTriangulo (float ladoA, float ladoB, float ladoC, int *tipoTriangulo)
{
    if(ladoA == ladoB && ladoA == ladoC)
    {
        *tipoTriangulo = 1; //Equilátero
    }
    else if(ladoA != ladoB && ladoA != ladoC && ladoC != ladoB) 
    {
        *tipoTriangulo = 2; //Escaleno
    }
    else
    {
      *tipoTriangulo = 3; //Isóceles  
    }
}

int main()
{
    float ladoA, ladoB, ladoC;
    int triangulo, tipoTriangulo;
    
    printf("Insira o lado A do triângulo:\n");
    scanf(" %f", &ladoA);
    
    printf("Insira o lado B do triângulo:\n");
    scanf(" %f", &ladoB);
    
    printf("Insira o lado C do triângulo:\n");
    scanf(" %f", &ladoC);

   Triangulo(ladoA, ladoB, ladoC, &triangulo);
   
   if(triangulo == 1)
   {
       TipoTriangulo(ladoA, ladoB, ladoC, &tipoTriangulo);
       
       if(tipoTriangulo == 1)
       {
           printf("O triângulo de lados %.2f, %.2f e %.2f é Equilátero.", ladoA, ladoB, ladoC);
       }
       
        else if(tipoTriangulo == 2)
       {
           printf("O triângulo de lados %.2f, %.2f e %.2f é Escaleno.", ladoA, ladoB, ladoC);
       }
       
       else 
       {
           printf("O triângulo de lados %.2f, %.2f e %.2f é Isóceles.", ladoA, ladoB, ladoC);
       }
       
   }
   else
   {
       printf("Não é triângulo.");
   }
}

