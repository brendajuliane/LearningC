#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Sistema para bilbioteca

/*
Brenda Juliane Rodrigues da Silva  RA 248239
Felipe Costa Fonseca Martinez  RA 254214
Pietro Grazzioli Golfeto  RA 223694
Ulisses dos Santos Cardoso da Silva  RA 244902
*/

struct leitor {
    char nome[50];
    char CPF[15];
    char tel[15];
};
struct livro {
    char titulo[50];
    char autor[50];
    char genero[30];
    char codigo[10];
};
struct emprestimo {
    char data[12];
    char devolucao[12];
    char status[12];
    char codigoLivro[10];
    char CPFLeitor[15];
};

void menu();
int cadastrarLeitor();
int buscarLeitor();
int excluirLeitor();
int atualizarLeitor();
int cadastrarLivro();
int buscarLivro();
int excluirLivro();
int fazerEmprestimo();
int devolverEmprestimo();
void consultarEmprestimo();
void tira_quebra(char *v);

int main() {
    int n=0;

    while(1) {
        menu();
        scanf("%d", &n);
        
        switch (n){
            case 1:
                cadastrarLeitor();
                break;
            case 2:
                buscarLeitor();
                break;
            case 3:
                excluirLeitor();
                break;
            case 4:
                atualizarLeitor();
                break;
            case 5:
                cadastrarLivro();
                break;
            case 6:
                buscarLivro();
                break;
            case 7:
                excluirLivro();
                break;
            case 8:
                fazerEmprestimo();
                break;
            case 9:
                devolverEmprestimo();
                break;
            case 10:
                consultarEmprestimo();
                break;
            case 11:
                return 0; //condição de encerramento do programa
                break;
            default:
                printf("Opção inválida, escolha novamente.\n");
                break;
        }
    }
    return 0;
}
void menu() {
    printf("-------------------------------------------------------");
    printf("\n------------------- Bibliotecário ---------------------\n");
    printf("-------------------------------------------------------\n\n"); 
    printf("\tEscolha uma opção digitando seu número:\n\n");
    printf("1 - Cadastrar leitor\n");
    printf("2 - Buscar leitor\n");
    printf("3 - Excluir leitor\n");
    printf("4 - Atualizar dados de leitor\n");
    printf("5 - Cadastrar livro\n");
    printf("6 - Buscar livro\n");
    printf("7 - Excluir livro\n");
    printf("8 - Fazer empréstimo\n");
    printf("9 - Devolver empréstimo\n");
    printf("10 - Consultar empréstimo\n");
    printf("11 - Sair do sistema\n\n");
}

int cadastrarLeitor() {
    char r, ch;
    struct leitor *p;

    FILE * arq;
    arq = fopen("leitores.txt", "a"); //abre arquivo

    if (arq == NULL) { //verifica se o arquivo pode ser aberto
        printf("Erro ao abrir o arquivo (leitores.txt)\n");
        return 2;
    }
    
    do { 
        p = (struct leitor*)malloc(sizeof(struct leitor)); //aloca memória
        
        if (p == NULL) { //verifica se foi possível alocar memória
        printf("Erro ao cadastrar leitor\n");
        return 1;
        }
    
        printf("Insira o nome do leitor: "); // entradas
        while ((ch = getchar()) != '\n');
        fgets(p->nome, 50, stdin);
        tira_quebra(p->nome);
        printf("Insira o CPF do leitor: ");
        fgets(p->CPF, 15, stdin);
        tira_quebra(p->CPF);
        printf("Insira o telefone para contato: ");
        fgets(p->tel, 15, stdin);
        tira_quebra(p->tel);                                                 

        fputs(p->CPF, arq); //Escreve no arquivo
        fprintf(arq, "   ");
        fputs(p->nome, arq);
        fprintf(arq, "   ");
        fputs(p->tel, arq);
        fprintf(arq, "\n");

        fflush(arq);

        printf("\nLeitor cadastrado com sucesso!\nGostaria de realizar novo cadastro?\n");  
        printf("\t1 - Sim\n\t2 - Não\n\n");     //verifica se quer cadastrar novamente
        r = getchar();

        free(p); //libera memória

    } while(r!='2');

    fclose(arq);
}

