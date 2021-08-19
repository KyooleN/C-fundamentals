/******************************************************************************
Parte III
Faça novamente todas as funções da parte II, porém aqui você deve modificar as funções para
procedimentos e trabalhar com passagem de parâmetros por referência. Você deve exibir o valor das
variáveis de retorno antes e depois da chamada do procedimento. Veja exemplo explicado em sala de
aula.

6- Calcular e retornar (uma função para cada) as seguintes conversões de um valor 𝑛 informado pelo
usuário: Polegada para centímetros; Centímetros para polegadas (1 polegada = 2,54 cm);
Fahrenheit para Celsius; e Celsius para Fahrenheit (𝐶º = (𝐹º − 32)/1,8 e 𝐹º = (𝐶º ∗ 1,8) + 32). 

*******************************************************************************/
#include <stdio.h>

void Calculos(float n, float *polCm, float *cmPol, float *celsiusFaren, float *farenCelsius)
{
    *polCm = n * 2.54;
    *cmPol = n/2.54;
    *celsiusFaren = (n * 1.8) + 32;
    *farenCelsius =  (n - 32)/1.8;
}


int main()
{
    float cmPol = 0, polCm = 0, celsiusFaren = 0, farenCelsius = 0, n;
    
    printf("Insira um número : \n");
    scanf(" %f", &n);
    
    printf("%.2f, %.2f, %.2f, %.2f \n", cmPol, polCm, celsiusFaren, farenCelsius); //antes do procedimento
    
    Calculos(n, &polCm, &cmPol, &celsiusFaren, &farenCelsius);
    
     printf("%.2f, %.2f, %.2f, %.2f \n", cmPol, polCm, celsiusFaren, farenCelsius); //depois do procedimento
    
   
    printf("%.2f Centímetros = %.2f Polegadas\n", n, cmPol);
    printf("%.2f Polegadas = %.2f centímetros\n", n , polCm);
    printf("%.2f graus Celsius = %.2f graus Fahrenheit\n", n, celsiusFaren);
    printf("%.2f graus Fahrenheit = %.2f graus Celsius\n", n, farenCelsius);
    
   
}
