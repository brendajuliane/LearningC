#include <stdio.h>
#include <string.h>
//programa que lê um número e imprime na ordem inversa (12 -> 21)

void tira_quebra(char* v);

int main() {
    char n[12];
    int i;

    printf("Digite um número: ");  
    fgets(n, 12, stdin);  //entrada
    i = strlen(n) - 1; 
    n[i] = '\0'; //tira a quebra de linha

    printf("O número invertido é: ");
    for(--i; i>=0; i--) { //printa invertido
        printf("%c", n[i]);
    }
    printf("\n");

    return 0;
}