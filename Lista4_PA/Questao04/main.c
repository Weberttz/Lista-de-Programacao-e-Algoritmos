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
    int limite = 1000;

    for(int i = 1; i<=limite; i++){
        if(Primo(i) == 1)
            printf("Numero %d - Primo\n", i);
        else  
            printf("Numero %d - Nao Primo\n", i);  
    }

    return 0;
}