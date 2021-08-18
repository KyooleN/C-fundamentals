/******************************************************************************

7- Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre
o valor do rendimento e o valor total depois do rendimento.


*******************************************************************************/
#include <stdio.h>

int main()
{ double juros, jurosReal, deposito, novaQuantia, rendimento;
    printf("Insira a quantia a ser depositada: R$");
scanf("%lf", &deposito);
printf("Insira o valor do juros em porcentagem: ");
scanf("%lf",&juros);
jurosReal = juros/100 + 1;
    rendimento = (deposito*jurosReal ) - deposito; //cálculo rendimento
    novaQuantia = (deposito*jurosReal);
    printf("O depósito de R$%.2lf rendeu R$%.2lf totalizando R$%.2lf.", deposito,rendimento,novaQuantia);
    
    
}


  
