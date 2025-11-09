#include <stdio.h>

void printaDivisores(int n){
    int contador = 0;
    printf("Os divisores sao: ");
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            printf("%d ", i);
            contador++;
        }
    }

    printf("\nO numero de divisores de %d: %d", n, contador);
}

int main(){
    int num;
    printf("Digite o numero que voce quer calcular os divisores: ");
    scanf("%d", &num);

    printaDivisores(num);

    return 0;
}