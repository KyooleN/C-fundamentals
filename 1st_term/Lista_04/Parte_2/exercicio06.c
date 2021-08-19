/******************************************************************************

6. Sejam P(x1,y1) e Q(x2,y2) dois pontos quaisquer no plano. A sua distância é dada por:

d = sqrt((x2 - x1)^2 + (y2 - y1)^2)

Faça um algoritmo que leia várias linhas com quatro valores separados por vírgula, correspondentes às
coordenadas dos pontos P e Q e retorne a distância destes pares de pontos. A leitura dos dados será
interrompida quando as quatro coordenadas forem iguais a zero.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int xP, xQ, yP, yQ;
    float distancia;
    xP = 1;
    xQ = 1;
    yP = 1;
    yQ = 1;
    
    
     while( xP != 0 && xQ != 0 && yP != 0 && yQ != 0)
     {
         printf(" Insira as coordenadas do ponto P (x,y): \n");
         scanf(" %d %d", &xP, &yP);
         printf("Insira as coordenadas do ponto Q (x,y): \n \n");
         scanf(" %d %d", &xQ, &yQ);
         
         distancia = sqrt(pow(((float)xQ - (float)xP), 2) + pow(((float)yQ - (float)yP), 2));
         
     printf("Distância entre os pontos P e Q: %.2f\n\n", distancia);
     
     
         
     }
    
}
        
         
         
       

