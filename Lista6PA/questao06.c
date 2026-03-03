#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
    FILE *arquivo;
    srand(time(NULL));
    arquivo = fopen("Arquivos/Animal.txt", "r");

    char linha[256], frase[256];
    int qnt_linhas = 0, numero, contador = 0;

    while(!feof(arquivo)){
        fgets(linha, sizeof(linha), arquivo);
        qnt_linhas++;
    }

    rewind(arquivo);

    numero = rand() % qnt_linhas + 1;

    while(contador < numero && fgets(linha, sizeof(linha), arquivo)) {
        contador++;
        if(contador == numero) {
            strcpy(frase, linha);
            break;
        }
    }

    printf("%s", frase);

    return 0;
}
