#include <stdio.h> //programa que resolve uma expressão a partir de valores fornecidos pelo usuário

int main() {
    int n, s, ns;
    int resultn, results, resultns;
    scanf("%d", &n);
    scanf("%d", &s);
    ns = n - s;
    resultn = 1;
    results = 1;
    resultns = 1;

    while (n > 1) { //cálculo fatorial de n
        resultn *= n--;
    }    
    while (s > 1) { //calculo fatorial de s
        results *= s--;         
    }
    while (ns > 1) {
        resultns *= ns--; //cálculo fatorial de n-s
    }
    
    int conta; //expressão 
    conta = resultn/(results*resultns);
    
    printf("%d\n", conta); 
    return 0;
}