#include <stdio.h>

long long int calcularArranjo(int n, int p){
    long long resultado = 1;
    for(int i=(n - p + 1); i<=n; i++){
        resultado *= i;
    }
    return resultado;
}

int main(){

    int resultado, n, p;
    printf("Digite o numero n do arrajo: ");
    scanf("%d", &n);
    printf("Digite o numero p do arrajo: ");
    scanf("%d", &p);

    if(p < n){
        resultado = calcularArranjo(n, p);
        printf("Resultado: %d", resultado);
    }else{
        printf("Impossivel calcular o arranjo");
    }
    
    return 0;
}