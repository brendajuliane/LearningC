#include <stdio.h>
//programa possui um menu para escolher determinados itens e pode dar descontos nos itens dependendo de sua classificação

void repete(char* r);

int main() {
    int n;
    char r;

    do{
        printf("MENU\n");
        printf("1- Dipirona (R$10,00)\n"); //menu
        printf("2- Arroz 1kg (R$5,00)\n");
        printf("3- Feijão 1kg (R$8,00)\n");
        printf("4- Desodorante (R$15,00)\n");
        printf("5- Boneca (R$30,00)\n");
        printf("6- Lâmpada (R$10,00)\n");
        printf("\nDigite o número do item que você quer dentre as opções acima: ");
        scanf("%d", &n);
        
        switch(n){
            case 1:
                printf("Remédios estão com desconto de 30 por cento, preço final é R$%.2f\n", 7.00);
                repete(&r);
                break;
            case 2:
                printf("Alimentos com desconto de 15 por cento, preço final é R$%.2f\n", 5*0.85);
                repete(&r);
                break;
            case 3:
                printf("Produto indisponível. Gostaria de refazer a escolha? (s/n): ");
                scanf("\n%c", &r); //produto indisponível
                break;
            case 4:
                printf("Itens de perfumaria têm desconto de 10 por cento, preço final é R$%.2f\n", 15*0.9);
                repete(&r);
                break;
            case 5:
                printf("Brinquedos estão com desconto de 7 por cento, preço final é R$%.2f\n", 30*0.93);
                repete(&r);
                break;
            case 6:
                printf("Produto sem desconto, preço final é R$10,00\n");
                repete(&r);
                break;
            default:
                printf("Opção inválida. ");
                repete(&r);
                break;
        }
        printf("\n");
    } while(r!='n');
    return 0;
}
void repete(char* s){ //função que verifica se quer refazer escolha
    printf("Gostaria de escolher novamente? (s/n): ");
    scanf("\n%c", s);
}