int cadastrarLivro() {
    char r, ch;
    struct livro *p;

    FILE * arq;
    arq = fopen("livros.txt", "a"); //abre arquivo

    if (arq == NULL) { //verifica se o arquivo pode ser aberto
        printf("Erro ao abrir o arquivo (livros.txt)\n");
        return 2;
    }
    
    do { 
        p = (struct livro*)malloc(sizeof(struct livro)); //aloca memória
        
        if (p == NULL) { //verifica se foi possível alocar memória
        printf("Erro ao cadastrar livro\n");
        return 1;
        }
    
        printf("Insira o código do livro: "); // entradas
        while ((ch = getchar()) != '\n');
        fgets(p->codigo, 10, stdin);
        tira_quebra(p->codigo); 

        printf("Insira o título do livro: ");         
        fgets(p->titulo, 50, stdin);
        tira_quebra(p->titulo);

        printf("Insira o autor do livro: ");
        fgets(p->autor, 50, stdin);
        tira_quebra(p->autor);

        printf("Insira o gênero do livro: ");
        fgets(p->genero, 30, stdin);
        tira_quebra(p->genero);      

                                                       

        fputs(p->codigo, arq); //Escreve no arquivo
        fprintf(arq, "   ");        
        fputs(p->titulo, arq); 
        fprintf(arq, "   ");
        fputs(p->autor, arq);
        fprintf(arq, "   ");
        fputs(p->genero, arq);
        fprintf(arq, "\n");
        
        fflush(arq);

        printf("\nLivro cadastrado com sucesso!\nGostaria de realizar novo cadastro?\n");  
        printf("\t1 - Sim\n\t2 - Não\n\n");     //verifica se quer cadastrar novamente
        r = getchar();

        free(p); //libera memória

    } while(r!='2');

    fclose(arq);
}

int fazerEmprestimo() {
    char r, ch;
    struct emprestimo *p;

    FILE * arq;
    arq = fopen("emprestimos.txt", "a"); //abre arquivo

    if (arq == NULL) { //verifica se o arquivo pode ser aberto
        printf("Erro ao abrir o arquivo (emprestimos.txt)\n");
        return 2;
    }
    
    do { 
        p = (struct emprestimo*)malloc(sizeof(struct emprestimo)); //aloca memória
        
        if (p == NULL) { //verifica se foi possível alocar memória
            printf("Erro ao cadastrar empréstimo\n");
            return 3;
        }
    
        printf("Insira o código do livro: "); // entradas
        while ((ch = getchar()) != '\n');
        fgets(p->codigoLivro, 10, stdin);
        tira_quebra(p->codigoLivro); 

        printf("Insira o CPF do leitor: ");         
        fgets(p->CPFLeitor, 15, stdin);
        tira_quebra(p->CPFLeitor);

        printf("Insira a data de empréstimo: ");
        fgets(p->data, 12, stdin);
        tira_quebra(p->data);      

        printf("Insira a data de devolução: ");
        fgets(p->devolucao, 12, stdin);
        tira_quebra(p->devolucao);                                                             

        fputs(p->codigoLivro, arq); //Escreve no arquivo
        fprintf(arq, "   ");        
        fputs(p->CPFLeitor, arq); 
        fprintf(arq, "   ");
        fputs(p->data, arq);
        fprintf(arq, "   ");
        fputs(p->devolucao, arq);
        fprintf(arq, "   ");
        fprintf(arq, "EMPRESTADO\n");
        
        fflush(arq);

        printf("\nEmpréstimo cadastrado com sucesso!\nGostaria de realizar novo cadastro?\n");  
        printf("\t1 - Sim\n\t2 - Não\n\n");     //verifica se quer cadastrar novamente
        r = getchar();

        free(p); //libera memória

    } while(r!='2');

    fclose(arq);
}

int buscarLeitor() {
    char CPF[12], reg[100];
    FILE * arq;

    printf("\nInsira o CPF do leitor (apenas números, sem caracteres especiais): ");
    scanf("%s", CPF);
    arq = fopen("leitores.txt", "r");

    if (arq == NULL) { //verifica se o arquivo pode ser aberto
        printf("Erro ao abrir o arquivo (leitores.txt)\n");
        return 2;
    }

    do {
        fgets(reg, 100, arq);
        if (strstr(reg, CPF) != NULL) { //checa se tem o CPF de busca na linha
            printf("Leitor encontrado! \n\n%s\n\n\n", reg);
            fclose(arq);
            return 1;
        }
    } while(!feof(arq));

    printf("Leitor não encontrado.\n\n");
    return 0;
}

