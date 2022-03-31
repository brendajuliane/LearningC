#include <stdio.h> //programa que diz se uma palarvra é um palindromo
#include <string.h>
#include <stdlib.h>
#include <ctype.h> //biblioteca para a função tolower

int main () {
    char palavra[30];
    char inversa[30];
    int i, n = 1;

    fgets(palavra, 30, stdin);
    palavra[strlen(palavra)-1] = '\0'; //tirar o \n

    for (i=0; palavra[i] != '\0'; i++){ //Para trasnformar os caracteres em minúsculo (com tolower)
        palavra[i] = tolower(palavra[i]);
    }

    for(i=0; palavra[i] != '\0'; i++) { //copiar o vetor palavra de forma invertida no vetor inversa
        inversa[strlen(palavra)-n] = palavra[i]; 
        n++;
    }
    inversa[i] = '\0'; //inclui o \0 na inversa

    if (strcmp(inversa, palavra) == 0) //compara as strings
        printf("Esta palavra e um palindromo\n");
    else 
        printf("Esta palavra nao e um palindromo\n");

    return 0;
}