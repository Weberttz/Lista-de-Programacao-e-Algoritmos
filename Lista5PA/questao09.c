#include <stdio.h>

void inverterNumero(int *numero){
    int aux = numero;
    int resto, inverso = 0;

    while(aux > 0){
        resto = aux%10;
        inverso = inverso * 10 + resto;
        aux/=10;
    }

    numero = inverso;
}

int main(){
    int num;

    printf("Digite o número: ");
    scanf("%d", &num);

    inverterNumero(&num);

    printf("O número invertido é:  %d", num);

}