int buscarLivro(){
    char COD[10], reg[100];
    FILE * arq;

    printf("\nInsira o código do livro (apenas números, sem caracteres especiais): ");
    scanf("%s", COD);
    arq = fopen("livros.txt", "r");

    if (arq == NULL) { //verifica se o arquivo pode ser aberto
        printf("Erro ao abrir o arquivo (livros.txt)\n");
        return 2;
    }

    do {
        fgets(reg, 100, arq);
        if (strstr(reg, COD) != NULL) { //checa se tem o CPF de busca na linha
            printf("Livro encontrado! \n\n%s\n\n\n", reg);
            fclose(arq);
            return 1;
        }
    } while(!feof(arq));

    printf("Livro não encontrado.\n\n");
    return 0;
}

int excluirLeitor() {
    char CPF[12];
    char * reg;
    FILE * arq; 
    FILE * aux;


    printf("\nInsira o CPF do leitor (apenas números, sem caracteres especiais): ");
    scanf("%s", CPF);
    
    aux = fopen("auxiliar.txt", "w"); //abre arquivo
    arq = fopen("leitores.txt", "r"); //abre arquivo
    if (arq == NULL) { //verifica se o arquivo pode ser aberto
        printf("Erro ao abrir o arquivo (leitores.txt)\n");
        return 2;
    }

    do {
        reg = (char*)malloc(100*sizeof(char)); //aloca memória

        if (reg == NULL) { //verifica se foi possível alocar memória
            printf("Erro na alocação de memória\n\n");
            return 2;
        }

        fgets(reg, 100, arq);
        if (strstr(reg, CPF) == NULL && strcmp(reg, "\n") != 0) { //checa se tem o CPF de busca na linha e se não é só \n
            fputs(reg, aux);
        }
        
        free(reg); //libera memória para não duplicar registros

    } while(!feof(arq));

    fclose(arq);
    fclose(aux);

    arq = fopen("leitores.txt", "w");
    aux = fopen("auxiliar.txt", "r");
    if (aux == NULL) { //verifica se o arquivo pode ser aberto
        printf("Erro ao abrir o arquivo (auxiliar.txt)\n");
        return 2;
    }

    do {
        reg = (char*)malloc(100*sizeof(char)); //aloca memória

        if (reg == NULL) { //verifica se foi possível alocar memória
            printf("Erro na alocação de memória\n\n");
            return 2;
        }

        if(strcmp(reg, "\n") != 0) { //checa se não é só \n
            fgets(reg, 100, aux);
            fputs(reg, arq);
        }
        free(reg); //libera memória para não duplicar registros

    } while(!feof(aux));
    
    printf("\nLeitor excluido com sucesso.\n\n");
    
    fclose(arq);
    fclose(aux);
    
    return 0;
}

void consultarEmprestimo()
{
    const int max_size = 50;

    char *nome_consulta;
    nome_consulta = (char*) calloc(max_size, sizeof(char));

    if(nome_consulta == NULL){
        puts("Memória Insuficiente");
        exit(-2);
    } 

    puts("Insira o código do livro");
    scanf("%s", nome_consulta);
    getchar();

    // precisa ter o tamanho da string + 1 para adicionar o '\0' no final
    char* codigo = calloc(strlen(nome_consulta)+1, sizeof(char));

    if(codigo == NULL){
        puts("Memória Insuficiente\n\n");
        exit(-2);
    } 

    FILE *arq = fopen("emprestimos.txt", "r");

    if(arq == NULL){
        puts("Erro ao ler o arquivo\n");
        puts("Tente novamamente mais tarde\n\n");
        exit(-1);
    }

    char linha[max_size*3];
    unsigned int linha_numero = 0;

    // lê a cada linha do arquivo
    while (fgets(linha, sizeof(linha), arq)) {
        // coloca o código do livro do arquivo na variavel
        // para comparar depois com o inserido
        for(int i = 0; i < strlen(nome_consulta); i++){
            codigo[i] = linha[i];
        }
        codigo[strlen(nome_consulta)] = '\0';

        if(strstr(codigo, nome_consulta)){
            printf("\n\nEmprestimo encontrado: \n");
            printf("%s\n\n", linha);
            if (linha[strlen(linha) - 1] != '\n')
                printf("\n");
        }
    }

    fclose(arq);
    free(nome_consulta);
    free(codigo);

}

