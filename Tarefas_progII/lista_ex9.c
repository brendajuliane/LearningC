#include <stdio.h>
//Programa que lê um preço e imprime o número total de notas (em 1, 5, 10, 50 e 100) necessárias para sacar

int main() {
    int num, n_um=0, n_cinco=0, n_dez=0, n_cinquenta=0, n_cem=0;
    
    printf("Digite o valor que será sacado do caixa: "); 
    scanf("%d", &num); //entrada 

    if(num>0) { //verifica se num é positivo

        while(num>=100) {  //cada while faz a contagem de quantas notas de cada tipo são necessárias
            n_cem = num/100;
            num = num%100;
        }
        while(num>=50) {
            n_cinquenta = num/50;
            num = num%50;
        }
        while(num>=10) {
            n_dez = num/10;
            num = num%10;
        }
        while(num>=5) {
            n_cinco = num/5;
            num = num%5;
        }
        while(num>=1) {
            n_um = num/1;
            num = num%1;
        }   
        //saídas
        printf("%d nota(s) de R$ 100,00\n", n_cem); 
        printf("%d nota(s) de R$ 50,00\n", n_cinquenta);
        printf("%d nota(s) de R$ 10,00\n", n_dez);
        printf("%d nota(s) de R$ 5,00\n", n_cinco);
        printf("%d nota(s) de R$ 1,00\n", n_um);
    }
    else {
        printf("Número inválido\n");
    }
    return 0;
}