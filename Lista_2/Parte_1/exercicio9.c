/******************************************************************************

Uma agência bancária possui dois tipos de investimentos, conforme o quadro a seguir. Faça um programa que receba o tipo de investimento e seu valor, calcule e mostre o valor corrigido após um mês de
investimento, de acordo com o tipo de investimento.
TIPO DESCRIÇÃO RENDIMENTO MENSAL
1 Poupança 3%
2 Fundos de renda fixa 4%
*******************************************************************************/
#include <stdio.h>

int main()
{ double invest, retorno, total;
int OptUser;
    printf("Insira a quantia a ser depositada:\n");
    printf("R$");
    scanf("%lf",&invest);
    printf("Escolha o tipo de investimento: \n");
    printf("Digite:\n");
    printf("1 - para investimento Poupança;\n");
    printf("2 - para investimento Fundos de Renda Fixa.\n");
    scanf("%d", &OptUser);
    
    
    if(OptUser == 1)
    {   
        total = invest*1.03;
        retorno = total - invest;
        printf("Seu investimento rendeu R$%.2lf em um mês, totalizando R$%.2lf.",retorno, total);
    }
    
    else if(OptUser == 2)
    {
       total = invest*1.04;
       retorno = total - invest;
       printf("Seu investimento rendeu R$%.2lf em um mês, totalizando R$%.2lf.",retorno, total);
        
    }
    
    else 
    {
        printf("Erro, digite uma opção válida;");
    }
    
}

   
     