int excluirLivro () {
    char COD[10];
    char * reg;
    FILE * arq; 
    FILE * aux;


    printf("\nInsira o código do livro (apenas números, sem caracteres especiais): ");
    scanf("%s", COD);
    
    aux = fopen("auxiliar.txt", "w"); //abre arquivo
    arq = fopen("livros.txt", "r"); //abre arquivo
    if (arq == NULL) { //verifica se o arquivo pode ser aberto
        printf("Erro ao abrir o arquivo (livros.txt)\n");
        return 2;
    }

    do {
        reg = (char*)malloc(100*sizeof(char)); //aloca memória

        if (reg == NULL) { //verifica se foi possível alocar memória
            printf("Erro na alocação de memória. Tente novamente mais tarde.\n\n");
            return 2;
        }

        fgets(reg, 100, arq);
        if (strstr(reg, COD) == NULL && strcmp(reg, "\n") != 0) { //checa se tem o CPF de busca na linha e se não é só \n
            fputs(reg, aux);
        }
        
        free(reg); //libera memória para não duplicar registros

    } while(!feof(arq));

    fclose(arq);
    fclose(aux);

    arq = fopen("livros.txt", "w");
    aux = fopen("auxiliar.txt", "r");
    if (aux == NULL) { //verifica se o arquivo pode ser aberto
        printf("Erro ao abrir o arquivo (auxiliar.txt)\n");
        return 2;
    }

    do {
        reg = (char*)malloc(100*sizeof(char)); //aloca memória

        if (reg == NULL) { //verifica se foi possível alocar memória
            printf("Erro na alocação de memória\n\n");
            return 2;
        }

        if(strcmp(reg, "\n") != 0) { //checa se não é só \n
            fgets(reg, 100, aux);
            fputs(reg, arq);
        }
        free(reg); //libera memória para não duplicar registros

    } while(!feof(aux));
    
    printf("\nLivro excluido com sucesso.\n\n");
    
    fclose(arq);
    fclose(aux);
    
}

int atualizarLeitor() {
    char ch, CPF[12];
    char * reg;
    FILE * arq; 
    FILE * aux;
    struct leitor * p;


    printf("\nInsira o CPF do leitor a ter os dados atualizados (apenas números, sem caracteres especiais): ");
    scanf("%s", CPF);
    
    aux = fopen("auxiliar.txt", "w"); //abre arquivo
    arq = fopen("leitores.txt", "r"); //abre arquivo
    if (arq == NULL) { //verifica se o arquivo pode ser aberto
        printf("Erro ao abrir o arquivo (leitores.txt)\n");
        return 2;
    }

    do {
        reg = (char*)malloc(100*sizeof(char)); //aloca memória

        if (reg == NULL) { //verifica se foi possível alocar memória
            printf("Erro na alocação de memória\n\n");
            return 2;
        }

        fgets(reg, 100, arq);
        if (strstr(reg, CPF) == NULL && strcmp(reg, "\n") != 0) { //checa se tem o CPF de busca na linha e se não é só \n
            fputs(reg, aux);
        }
        else { 
            if (strcmp(reg, "\n") != 0) { //caso seja a linha na qual está o que vai ser mudado e não seja apenas uma linha vazia
                p = (struct leitor*)malloc(sizeof(struct leitor)); //aloca memória
                
                printf("Insira o nome do leitor: "); // entradas
                while ((ch = getchar()) != '\n');
                fgets(p->nome, 50, stdin);
                tira_quebra(p->nome);
                printf("Insira o CPF do leitor: ");
                fgets(p->CPF, 15, stdin);
                tira_quebra(p->CPF);
                printf("Insira o telefone para contato: ");
                fgets(p->tel, 15, stdin);
                tira_quebra(p->tel);                                                 

                fputs(p->CPF, aux); //Escreve no arquivo
                fprintf(aux, "   ");
                fputs(p->nome, aux);
                fprintf(aux, "   ");
                fputs(p->tel, aux);
                fprintf(aux, "\n");

                free(p); //libera a memória
            }
        }
        free(reg); //libera memória para não duplicar registros

    } while(!feof(arq));

    fclose(arq);
    fclose(aux);

    arq = fopen("leitores.txt", "w");
    aux = fopen("auxiliar.txt", "r");
    if (aux == NULL) { //verifica se o arquivo pode ser aberto
        printf("Erro ao abrir o arquivo (auxiliar.txt)\n");
        return 2;
    }

    do {
        reg = (char*)malloc(100*sizeof(char)); //aloca memória

        if (reg == NULL) { //verifica se foi possível alocar memória
            printf("Erro na alocação de memória\n\n");
            return 2;
        }

        if(strcmp(reg, "\n") != 0) { //checa se não é só \n
            fgets(reg, 100, aux);
            fputs(reg, arq);
        }
        free(reg); //libera memória para não duplicar registros

    } while(!feof(aux));

    fclose(arq);
    fclose(aux);

    printf("Dados atualizados com sucesso!\n\n");
    return 0;
}

