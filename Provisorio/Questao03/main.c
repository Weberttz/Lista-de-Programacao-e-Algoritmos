#include <stdio.h>


struct Aluno{
    char nome[50];
    float notas[3];
    float media;
};


int main(){

    int qnt = 3, qnt_notas = 3;
    struct Aluno alunos[qnt];

    for(int i = 0; i< qnt; i++){
        printf("Digite o nome do aluno %d: ", i+1);
        scanf("%s", alunos[i].nome);
        alunos[i].media = 0;

        for(int j=0; j<qnt_notas;j++){
            printf("Digite a nota %d de %s: ", j+1, alunos[i].nome);
            scanf("%f", &alunos[j].notas[j]);
            alunos[i].media += alunos[j].notas[j]/qnt_notas;
        }
    }

    for(int i = 0; i<qnt; i++){
        printf("A media de %s eh: %.2f\n", alunos[i].nome, alunos[i].media);
    }



    return 0;
}