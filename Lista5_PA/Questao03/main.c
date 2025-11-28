#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <wchar.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    system("chcp 1252");

    FILE *arquivo;
    char linha[256];

    arquivo = fopen("Documentacao.txt", "r");

    system("cls");
    if(arquivo == NULL)
        printf("Erro ao abrir o arquivo!");

    while(fgets(linha, sizeof(linha), arquivo)){
        printf("%s", linha);    
    }

    return 0;
}