#include <stdio.h>

void powerV(int base, int expoente){
    int resultado = 1;
    for(int i=1; i<= expoente; i++){
        resultado *=base;
    }
    printf("Valor dentro da funcao de passagem por valor: %d\n", resultado);
}

void powerR(int *base, int *expoente){
    int aux = *base;
    for(int i=1; i<*expoente; i++){
        *base*=aux;
    }
     printf("Valor dentro da funcao de passagem por referencia: %d\n", *base);
}

int main(){
    int base, expoente;
    printf("Digite o valor da base: ");
    scanf("%d", &base);
    printf("Digite o valor do expoente: ");
    scanf("%d", &expoente);

    powerV(base, expoente);
    printf("Valor apos a funcao de passagem por valor: %d\n", base);

    powerR(&base, &expoente);
    printf("Valor apos a funcao de passagem por referencia: %d", base);


    /*portanto, passagem por referencia modifica o valor dentro da função e salva após a função, se não usá-la, precisará
    criar uma nova variável pra receber o valor após a função de passagem por valor. A copia da variável no método de passagem
    por valor não permite essa modificação no endereço da variável.*/
}