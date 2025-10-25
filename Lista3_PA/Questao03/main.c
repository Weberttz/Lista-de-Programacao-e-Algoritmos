#include <stdio.h>
#include <string.h>

struct Pessoa{
    char nome[40];
    int idade;
};

int main(){
    int qnt = 3, maior = 0;
    char velha[40];
    struct Pessoa pessoas[qnt];

    for(int i=0; i<qnt; i++){
        printf("Digite o nome da pessoa %d: ", i+1);
        scanf("%s", pessoas[i].nome);

        printf("Digite a idade da pessoa %d: ", i+1);
        scanf("%d", &pessoas[i].idade);

        if(pessoas[i].idade > maior){
            maior = pessoas[i].idade;
        }
    }

    for(int i=0; i<qnt; i++){
        if(pessoas[i].idade == maior)
            strcpy(velha, pessoas[i].nome);
    }

    printf("%s\n", velha);

    return 0;
}