#include <stdio.h> 
//Programa que lê e escreve: um inteiro, um número real, um caracter e uma string

int main() {
    //declaração de variáveis
    int num;
    float num_real;
    char ch, c, strg[32];

    //lê as entradas 
    printf("Digite um número inteiro: ");
    scanf("%d", &num);  

    printf("Digite um número real: ");
    scanf("%f", &num_real);


    printf("Digite um caracter: ");
    scanf(" %c", &ch);
    while ((c = getchar()) != '\n'); //para limpar o buffer

    printf("Digite frase ou palavra de até 30 caracteres: ");
    fgets(strg, 32, stdin);

    //imprime as saídas
    printf("O número inteiro e real são, respectivamente, %d e %f\n", num, num_real);
    printf("O caractere é %c\n", ch);
    printf("A palavra ou frase é: %s", strg);

    return 0;
}
