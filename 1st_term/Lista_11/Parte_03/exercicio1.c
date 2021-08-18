/******************************************************************************

Utilize as informações a seguir para criar um controle automatizado de uma clínica média. Sabe-se que 
essa clínica deseja ter um controle semanal (2a a 6a feira) das consultas realizadas. A cada dia podem ser 
realizadas no máximo duas consultas para cada médico. Considere que são cadastrados apenas 3 médicos 
e 5 pacientes. 
PACIENTE (COD_PACIENTE, NOME, ENDERECO, TELEFONE) 
MEDICO (COD_MEDICO, NOME, TELEFONE) 
CONSULTA (NUM_CONSULTA, DIA_SEMANA, HORA, COD_MEDICO, COD_PACIENTE) 
1. Construa, usando estruturas, os tipos necessários para armazenar os PACIENTES, MEDICOS e 
CONSULTAS. 
2. Usando as estruturas do item anterior, implemente um procedimento para cadastrar um paci ente. 
Este procedimento deve me garantir que não haverá mais de um paciente com o mesmo código. 
3. Implemente um procedimento que cadastre uma consulta como ela é descrita no enunciado do 
problema. Lembre-se que as consultas só podem ser marcadas de 2a a 6a feira. Lembre-se também que 
cada médico só pode atender dois pacientes por dia. 
4. Implemente uma função que receba o nome de um médico e um determinado dia da semana; percorra 
os dados cadastrados e imprima na tela quantas consultas estão agendadas para este médico neste 
determinado dia. 
5. Implemente uma única função que receba um dia na semana e: (a) Mostre na tela todas as consultas daquele dia. 
(b) Exiba o nome do médico responsável pela consulta

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int qtd_pacientes = 1;
int qtd_medicos = 1;

struct Paciente {
    int codePaciente;
    char nomePaciente [50];
    char enderecoPaciente[300];
    int telPaciente;
};

struct Medico {
    int codeMedico;
    char nomeMedico[50];
    int telMedico;
    int consultasDiarias[6]; //de 2a a 6a
};

struct Consulta {
    int numConsulta;
    int diaSemana;
    char hora[5];
    int codePaciente;
    int codeMedico;
};

int CadastrarPacientes(struct Paciente pacientes[], int qtd_pacientes); //Função para cadastrar novos pacientes
int CadastrarMedicos(struct Medico medicos[], int qtd_medicos); //função para cadastrar novos medicos
int MarcaConsulta(struct Medico medicos[], int qtd_medicos, struct Paciente pacientes[], int qtd_pacientes); //função para marcar uma consulta
int verificaExistenciaPaciente(struct Paciente pacientes[], int qtd_pacientes); //função para verificar a existencia de um paciente no banco de dados
int verificaExistenciaMedico(struct Medico medicos[], int qtd_medicos); //função para verificar a existencia de um medico no banco de dados
int verificaExistenciaMedicoNome(struct Medico medicos[], int qtd_medicos); //função para verificar a existencia de um medico pelo nome no banco de dados
int AnalisaDiaMedico(struct Medico medicos[], int qtd_medicos); //função para analisar a disponibilidade do médico em um certo dia da semana
int ExibirConsultasDoDia(struct Medico medicos[], int qtd_medicos, struct Paciente pacientes[], int qtd_pacientes);//função para receber um dia na semana e exibir todas as consultas
char EmitirRelatorio(struct Medico medicos[], int qtd_medicos, struct Paciente pacientes[], int qtd_pacientes);//função para emitir uym relatório em arquivo txt

int main() {
    
    struct Paciente pacientes[qtd_pacientes]; //construindo uma variável para utilizar a função construtora pacientes
    struct Consulta consulta[qtd_pacientes];//construindo uma variável para utilizar a função construtora consulta
    struct Medico medicos[qtd_medicos]; //construindo uma variável para utilizar a função construtora Medico
    int resposta;
    
    //medico base
   sprintf(medicos[0].nomeMedico,"Victor");
   medicos[0].consultasDiarias[2] = 2;
    medicos[0].codeMedico = 123;
    medicos[0].telMedico = 1234;
    for (int k = 3; k <= 6; k++){ //iniciando as consultas diarias com 0
            medicos[0].consultasDiarias[k] = 0;    
        }
    
    //paciente base
    sprintf(pacientes[0].nomePaciente, "Milp");
    pacientes[0].codePaciente = 123;
   sprintf(pacientes[0].enderecoPaciente, "BH");
    pacientes[0].telPaciente = 1234;
    
    do {
        printf("\nO que deseja fazer?\nDigite:\n");
        printf("1 - Cadastrar novo Paciente\n2 - Cadastrar novo Médico\n3 - Marcar Consulta\n4 - Exibir a agenda do Doutor em um dia da semana.\n5 - Exibir todas as consultas de um dia.\n6 - Emitir Relatorio.\n7 - Sair.\n>> ");
        scanf(" %d", &resposta);
        
        switch(resposta) {
            case 1:
            qtd_pacientes =  CadastrarPacientes(pacientes, qtd_pacientes);
            break;
            
            case 2:
            qtd_medicos = CadastrarMedicos(medicos, qtd_medicos);
            break;
            
            case 3:
            MarcaConsulta(medicos, qtd_medicos, pacientes, qtd_pacientes);
            break;
            
            case 4:
            AnalisaDiaMedico(medicos, qtd_medicos);
            break;
            
            case 5:
            ExibirConsultasDoDia(medicos, qtd_medicos, pacientes, qtd_pacientes);
            break;

            case 6:
            EmitirRelatorio(medicos, qtd_medicos, pacientes, qtd_pacientes);
            break;
            
            case 7:
            return 0;
            
        }
        
    } while(resposta != 0);
    
}//fim main
   
int CadastrarPacientes(struct Paciente pacientes[], int qtd_pacientes) 
{
    int flag;
    
    do {
        printf("Insira o codigo do paciente: ");
        scanf(" %d", &pacientes[qtd_pacientes].codePaciente);
        for( int j = 0; j < qtd_pacientes; j++) {//checando os codigos de pacientes
            if(pacientes[j].codePaciente == pacientes[qtd_pacientes].codePaciente) { //caso ja tenha um código de paciente igual
                flag = 1;
                printf("\nEsse codigo já está sendo utilizado.\n\n");
                break;
            } else {
                flag = 0;
                break;
            }
        }
        
    } while(flag != 0);
    
    setbuf(stdin, NULL);
    
    printf("Insira o nome do paciente: ");
    fgets(pacientes[qtd_pacientes].nomePaciente, sizeof(pacientes[qtd_pacientes].nomePaciente), stdin);
    
    setbuf(stdin, NULL);
    
    pacientes[qtd_pacientes].nomePaciente[strlen(pacientes[qtd_pacientes].nomePaciente) - 1] = '\0'; //retirando o "enter"
    
    printf("\nInsira o endereço do paciente: ");
    fgets(pacientes[qtd_pacientes].enderecoPaciente, sizeof(pacientes[qtd_pacientes].enderecoPaciente), stdin);
    
    setbuf(stdin, NULL);
    
     pacientes[qtd_pacientes].enderecoPaciente[strlen(pacientes[qtd_pacientes].enderecoPaciente) - 1] = '\0';
    
    printf("\nInsira o numero de telefone do paciente (somente números): ");
    scanf(" %d", &pacientes[qtd_pacientes].telPaciente);
    
    setbuf(stdin, NULL);
    
    
    printf("\nPaciente cadastrado com sucesso.\n");
    
    
    qtd_pacientes++;
    
    return qtd_pacientes;
}// fim cadastro pacientes

int CadastrarMedicos(struct Medico medicos[], int qtd_medicos)
{
    int flag;
    
        do {
            printf("Insira o codigo do Médico: ");
            scanf(" %d", &medicos[qtd_medicos].codeMedico);
            
            for(int j = 0; j < qtd_medicos; j++) {//checando os codigos de pacientes
                if(medicos[qtd_medicos].codeMedico == medicos[j].codeMedico) { //caso ja tenha um código de paciente igual
                    flag = 1;
                    printf("\nEsse código já está sendo utilizado.\n\n");
                    break;
                } else {
                    flag = 0;
                }
            }
            
        } while(flag != 0);
        
        setbuf(stdin, NULL); //evitar que o programa registre o "Enter"
        
        printf("\nInsira o nome do Médico: ");
        fgets(medicos[qtd_medicos].nomeMedico, sizeof(medicos[qtd_medicos].nomeMedico), stdin);
        
        setbuf(stdin, NULL);
        
        medicos[qtd_medicos].nomeMedico[strlen(medicos[qtd_medicos].nomeMedico) - 1] = '\0'; //retirando o "enter"
        
        printf("\nInsira o número de telefone do medico (somente números): ");
        scanf(" %d", &medicos[qtd_medicos].telMedico);
        
        setbuf(stdin, NULL);
        
        for (int k = 2; k <= 6; k++){ //iniciando as consultas diarias com 0
            medicos[qtd_medicos].consultasDiarias[k] = 0;    
        }
        
        qtd_medicos++;
        
        return qtd_medicos;
        
        

}//fim cadastrto medicos


int verificaExistenciaPaciente(struct Paciente pacientes[], int qtd_pacientes)
{
    int paciente, auxiliarPaciente, flag;
    
       do{ //verificando a existencia do paciente no banco de dados
            printf("Insira o código do paciente que deseja marcar a consulta: \n");
            scanf(" %d", &paciente);
            
            for(int j = 0; j < qtd_pacientes; j++) {
                if(paciente == pacientes[j].codePaciente) { //caso o paciente seja encontrado
                    flag = 0;
                    auxiliarPaciente = j;
                    break;
                } else {
                    flag = 1; 
                    if(j == qtd_pacientes - 1) { //caso ja tenha percorrido todos os pacientes cadastrados
                        printf("\nPaciente não encontrado.\n");
                    }
                    }
                }
            
        } while(flag != 0);
        
        return auxiliarPaciente;
        
}//fim procura paciente

int verificaExistenciaMedico(struct Medico medicos[], int qtd_medicos) //função para verificar a existencia de um medico no banco de dados
{
    int medico, auxiliarMedico, flag;
    
         do { //verificando a existencia do medico no banco de dados
            printf("Insira o código do médico: ");
            scanf(" %d", &medico);
            
            for(int j = 0; j < qtd_medicos; j++) {
                    if(medico == medicos[j].codeMedico) { //caso o paciente seja encontrado
                        flag = 0;
                        auxiliarMedico = j;
                        break;
                    } else {
                        flag = 1; 
                        if(j == qtd_medicos - 1) { //caso ja tenha percorrido todos os pacientes cadastrados
                            printf("\nMédico não encontrado.\n");
                        }
                    }
            }
        
            
        } while(flag != 0);
        
        return auxiliarMedico;
}//fim procura medicos

int MarcaConsulta(struct Medico medicos[], int qtd_medicos, struct Paciente pacientes[], int qtd_pacientes) //função para marcar uma consulta
{
    int auxiliarPaciente, auxiliarMedico, diaDaSemana, flag;
        
        auxiliarPaciente = verificaExistenciaPaciente(pacientes, qtd_pacientes);
        auxiliarMedico = verificaExistenciaMedico(medicos, qtd_medicos);
        
    do {
            printf("Insira a data da consulta: \nDigite: \n");
            printf("2 - Segunda\n3 - Terça\n4 - Quarta\n5 - Quinta\n6 - Sexta\n");
            scanf(" %d", &diaDaSemana);  
            
            if(diaDaSemana > 6 || diaDaSemana < 2) {
                printf("\nEscolha um dia válido\n");
                flag = 1;
            } else if(medicos[auxiliarMedico].consultasDiarias[diaDaSemana] == 2) { //se po total de consultas do doutor no dia forem iguais a 2
                printf("\nO médico já está com a agenda lotada neste dia. Por favor, escolha outro dia.\n");
                flag = 1;
            } else {
                flag = 0;
                medicos[auxiliarMedico].consultasDiarias[diaDaSemana]++; //mais uma consulta no dia
                
            }
            
        } while(flag != 0);
        
        printf("Consulta marcada com sucesso.");
        
} //fim marcar consulta


int AnalisaDiaMedico(struct Medico medicos[], int qtd_medicos)
{
    int diaDaSemana, auxiliarMedico, flag;
    
    auxiliarMedico = verificaExistenciaMedicoNome(medicos, qtd_medicos);
    
    do {
            printf("Insira a data que quer consultar: \nDigite: \n");
            printf("2 - Segunda\n3 - Terça\n4 - Quarta\n5 - Quinta\n6 - Sexta\n");
            scanf(" %d", &diaDaSemana);  
            
            if(diaDaSemana > 6 || diaDaSemana < 2) {
                printf("\nEscolha um dia válido\n");
                flag = 1;
            } else {
                printf("\nO doutor %s tem %d consultas marcadas na %dª-feira.\n",medicos[auxiliarMedico].nomeMedico,  medicos[auxiliarMedico].consultasDiarias[diaDaSemana], diaDaSemana);
                flag = 0;
            }
            
        } while(flag != 0);
}

int ExibirConsultasDoDia(struct Medico medicos[], int qtd_medicos, struct Paciente pacientes[], int qtd_pacientes)
{
    int diaDaSemana, i = 0, flag;
    
    do { //conferindo se o dia digitado é valido
            printf("Insira a data que quer consultar: \nDigite: \n");
            printf("2 - Segunda\n3 - Terça\n4 - Quarta\n5 - Quinta\n6 - Sexta\n");
            scanf(" %d", &diaDaSemana);  
            
            if(diaDaSemana > 6 || diaDaSemana < 2) {
                printf("\nEscolha um dia válido\n");
                flag = 1;
            } else {
                flag = 0;
            }
            
        } while(flag != 0);
        
        do {
            if(medicos[i].consultasDiarias[diaDaSemana] > 0) { //caso o doutor tenha consulta no dia
              printf("\nO doutor %s tem %d consultas na %dª-feira.\n", medicos[i].nomeMedico, medicos[i].consultasDiarias[diaDaSemana] ,diaDaSemana);
              
            } else {
                printf("\nO doutor %s não tem consultas marcadas na %dª-feira\n", medicos[i].nomeMedico, diaDaSemana);
            }
            i++;
            
        } while(i < qtd_medicos);
}

int verificaExistenciaMedicoNome(struct Medico medicos[], int qtd_medicos) //função para verificar a existencia de um medico pelo nome no banco de dados
{
    char nomeMedico[50];
    int flag, auxiliarMedico;
    
    do {
        setbuf(stdin, NULL);
        
        printf("\nInsira o nome do Médico: ");
        fgets(nomeMedico, sizeof(nomeMedico), stdin);
        
        setbuf(stdin, NULL);
        
        nomeMedico[strlen(nomeMedico) - 1] = '\0'; //retirando o "enter"
        
        for(int i = 0; i <= qtd_medicos; i++) {
            if(strcmp(nomeMedico, medicos[i].nomeMedico) == 0) {
                flag = 0;
                auxiliarMedico = i;
                break;
            } else {
                flag = 1;
                if(i = qtd_medicos) {
                    printf("\nMédico não encontrado\n");
                }
            }
        }
    } while(flag != 0);
    
    return auxiliarMedico;
        
}

char EmitirRelatorio(struct Medico medicos[], int qtd_medicos, struct Paciente pacientes[], int qtd_pacientes)
{

    FILE *fp;

    fp = fopen("./relatorioMedicos.txt", "w");

    fputs("Medicos cadastrados:\n", fp);

   for(int i = 0; i < qtd_medicos; i++)
   {
       fprintf(fp, "Nome: %s, Código: %d, Telefone: %d\n", medicos[i].nomeMedico, medicos[i].codeMedico, medicos[i].telMedico);
   }

   fprintf(fp, "\nTotal de Médicos cadastrados: %d\n", qtd_medicos);

   fprintf(fp, "\n\nPacientes cadastrados:\n");

   for(int i = 0; i < qtd_pacientes; i++) {
       fprintf(fp, "\nNome: %s, Código: %d, Endereço: %s, Telefone: %d\n", pacientes[i].nomePaciente, pacientes[i].codePaciente, pacientes[i].enderecoPaciente, pacientes[i].telPaciente);
   }

   printf("\nRelatório emitido.\n");

   fclose(fp);

}






