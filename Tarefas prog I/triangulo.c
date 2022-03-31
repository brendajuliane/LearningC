#include <stdio.h> //programa que imprime um trianguço de floyd em versão binária

int main() {
    int c, n, l, qc;
    scanf("%d", &n);
    qc = 0;

    for (l=1; l<=n; ++l) { //este for refere-se as linhas
        
        if(l % 2 == 0) { //os for em if e else referem-se a quantidade de caracteres na linha
            for (c=1; c<=l; ++c) {
                printf("%c", '0');
                qc++; //para saber quantos caracteres foram usados (no total)
            }
        }
        else {
            for (c=1; c<=l; ++c) {
                printf("%c", '1');
                qc++;
            }
            printf("=%d", --c); //para printar junto a linha a soma dos 1s pertencentes a essa linha
        }

        printf("\n"); 
    }
    printf("%d\n", qc);
    return 0;
}