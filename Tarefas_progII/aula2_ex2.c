#include <stdio.h> 
//programa que lê um caractere e diz seu valor correspondente na tabela ASCII

int main() {
    char ch;

    //entrada
    printf("Digite um caracter: ");
    scanf("%c", &ch);
    
    //saída
    printf("O valor numérico (ASCII) de %c é %d\n", ch, ch);

    return 0;
}