/******************************************************************************

11- Pedro comprou um saco de ração com peso em quilos. Ele possui 2 gatos, para os quais fornece
a quantidade de ração em gramas. A quantidade diária de ração fornecida para cada gato é
sempre a mesma. Faça um programa que receba o peso do saco de ração e a quantidade de ração
fornecida para cada gato, calcule e mostre quanto restará de ração no saco após 5 dias.

*******************************************************************************/
#include <stdio.h>

int main()
{ double pacote, pote, resto;
printf("Insira o peso do pacote (em quilos): \n");
scanf("%lf",&pacote);
printf("Insira a quantidade (em gramas) fornecida a cada gato por dia:\n");
scanf("%lf",&pote);

resto = (pacote*1000) - (pote*10); //Pacote em gramas menos 2 potes de ração durante 5 dias.
printf("Após 5 dias, restarão %.0lf gramas de ração.", resto);
  
}
