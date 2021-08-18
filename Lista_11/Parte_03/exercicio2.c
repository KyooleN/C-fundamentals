/******************************************************************************

1. Uma empresa deseja controlar as vendas realizadas por seus vendedores a cada mês, durante um ano inteiro.
Sabe-se que nessa empresa existem quatro vendedores.
É importante que esse controle seja automatizado, porque muitas consultas devem ser respondidas
imediatamente. O gerente necessita de um meio para cadastrar as vendas de todos os vendedores e,
depois, precisa ver um menu contendo as seguintes opções:
1. Cadastrar vendedor.
2. Cadastrar venda.
3. Consultar as vendas de um funcionário em determinado mês.
4. Consultar o total das vendas de determinado vendedor.
5. Mostrar o número do vendedor que mais vendeu em determinado mês.
6. Mostrar o número do mês com mais vendas.
7. Finalizar o programa.
Na opção 1: devem ser cadastrados vendedores, e não pode haver dois vendedores com o mesmo código.
Na opção 2: devem ser cadastradas vendas, informado o código do vendedor e o mês das vendas, mas
não podem existir duas vendas para o mesmo vendedor no mesmo mês.
Na opção 3: deve ser informado o número do vendedor e o número do mês que se deseja consultar,
para, então, descobrir e mostrar esse valor.
Na opção 4: deve ser informado o número do vendedor desejado, calculado e mostrado o total de suas
vendas.
Na opção 5: deve ser informado o número do mês que se deseja pesquisar, para então descobrir e mostrar o número do vendedor que mais vendeu nesse mês.
Na opção 6: deve ser descoberto e mostrado o mês com maior venda.
Na opção 7: o programa termina.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int funcionario = 0; //variavel para controlar quantos vendedores ja foram criados

struct CriaVendedor
{
    int codigo;
    int vendasMes[12];
    float quantiaMes[12];
}; 

int VerificarCodigoVendedor(struct CriaVendedor vendedor[], int funcionario); //função para verificar a existencia de um funcionário no banco de dados
int VerificarCodigoVendedorAusente(struct CriaVendedor vendedor[], int funcionario); //função para verificar a AUSENCIA de um funcionário no banco de dados
int CadastrarVendedor(struct CriaVendedor vendedor[], int funcionario); //função para cadastrar um novo vendedor
int CadastrarVenda(struct CriaVendedor vendedor[], int funcionario); //função para cadastrar uma nova venda
int ConsultaVendaMes(struct CriaVendedor vendedor[], int funcionario); //função para consultar a venda de um funcionário em um determinado mês
int TotalQuantiaVendasAno(struct CriaVendedor vendedor[], int funcionario); //função para consultar o total arrecadado em um ano por um vendedor
int QuemMaisVendeuNoMes(struct CriaVendedor vendedor[], int funcionario); //função para consultar quem foi o vendedor que mais vendeu no mes escolhido
int MesComMaiorValorVenda(struct CriaVendedor vendedor[], int funcionario); //função para consultar qual foi o mês em que as vendas retornaram maior dinheiro
char EmitirRelatorio (struct CriaVendedor vendedor[], int funcionario); //função para emitir o relatorio do dia



int main() 
{
    
    
    struct CriaVendedor vendedor[300];
    int resposta;
    
    //Menu
    do {
        printf("O que deseja fazer?\nDigite:\n");
        printf("1 - Cadastrar Vendedor.\n2 - Cadastrar Venda.\n3 - Consultar as vendas de um determinado funcionário durante um mês.\n4 - Consultar o total das vendas de determinado vendedor.\n");
        printf("5 - Mostrar o número do vendedor que mais vendeu em um determinado mês.\n6 - Mostrar o número do mês com mais vendas.\n7 - Emitir relatório\n8 - Sair.\n>> ");
        scanf(" %d", &resposta);
        switch (resposta) {
            case 1: 
            funcionario = CadastrarVendedor(vendedor, funcionario);
            break;
            
            case 2:
            CadastrarVenda(vendedor, funcionario);
            break;
            
            case 3:
            ConsultaVendaMes(vendedor, funcionario);
            break;
            
            case 4:
            TotalQuantiaVendasAno(vendedor, funcionario);
            break;
            
            case 5:
            QuemMaisVendeuNoMes(vendedor, funcionario);
            break;
            
            case 6:
            MesComMaiorValorVenda(vendedor, funcionario);
            break;
            
            case 7:
            EmitirRelatorio(vendedor, funcionario);
            break;
            
            case 8:
            return 0;
        }
    } while(resposta != 7);
    
} //fim Main

int VerificarCodigoVendedor(struct CriaVendedor vendedor[], int funcionario)
{
    int flag;
    
    do {
        printf("\nInsira o código do funcionário: ");
        scanf(" %d", &vendedor[funcionario].codigo);
        for(int i = 0; i < funcionario; i++) { //conferindo se o codigo inserido ja esta em uso
            if(vendedor[funcionario].codigo == vendedor[i].codigo) {
                printf("Código já está em uso\n");
                flag = 1;
                break;
            } else {
                flag = 0;
            }
        }
    } while(flag != 0);
}// fim verificar codigo existencia

int VerificarCodigoVendedorAusente(struct CriaVendedor vendedor[], int funcionario)
{
    int flag, auxiliarFuncionario;
    
    do {
        printf("\nInsira o código do funcionário: ");
        scanf(" %d", &vendedor[funcionario].codigo);
        for(int i = 0; i < funcionario; i++) { //conferindo se o codigo inserido ja esta em uso
            if(vendedor[funcionario].codigo == vendedor[i].codigo) {
                flag = 0;
                auxiliarFuncionario = i;
                break;
            } else {
                flag = 1;
                if(i == funcionario - 1) {
                    printf("\nVendedor não cadastrado.\n");
                }
            }
        }
    } while(flag != 0);
    
    return auxiliarFuncionario;
}

int CadastrarVendedor(struct CriaVendedor vendedor[], int funcionario) {
    
    VerificarCodigoVendedor(vendedor, funcionario); //verificando a existencia do codigo informado
    
    //iniciando os valores de vena em 0 reais
    for(int i = 1; i <= 12; i++) {
        vendedor[funcionario].vendasMes[i] = 0; 
        vendedor[funcionario].quantiaMes[i] = 0;
    }
    printf("\nVendedor cadastrado com sucesso.\n");
    funcionario++; //atualizando o total de funcionarios
    
    return funcionario;
    
} //fim cadastro vendedor

int CadastrarVenda(struct CriaVendedor vendedor[], int funcionario) {
    
    int flag, codigo, auxiliarFuncionario, mes;
    //encontrando o vendedor na base de dados
   auxiliarFuncionario = VerificarCodigoVendedorAusente(vendedor, funcionario); //verificando a existencia do codigo informado
   
   //verificando a validade do mes
   do {
        printf("Insira o mês da venda:\nDigite:");
        printf("\n1 - Janeiro\n2 - Fevereiro\n3 - Março\n4 - Abril\n5 - Maio\n6 - Junho\n7 - Julho\n8 - Agosto\n9 - Setembro\n10 - Outubro\n11 - Novembro\n12 - Dezembro\n>> ");
        scanf(" %d", &mes);
        if(mes < 1 || mes > 12) { //caso insira um mes invalido
            printf("\nInsira um mês válido");
            flag = 1;
        } else {
            if(vendedor[auxiliarFuncionario].vendasMes[mes] == 1) {//caso o vendedor ja tenha vendido no mes 
            
                printf("\nO vendedor já tem um venda cadastrada no mês %d, favor escolher outro mês.\n", mes);
                flag = 1;
            } else { //caso esteja tudo certo
                flag = 0;   
                vendedor[auxiliarFuncionario].vendasMes[mes]++;
            }
            
        }
   } while(flag != 0);
   
   do {
        printf("Insira o valor da venda: R$");
        scanf(" %f", &vendedor[auxiliarFuncionario].quantiaMes[mes]);
        if(vendedor[auxiliarFuncionario].quantiaMes[mes] < 0) {
            printf("\nQuantia inválida\n");
            flag = 1;
        } else {
            flag = 0;
            vendedor[auxiliarFuncionario].vendasMes[mes]++; //numero de vendas totais no mes aumenta em 1
        }
        
   } while(flag != 0);
   
   
 }//fim cadastro venda
 
 int ConsultaVendaMes(struct CriaVendedor vendedor[], int funcionario) { //função para consultar a venda de um funcionário em um determinado mês
 
    int auxiliarFuncionario, mes, flag;
    
    auxiliarFuncionario = VerificarCodigoVendedorAusente(vendedor, funcionario);
    //verificando a validade do mes
   do {
        printf("Insira o mês da venda:\nDigite:");
        printf("\n1 - Janeiro\n2 - Fevereiro\n3 - Março\n4 - Abril\n5 - Maio\n6 - Junho\n7 - Julho\n8 - Agosto\n9 - Setembro\n10 - Outubro\n11 - Novembro\n12 - Dezembro\n>> ");
        scanf(" %d", &mes);
        if(mes < 1 || mes > 12) { //caso insira um mes invalido
            printf("\nInsira um mês válido");
            flag = 1;
        } else {
           flag = 0;    
        }
            
    } while(flag != 0);
    
    printf("\nO vendedor de código %d vendeu R$%.2f no mês %d.\n", vendedor[auxiliarFuncionario].codigo, vendedor[auxiliarFuncionario].quantiaMes[mes], mes);
    
 }
 
 int TotalQuantiaVendasAno(struct CriaVendedor vendedor[], int funcionario)
 {
    int auxiliarFuncionario, flag;
    float totalVendas = 0;
    
    auxiliarFuncionario = VerificarCodigoVendedorAusente(vendedor, funcionario);
    for(int i = 1; i <= 12; i++) {
        totalVendas += vendedor[auxiliarFuncionario].quantiaMes[i];
    }
    
    printf("\nO total de vendas do vendedor de código %d foi de R$%.2f.\n", vendedor[auxiliarFuncionario].codigo, totalVendas);
 }
 
 int QuemMaisVendeuNoMes(struct CriaVendedor vendedor[], int funcionario)
 {
     int mes, flag, MaisVendeu = 0, Venda = 0;
     
     do {
        printf("Insira o mês da venda que deseja saber:\nDigite:");
        printf("\n1 - Janeiro\n2 - Fevereiro\n3 - Março\n4 - Abril\n5 - Maio\n6 - Junho\n7 - Julho\n8 - Agosto\n9 - Setembro\n10 - Outubro\n11 - Novembro\n12 - Dezembro\n>> ");
        scanf(" %d", &mes);
        if(mes < 1 || mes > 12) { //caso insira um mes invalido
            printf("\nInsira um mês válido");
            flag = 1;
        } else {
            flag = 0;
        }
   } while(flag != 0);
   
    for(int i = 0; i < funcionario; i++) {
        if(vendedor[i].quantiaMes[mes] > Venda) {
            Venda = vendedor[i].quantiaMes[mes];
            MaisVendeu = i;
        }
    }
    printf("\nO vendedor de código %d leva o título de melhor vendedor do mês %d, com um total de R$%.2f.\n", vendedor[MaisVendeu].codigo, mes, vendedor[MaisVendeu].quantiaMes[mes]);
 }
 
 
 int MesComMaiorValorVenda(struct CriaVendedor vendedor[], int funcionario) { //função para consultar qual foi o mês em que as vendas retornaram maior dinheiro
    
    int MesMaisVendeu;
    float totalVendasMes = 0, TotalVendasMaiorMes = 0;
    
    for(int i = 1; i <= 12; i++) {
        totalVendasMes = 0;
        for( int j = 0; j < funcionario; j++) {
            totalVendasMes += vendedor[j].quantiaMes[i];
            if(totalVendasMes > TotalVendasMaiorMes) {
                TotalVendasMaiorMes = totalVendasMes;
                MesMaisVendeu = i;
            }
        }
    }
    
    printf("\nO mês %d foi o mês com maior valor de venda, totalizando R$%.2f !\n", MesMaisVendeu, TotalVendasMaiorMes);
 }

 char EmitirRelatorio(struct CriaVendedor vendedor[], int funcionario)
 {

     if(funcionario == 0)
     {
         printf("Não há nada para salvar.\n");
     } else {
         FILE *fp;

    fp = fopen("./relatorioVendas.txt", "w");

    fputs("Vendedores cadastrados:\n", fp);

  for(int i = 0; i < funcionario; i++){ //codigo do vendedor
      fprintf(fp, "Codigo: %d\n", vendedor[i].codigo);
      for(int j = 0; j < 12; j++) { //quanto vendeu em cada mes
          fprintf(fp, "Valor vendido no mês %d: R$%.2f\n", j, vendedor[i].quantiaMes[j]);
      }
  }

  printf("\nRelatório emitido.\n");
   fclose(fp);
     }
      
 }
 







