#include <stdio.h> 
#include <math.h>
//Cálcula a distância entre dois pontos e diz se são iguais ou não

int main () {
    double dist; 
    struct ponto {
        double x;
        double y;
    } p1, p2;

    scanf("%lf %lf", &p1.x, &p1.y);
    scanf("%lf %lf", &p2.x, &p2.y);
    dist = sqrt(pow((p1.x-p2.x), 2) + pow((p1.y-p2.y), 2)); //Cálcula a distância

    if (dist < 0.0000001)  
        printf("os pontos sao iguais\n");
    else 
        printf("os pontos nao sao iguais\n");
    
    return 0;
}