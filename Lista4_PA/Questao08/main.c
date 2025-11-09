#include <stdio.h>

long long int fatorial(int n){
    long long resultado = 1;
    int base = n;

    for(int i=0; i<n; i++){
        resultado*=base - i;
    }

    return resultado;
}


long long int calculaCombinacoes(int n, int p){
    long long int resultado = 1;

    for(int i = n - p + 1; i<=n; i++){
        resultado*=i;
    }
    resultado/=fatorial(p);

    return resultado;
}

int main(){
    int n, p, resultado = 0;

    printf("Entre com n: ");
    scanf("%d", &n);
    printf("Entre com p: ");
    scanf("%d", &p);

    resultado = calculaCombinacoes(n, p);

    printf("O resultado: %d", resultado);

    return 0;
}