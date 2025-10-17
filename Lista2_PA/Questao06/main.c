#include <stdio.h>

void Biblioteca(){
    int qnt_livros, id, existe = 0, indice;
    printf("Digite a quantidade de livros: ");
    scanf("%d", &qnt_livros);

    int livros[qnt_livros];

    for(int i=0; i<qnt_livros; i++){
        printf("Digite o id do livro de indice %d: ", i);
        scanf("%d", &livros[i]);
    }

    printf("Digite o id do livro que deseja pesquisar:");
    scanf("%d", &id);

    for(int i = 0; i < qnt_livros; i++)
    {
        if(id == livros[i]){
            existe = 1;
            indice = i;
        }
    }

    if(existe != 0) printf("O livro existe, seu indice: %d", indice);
    else printf("O livro nao existe");

}

int main(){
    Biblioteca();
    return 0;
}