#include <stdio.h>

int MDC(int x, int y){
     int resultado = x;
    if(x > y)
        resultado = MDC(x - y, y);
    else if(x < y)
        resultado = MDC(y, x);
    
    return resultado;
}


int main(){
    int x, y, resultado;

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    
    resultado = MDC(x, y);

    printf("Resultado: %d", resultado);

    return 0;
}