int devolverEmprestimo() {
    char COD[10];
    char * reg;
    FILE * arq; 
    FILE * aux;


    printf("\nInsira o código do livro emprestado (apenas números, sem caracteres especiais): ");
    scanf("%s", COD);
    
    aux = fopen("auxiliar.txt", "w"); //abre arquivo
    arq = fopen("emprestimos.txt", "r"); //abre arquivo
    if (arq == NULL) { //verifica se o arquivo pode ser aberto
        printf("Erro ao abrir o arquivo (emprestimos.txt)\n");
        return 2;
    }

    do {
        reg = (char*)malloc(100*sizeof(char)); //aloca memória

        if (reg == NULL) { //verifica se foi possível alocar memória
            printf("Erro na alocação de memória\n\n");
            return 2;
        }

        fgets(reg, 100, arq);
        if (strstr(reg, COD) == NULL && strcmp(reg, "\n") != 0) { //checa se tem o CPF de busca na linha e se não é só \n
            fputs(reg, aux);
        }
        else { 
            if (strcmp(reg, "\n") != 0) { //caso seja a linha na qual está o que vai ser mudado e não seja apenas uma linha vazia
                int n = (strlen(reg) - 11); //recebe o número do índice no qual começa a palavra "EMPRESTADO"
                reg[n] = 'D';
                reg[n+1] = 'E';
                reg[n+2] = 'V';
                reg[n+3] = 'O';
                reg[n+4] = 'L';
                reg[n+5] = 'V';
                reg[n+6] = 'I';
                reg[n+7] = 'D';
                reg[n+8] = 'O';
                reg[n+9] = '\n';
                reg[n+10] = '\0';
                fputs(reg, aux);
            }
        }
        free(reg); //libera memória para não duplicar registros

    } while(!feof(arq));

    fclose(arq);
    fclose(aux);

    arq = fopen("emprestimos.txt", "w");
    aux = fopen("auxiliar.txt", "r");
    if (aux == NULL) { //verifica se o arquivo pode ser aberto
        printf("Erro ao abrir o arquivo (auxiliar.txt)\n");
        return 2;
    }

    do {
        reg = (char*)malloc(100*sizeof(char)); //aloca memória

        if (reg == NULL) { //verifica se foi possível alocar memória
            printf("Erro na alocação de memória\n\n");
            return 2;
        }

        if(strcmp(reg, "\n") != 0) { //checa se não é só \n
            fgets(reg, 100, aux);
            fputs(reg, arq);
        }
        free(reg); //libera memória para não duplicar registros

    } while(!feof(aux));

    fclose(arq);
    fclose(aux);

    printf("Devolução realizada com sucesso!\n\n");
    return 0;
}

void tira_quebra(char *v) { //Função que tira quebra de linha de strings
    int n;
    n = strlen(v) - 1;
    v[n] = '\0';
}