#include <stdio.h> //programa que recebe entrada para dois vetores e printa na tela seus valores intercalados

int main() {
    int v1[10], v2[10];
    int n;

    for (n=0; n<10; ++n)
        scanf("%d", &v1[n]);

    for (n=0; n<10; ++n)
        scanf("%d", &v2[n]);

    for (n=0; n<10; ++n) { //para printar os valores dos vetores de forma intercalada
        printf("%d|", v1[n]);
        printf("%d|", v2[n]);
    }
    printf("\n"); 

    return 0;
}