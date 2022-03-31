#include <stdio.h> //fala qual foi o lucro e quanidade de produtos vendidos

int main() {
    int quant[10]; // recebe em um vetor a quantidade de um produto vendido e no outro o valor da unidade
    int i, q, qt=0;
    float valor[10];
    float m, lucro=0;

    for (i=0; i<10; ++i) {
        scanf("%d", &q);
        quant[i] = q;
        qt += q; //qt -> quant. total de produtos vendidos
    }
    for (i=0; i<10; ++i)
        scanf("%f", &valor[i]);

    for (i=0; i<10; ++i) { 
        m = quant[i] * valor[i];
        lucro += m; //lucro -> soma dos produtos da quantidade pelo valor de cada produto
    }
    printf("o lucro foi de %.3f e a quantidade de produtos vendidos foi de %d\n", lucro, qt);

    return 0;
}