#include <stdio.h>

int MOD(int x, int y){
    int resultado = 0;
    if(x > y)
        resultado = MOD(x - y, y);
    else if(x < y)
        resultado = x;
    
    return resultado;
}

int main(){

    int resultado, x, y;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);

    resultado = MOD(x, y);
    
    printf("Resultado: %d", resultado);
    return 0;
}