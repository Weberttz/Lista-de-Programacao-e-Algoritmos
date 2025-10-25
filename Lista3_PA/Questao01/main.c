#include <stdio.h>
#include <string.h>

struct Pessoa{

    char nome[40];
    int idade;
};

int main(){

    struct Pessoa usuario;

    printf("Digite o seu de uma pessoa: ");
    scanf("%s", usuario.nome);

    printf("Digite a idade dessa pessoa: ");
    scanf("%d", &usuario.idade);

    printf("Nome: %s - Idade: %d", usuario.nome, usuario.idade);

    return 0;
}