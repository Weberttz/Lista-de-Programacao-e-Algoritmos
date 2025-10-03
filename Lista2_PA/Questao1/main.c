#include <stdio.h>
#include <stdlib.h>

void calculaNota(){
    int qnt_alunos = 10, qnt_aprovados = 0;
    float notas[qnt_alunos];
    float soma = 0, media;

    for(int i=0; i<qnt_alunos; i++){
        printf("Digite a nota %d", i+1);
        scanf("%f", &notas[i]);

        if(notas[i]>4){
            soma += notas[i];
            qnt_aprovados++;
        }
    }

    media = soma/qnt_aprovados;

}

int main(){
    calculaNota();
    return 0;
}