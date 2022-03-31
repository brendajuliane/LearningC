#include <stdio.h>
#include <string.h>
//programa que recebe o título de um arquivo e imprime na tela o conteúdo do mesmo

int main() {
    FILE *arq;
    char titulo[30], caractere;
    int i;

    printf("Insira o nome do arquivo incluindo sua extensão (.txt):\n");
    fgets(titulo, 30, stdin); //entrada
    
    i = strlen(titulo) - 1; //tira a quebra de linha
    titulo[i] = '\0';

    arq = fopen(titulo, "r");

    if (arq == NULL) {  //checa se o arquivo pode ser aberto
        printf("Erro ao abrir o arquivo\n");
        return 0;
    }

    while(!feof(arq)) { //lê e printa na tela caractere por caractere
        fscanf(arq, "%c", &caractere);
        printf("%c", caractere);
    }
    printf("\n");
    fclose(arq); //fecha arquivo
    
    return 0;
}