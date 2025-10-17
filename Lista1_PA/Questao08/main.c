#include <stdio.h>

int verificaNum(int num){
    int resultado  =0;
    if(num%2 == 0){
        resultado = 1;
    }
    return resultado;
}

void recebeEntrada(){
    int num, venceu = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);

    venceu = verificaNum(num);

    if(venceu == 1) printf("Jogador venceu");
    else printf("Jogador perdeu");
}

int main(){
    recebeEntrada();
    return 0;
}