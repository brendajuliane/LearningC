#include <stdio.h>
#include <string.h>
//Programa que lê um número inteiro positivo e o imprime em algarismos romanos

int main() {
    char n[7];
    int i;

    printf("Digite um número maior que 0 e menor que 4000:\n");
    fgets(n, 7, stdin); //entrada
    
    i = strlen(n) - 1; 
    n[i] = '\0'; //tira a quebra de linha
    i = strlen(n); //recebe o tamanho do número

    switch(i) { //ordena a string de forma a ficar com zeros a esquerda se não for um número de milhar (Ex.: 10 -> 0010)
        case 4:
            break;
        case 3:
            n[4]='\0';
            n[3]= n[2];
            n[2]= n[1];
            n[1]= n[0];
            n[0]= 0;
            break;
        case 2:
            n[4]='\0';
            n[3]= n[1];
            n[2]= n[0];
            n[1]= 0;
            n[0]= 0;
            break;
        case 1:
            n[4]='\0';
            n[3]= n[0];
            n[2]= 0;
            n[1]= 0;
            n[0]= 0;
            break;
        default:
            printf("Número inválido\n");
            return 0;
    }
    printf("Esse número em algarismos romanos é:\n");

    switch(n[0]){ //para imprimir casa do milhar
        case '0':
            break;
        case '1':
            printf("M");
            break;
        case '2':
            printf("MM");
            break;
        case '3':
            printf("MMM");
            break;
        default:
            break;
    }

    switch(n[1]){ //para imprimir casa da centena
        case '0':
            break;
        case '1':
            printf("C");
            break;
        case '2':
            printf("CC");
            break;
        case '3':
            printf("CCC");
            break;
        case '4':
            printf("CD");
            break;
        case '5':
            printf("D");
            break;
        case '6':
            printf("DC");
            break;
        case '7':
            printf("DCC");
            break;
        case '8':
            printf("DCCC");
            break;
        case '9':
            printf("CM");
            break;
        default:
            break;
        }

        switch(n[2]){ //para imprimir casa da dezena
        case '0':
            break;
        case '1':
            printf("X");
            break;
        case '2':
            printf("XX");
            break;
        case '3':
            printf("XXX");
            break;
        case '4':
            printf("XL");
            break;
        case '5':
            printf("L");
            break;
        case '6':
            printf("LX");
            break;
        case '7':
            printf("LXX");
            break;
        case '8':
            printf("LXXX");
            break;
        case '9':
            printf("XC");
            break;
        default:
            break;
        }

        switch(n[3]){ //para imprimir casa da unidade
        case '0':
            break;
        case '1':
            printf("I");
            break;
        case '2':
            printf("II");
            break;
        case '3':
            printf("III");
            break;
        case '4':
            printf("IV");
            break;
        case '5':
            printf("V");
            break;
        case '6':
            printf("VI");
            break;
        case '7':
            printf("VII");
            break;
        case '8':
            printf("VIII");
            break;
        case '9':
            printf("IX");
            break;
        default:
            break;
        }

    printf("\n");
    return 0;
}