#include <stdio.h>
// programa que mostra quantas linhas um arquivo possui

int main() {
    FILE *arq;
    int cont=0;
    char c;

    arq = fopen("arquivo_linhas.txt", "r"); //abrindo arquivo
    
    if (arq == NULL) {  //checa se o arquivo pode ser aberto
        printf("Erro ao abrir o arquivo\n");
        return 0;
    }

    while(!feof(arq)) { //faz a contagem
        c = fgetc(arq);
        if (c=='\n') //verifica se é quebra de linha
            cont++; 
    }
    
    printf("Há %d linhas no arquivo\n", ++cont); //adiciona mais 1 pois na última linha não há \n
    fclose(arq); 

    return 0;
}