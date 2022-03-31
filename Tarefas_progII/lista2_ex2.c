#include <stdio.h>
//programa que faz a contagem de quantas vogais tem no arquivo e exibe o valor na tela

int main() {
    FILE *arq;
    int cont=0;
    char c;

    arq = fopen("arquivo_base.txt", "r"); //abrindo arquivo
    
    if (arq == NULL) {  //checa se o arquivo pode ser aberto
        printf("Erro ao abrir o arquivo\n");
        return 0;
    }

    while(!feof(arq)) { //faz a contagem
        c = fgetc(arq);
        if (c =='a' || c =='e' || c =='i' || c =='o' || c =='u' || c =='A' || c =='E' || c =='I' || c =='O' || c =='U') //verifica se são vogais
            cont++; 
    }
    
    printf("Há %d vogais no arquivo\n", cont);
    fclose(arq);

    return 0;
}