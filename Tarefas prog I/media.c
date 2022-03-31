#include <stdio.h> //calcula média geométrica ou aritmética;
#include <math.h>

float media(char c, float n1, float n2);

int main() {
    char c;
    float n1, n2, m;
    
    scanf("%c", &c);
    scanf("%f %f", &n1, &n2);
    m = media(c, n1, n2);
    printf("%.3f\n", m);

    return 0;
}

float media(char c, float n1, float n2) {
    float media = 0;
    if (c == 'A') 
        media = (n1 + n2)/2;
    else
        media = sqrt(n1*n2);
    return media;
}