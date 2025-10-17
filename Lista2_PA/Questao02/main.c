#include <stdio.h>
#include <stdlib.h>

void calculaNota(){
    int qnt_alunos = 10, qnt_aprovados = 0, i = 0;
    float notas[qnt_alunos];
    float nota, soma = 0, media;

    while(i < qnt_alunos){
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &nota);

        if(nota < 0 || nota > 10){
            continue;
        }

        notas[i] = nota;

        if(notas[i]>4){
            soma += notas[i];
            qnt_aprovados++;
        }

        i++;
    }

    media = soma/qnt_aprovados;

    if(qnt_aprovados > 0){
        printf("Media funcional: %.2f", media);
    }
    else{
        printf("Nenhum aluno aprovado");
    }

}

int main(){
    calculaNota();
    return 0;
}