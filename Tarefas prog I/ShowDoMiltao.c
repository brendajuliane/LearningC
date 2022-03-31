#include <stdio.h> //Prepare-se para o Show do Miltão! Programa que funciona como um quiz
#include <string.h>

void tira_quebra(char *v); //tira o \n

int main() {
    typedef struct pint { //perguntas tipo int
        char pergunta[110];
        int alter[3];
        int resp;     
    } quest_int;

    typedef struct ploat { //perguntas tipo float
        char pergunta[110];
        float alter[3];
        int resp;
    } quest_float;

    quest_int qint[5];
    quest_float qfloat[5]; 
    char tipo_resposta[8];
    int i=0, f=0, np=0, res=0;

    //Entrada de perguntas
    scanf("%s\n", tipo_resposta);

    while(strcmp(tipo_resposta, "FIM") != 0) {   //pede as questões    
        if (strcmp(tipo_resposta, "INT") == 0) {
            fgets(qint[i].pergunta, 110, stdin); //pergunta
            tira_quebra(qint[i].pergunta);
            scanf("%d %d %d\n", &qint[i].alter[0], &qint[i].alter[1], &qint[i].alter[2]); //alternativas
            scanf("%d\n", &qint[i].resp); //resposta correta
            i++;
        }
        else {
            fgets(qfloat[f].pergunta, 110, stdin); //pergunta
            tira_quebra(qfloat[f].pergunta);
            scanf("%f %f %f\n", &qfloat[f].alter[0], &qfloat[f].alter[1], &qfloat[f].alter[2]); //alternativas
            scanf("%d\n", &qfloat[f].resp); //resposta correta
            f++;
        }
        fgets(tipo_resposta, 8, stdin);
        tira_quebra(tipo_resposta);
    }

     //Inicio do jogo
    printf("Prepare-se para o Show do Miltao!\n");    
    scanf("%s", tipo_resposta); 
    
    while(strcmp(tipo_resposta, "FIM") != 0) {
        scanf("%d", &np); //numero da pergunta
        
        if (strcmp(tipo_resposta, "INT") == 0) {
            printf("Pergunta: ");
            puts(qint[np].pergunta);
            printf("Alternativa 0: %d\n", qint[np].alter[0]);
            printf("Alternativa 1: %d\n", qint[np].alter[1]);
            printf("Alternativa 2: %d\n", qint[np].alter[2]);
            scanf("%d", &res); 

            if(res == qint[np].resp) {
                printf("Parabens, voce acertou!\n");
            }
            else {  
                printf("Resposta errada, voce perdeu!\n");
                return 0;
            }
        }
        else {
            printf("Pergunta: ");
            puts(qfloat[np].pergunta);
            printf("Alternativa 0: %.2f\n", qfloat[np].alter[0]);
            printf("Alternativa 1: %.2f\n", qfloat[np].alter[1]);
            printf("Alternativa 2: %.2f\n", qfloat[np].alter[2]);
            scanf("%d", &res); 

            if(res == qfloat[np].resp) {
                printf("Parabens, voce acertou!\n");
            }
            else {  
                printf("Resposta errada, voce perdeu!\n");
                return 0;
            }
        }
        scanf("%s", tipo_resposta);
    }
    return 0;
}
void tira_quebra(char *v) {
    int n;
    n = strlen(v) - 1;
    v[n] = '\0';
}