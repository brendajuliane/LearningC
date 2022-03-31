#include <stdio.h> //Trabalho 03: "A lambança de Serv Idor"
#include <math.h>

int main() {
    int FC, t, l, c, p=0; //fc - fator de correção; t - tamanho da matriz
    float S=0, sub=0;
    float soma[10], MA[10], DP[10]; 
    int m_original[10][10];
    int m_corrigida[10][10];
    int m_posicoes[10][10];

    scanf("%d", &t);
    scanf("%d", &FC);
    
    for (l=0; l<t; l++) { //recebe a matriz original
        for(c=0; c<t; c++) {
            scanf("%d", &m_original[l][c]);
        }
    }
    for (l=0; l<t; l++) { //recebe a matriz de correção
        for(c=0; c<t; c++) {
            scanf("%d", &m_posicoes[l][c]);
        }
    }
    
    //processamento
    for (l=0; l<t; l++) { //multiplica os elementos por FC
        for(c=0; c<t; c++) {
            m_original[l][c] *= FC;
        }
    }    
    for (c=0; c<t; c++) { //coloca as posições no lugar certo 
        for(l=0; l<t; l++) {
            p = m_posicoes[l][c];
            m_corrigida[c][l] = m_original[c][p]; 
        }
    }
    for(c=0; c<t; c++) { //soma dos valores das colunas
        for(l=0; l<t; l++) {
            S += m_corrigida[l][c];
        }
        soma[c] = S;
        S = 0;
    }
    for(c=0; c<t; c++) { //calcula a média
        MA[c] = soma[c]/t;
    }
    for(c=0; c<t; c++) { //calcula desvio padrão
        for(l=0; l<t; l++) {
            sub += pow((m_corrigida[l][c] - MA[c]), 2);
        }
        DP[c] = sqrt(sub/t);
        sub = 0;
    } 
    

    //saídas
    printf("Matriz corrigida\n");
    for(l=0; l<t; l++) {
        for(c=0; c<t; c++) {
            printf("%d\t", m_corrigida[l][c]);
        }
        printf("\n");
    }
    printf("Somas::");
    for(c=0; c<t; c++){
        printf("%.2f\t", soma[c]);
    }
    printf("\nMedias::");
    for(c=0; c<t; c++){
        printf("%.2f\t", MA[c]);
    }
    printf("\nDesvios::");
    for(c=0; c<t; c++){
        printf("%.2f\t", DP[c]);
    }
    printf("\n");
    
    return 0;
}