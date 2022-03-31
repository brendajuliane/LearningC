#include <stdio.h>

int main() {
    typedef struct coordenadas {
        int x;
        int y;
    } ponto;
    struct retangulo {
        ponto infe;
        ponto supd;
    } ret1, ret2;

    scanf("%d %d", &ret1.infe.x, &ret1.infe.y); //coordenadas do primeiro retângulo
    scanf("%d %d", &ret1.supd.x, &ret1.supd.y);
    scanf("%d %d", &ret2.infe.x, &ret2.infe.y); //coordenadas do segundo retângulo
    scanf("%d %d", &ret2.supd.x, &ret2.supd.y);

    if ((ret1.infe.x <= ret2.infe.x) && (ret2.infe.x <= ret1.supd.x) && (ret1.infe.x <= ret2.supd.x) && (ret2.supd.x <= ret1.supd.x)) {
        if ((ret1.infe.y <= ret2.infe.y) && (ret2.infe.y <= ret1.supd.y) && (ret1.infe.y <= ret2.supd.y) && (ret2.supd.y <= ret1.supd.y))  
            printf("o segundo retangulo esta contido no primeiro\n"); 
        else 
            printf("o segundo retangulo nao esta contido no primeiro\n");
    }
    else {
        printf("o segundo retangulo nao esta contido no primeiro\n");
    }

    return 0;
}