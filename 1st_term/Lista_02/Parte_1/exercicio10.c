/******************************************************************************

Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 4531. O
programa deve mostrar uma mensagem de permissão de acesso ou não.
*******************************************************************************/
#include <stdio.h>

int main()
{ int senha;
  printf("Senha: ");
  scanf("%d", &senha);
  if(senha != 4531)
  {
      printf("Acesso negado.");
  }
  else
  {
      printf("Acesso concedido.");
  }


    
}
