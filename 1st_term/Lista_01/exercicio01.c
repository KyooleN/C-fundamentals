/******************************************************************************

1- Determinar a soma e a média de 3 números entrados pelo teclado.

*******************************************************************************/
#include <stdio.h>

int main()
{   double a,b,c;
    printf("Digite o primeiro número: \n ");
    scanf("%lf",&a);
    printf("Digite o segundo número:\n ");
    scanf("%lf", &b);
    printf("Digite o último número:\n ");
    scanf("%lf", &c);
    
    double media = (a+b+c)/3.0; //cálculo da média
    
    printf("A média entre %.2lf, %.2lf e %.2lf é %.2lf",a,b,c,media);
    
    

    
}


