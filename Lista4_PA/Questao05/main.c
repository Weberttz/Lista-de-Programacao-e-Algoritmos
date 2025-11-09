#include <stdio.h>

int Primo(int num){
    int primo = 0, contador = 0;

    for(int i=1; i<=num; i++){
        if(num%i == 0)
            contador++;
    }

    if(contador == 2)
        primo = 1;

    return primo;
}

int main(){
    int limite = 1000, soma = 0;

    for(int i = 1; i<=limite; i++){
        if(Primo(i) == 1)
            soma += i;
    }

    printf("A soma: %d", soma);

    return 0;
}