#include <stdio.h>  //programa que lê uma palavra e imprime invertida
#include <string.h>

int main() {
    char palavra[80];
    int n;

    fgets(palavra, 80, stdin);
    n = strlen(palavra) - 1;
    palavra[n] = '\0'; //tirando o \n

    for(--n; n >= 0; n--) {
        printf("%c", palavra[n]);
    }
    printf("\n");

    return 0;
}