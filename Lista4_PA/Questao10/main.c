#include <stdio.h>

int elevado(int x, int y){
    int resultado = 1;
    if(y >= 1)
        resultado = x * elevado(x, y-1);

    return resultado;
    
}

int main(){

    int resultado, base, expoente;
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);


    resultado = elevado(base, expoente);
    
    printf("Resultado: %d", resultado);

    return 0;
}