#include <stdio.h>

int main(){
    int qnt;

    printf("Digite a quantidade de lanches: ");
    scanf("%d", &qnt);

    float lanches[qnt];

    for(int i=0; i<qnt; i++){
        printf("Digite o lanche %d: ", i+1);
        scanf("%f", &lanches[i]);
    }

    for(int i=0; i<qnt; i++){
        for(int j=0; j<qnt; j++){
            if(lanches[i] > lanches[j]){
                float aux = lanches[i];
                lanches[i] = lanches[j];
                lanches[j] = aux;
            }
        }
    }

    for(int i=0; i<qnt; i++){
        printf("%.2f ", lanches[i]);
    }

    return 0;
}