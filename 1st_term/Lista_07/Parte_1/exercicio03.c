/******************************************************************************

3- Exiba o termo N da sequência de Fibonacci

*******************************************************************************/
#include <stdio.h>

int fibonacci(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n, N;
    
   printf("Insira qual número deseja saber da sequência de Fibonacci: \n");
   scanf(" %d", &n);
   
   N = fibonacci(n);
   printf("%d", N);
}

