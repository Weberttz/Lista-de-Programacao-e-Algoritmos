#include <stdio.h>

void produtoInternoVetor(){
    int tamanho = 3, produto = 0;
    int vetor_a[3] = {0}, vetor_b[3] = {0};

    for(int i = 0; i < tamanho; i++)
    {
        printf("Digite a%d: ", i);
        scanf("%d", &vetor_a[i]);
    }
    for(int i = 0; i < tamanho; i++)
    {
        printf("Digite b%d: ", i);
        scanf("%d", &vetor_b[i]);
    }

    for(int i = 0; i<tamanho; i++){
        produto+= vetor_a[i] * vetor_b[i];
    }
    
    printf("O produto interno e: %d", produto);
}

int main(){
    produtoInternoVetor();
    return 0;
}