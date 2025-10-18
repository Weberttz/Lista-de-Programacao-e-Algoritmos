#include <stdio.h>

int main(){
    int dias;

    printf("Digite a quantidade: " );
    scanf("%d", &dias);

    int consumo[dias];

    for(int i=0; i<dias; i++){
        printf("Digite o consumo %d: ", i+1);
        scanf("%d", &consumo[i]);
    }

    int variacoes[dias];

    for(int i=0; i<dias; i++){
        if(i == 0) variacoes[i] = 0;
        else variacoes[i] = consumo[i] - consumo[i-1];
    }

    for(int i = 0; i < dias; i++)
    {
        printf("%d ", variacoes[i]);
    }
    

    return 0;
}