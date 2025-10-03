#include <stdio.h>
#include <stdlib.h>

void calculaNota(){
    int qnt_alunos = 10, i = 0;
    float notas[qnt_alunos];
    float nota, soma = 0, media;

    while(i < qnt_alunos){
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &nota);

        if(nota < 0 || nota > 10){
            continue;
        }

        notas[i] = nota;
        soma += notas[i];

        i++;
    }

    media = soma/qnt_alunos;

    if(media > 8){
        media = 10;
    }
    printf("Media perfeita %.2f", media);

}
int main(){
    calculaNota();
    return 0;
}