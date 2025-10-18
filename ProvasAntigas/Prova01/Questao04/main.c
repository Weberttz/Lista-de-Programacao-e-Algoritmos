#include <stdio.h>

int primo(int num){
    int contador = 0, valor = 0;
    for(int i=1; i<=num;i++){
        if(num%i == 0){
            contador++;
        }
    }
    if(contador == 2) valor = 1;
    
    return valor;
}

int main(){
    int qnt = 5,i = 0, num = 0;
    int primos[qnt];
    
    while(i<qnt){
        printf("Digite o primo de posicao %d: ", i+1);
        scanf("%d", &num);

        if(primo(num) == 1){
            primos[i] = num;
        }else{
            printf("Digite um numero primo!");
            continue;
        }
            
        i++;
    }

    printf("%d", primos[i-1]);
    return 0;
}