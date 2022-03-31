#include <stdio.h> //Recebe dados de um aluno e printa RA, nome e média
#include <stdlib.h>
#include <string.h>

void tira_quebra(char *v);

int main() {
    int n, i=0;
    char ch;
    typedef struct estudante {
        char nome[110];
        int ra;
        float p1;
        float p2;
        float media;
    } aluno;
    scanf("%d", &n);

    aluno *v;
    v = (aluno*)malloc(n*sizeof(aluno)); //alocaão dinâmica

    for(i=0; i<n; i++) { //Armazena os dados
        while ((ch = getchar()) != '\n');
        fgets(v[i].nome, 110, stdin);
        tira_quebra(v[i].nome);
        scanf("%d", &v[i].ra);
        scanf("%f", &v[i].p1);
        scanf("%f", &v[i].p2);
    }
    for(i=0; i<n; i++) { //calcula a média
        v[i].media = (v[i].p1 + v[i].p2)/2;
    }
    for(i=0; i<n; i++) {
        printf("%d\t%s\t%.2f\n", v[i].ra, v[i].nome, v[i].media);
    }

    return 0;
}
void tira_quebra(char *v) {
    int n;
    n = strlen(v) - 1;
    v[n] = '\0';
}