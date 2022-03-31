#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
//programa que recebe um título e um texto do usuário e cria um arquivo que tenha como nome o título e grave nesse arquivo o texto.

int main() {
    FILE *arq; 
    char *txt;
    int i;

    txt = (char *) malloc(102*sizeof(char)); //aloca memória para o vetor
    printf("Insira o título:\n");
    fgets(txt, 102, stdin);

    i = strlen(txt) - 1; //tira a quebra de linha
    txt[i] = '\0'; 
    strcat(txt, ".txt\0"); //adiciona .txt

    arq = fopen(txt, "w"); //abrindo arquivo

    free(txt); //libera o que tem na variável
    txt = (char *) malloc(1000*sizeof(char)); //aloca memória para o vetor
    printf("Insira o texto:\n");
    fgets(txt, 1000, stdin);
    
    fputs(txt, arq); //escreve no arquivo
    
    free(txt);
    fclose(arq); //fecha o arquivo

    return 0;
}