#include<stdio.h>
int main()
{
    int a, s, i;
    scanf("%d", &a);
    s = 100;
    i = 19;
    do {
        s -= i;
        i -= 2;
    } while (s < a);
    printf("%d\n", s);
    return 0;
}