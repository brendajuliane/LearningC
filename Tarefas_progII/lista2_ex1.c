#include <stdio.h>
//programa que conta a quantidade de caracteres de um arquivo (sem os espaços) e 
//escreve este na ultima linha do aqruivo

int main() {
    FILE *arq;
    int cont=0;
    char c;

    arq = fopen("arquivo_base.txt", "r+"); //abrindo arquivo
    
    if (arq == NULL) {  //checa se o arquivo pode ser aberto
        printf("Erro ao abrir o arquivo\n");
        return 0;
    }

    while(!feof(arq)) { //faz a contagem
        c = fgetc(arq);
        if (c!=' ' && c!='\n' && c!=EOF) //verifica se não é espaço ou quebra de linha
            cont++; 
    }
    
    fprintf(arq, " %d", cont); //escreve a contagem no arquivo
    fclose(arq);  //fecha arquivo
    
    return 0;
}