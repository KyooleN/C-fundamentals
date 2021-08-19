/******************************************************************************


6- Calcular e retornar (uma função para cada) as seguintes conversões de um valor 𝑛 informado pelo
usuário: Polegada para centímetros; Centímetros para polegadas (1 polegada = 2,54 cm);
Fahrenheit para Celsius; e Celsius para Fahrenheit (𝐶º = (𝐹º − 32)/1,8 e 𝐹º = (𝐶º ∗ 1,8) + 32). 

*******************************************************************************/
#include <stdio.h>

float polegadaCm(float n)
{
    float polCm;
    
    polCm = n * 2.54;
    return polCm;
}

float cmPolegada(float n)
{   
    float cmPol;
    
    cmPol = n/2.54;
    return cmPol;
}

float celsiusFarenheit(float n)
{
    float celsiusFaren;
    
    celsiusFaren = (n * 1.8) + 32;
    return celsiusFaren;
}

float farenheitCelsius(float n)
{
    float farenCelsius;
    
    farenCelsius =  (n - 32)/1.8;
    return farenCelsius;
}

int main()
{
    float cmPol = 0, polCm = 0, celsiusFaren = 0, farenCelsius = 0, n;
    
    printf("Insira um número : \n");
    scanf(" %f", &n);
    
   
   polCm = polegadaCm(n);
   cmPol = cmPolegada(n);
   farenCelsius =  farenheitCelsius(n);
    celsiusFaren = celsiusFarenheit(n);
    
    
   
    printf("%.2f Centímetros = %.2f Polegadas\n", n, cmPol);
    printf("%.2f Polegadas = %.2f centímetros\n", n , polCm);
    printf("%.2f graus Celsius = %.2f graus Fahrenheit\n", n, celsiusFaren);
    printf("%.2f graus Fahrenheit = %.2f graus Celsius\n", n, farenCelsius);
    
   
}
