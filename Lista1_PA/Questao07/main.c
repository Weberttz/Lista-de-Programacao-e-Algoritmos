#include <stdio.h>

void calculaNotas(){
    int qnt_notas;
    float media = 0;
    printf("Digite a quantidade de notas: ");
    scanf("%d", &qnt_notas);
    float notas[qnt_notas];

    for(int i = 0; i < qnt_notas; i++){
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &notas[i]);
        media += notas[i]/qnt_notas;
    }
    for(int i = 0; i<qnt_notas; i++){
        for(int j = i; j<qnt_notas; j++){
            if(notas[j] < notas[i]){
                float aux = notas[j];
                notas[j] = notas[i];
                notas[i] = aux;
            }
        }
    }
    printf("A maior nota: %.2f", notas[qnt_notas-1]);
    printf("\nA menor nota: %.2f", notas[0]);
    printf("\nA media: %.2f", media);
}

int main(){
    calculaNotas();
    return 0;
}