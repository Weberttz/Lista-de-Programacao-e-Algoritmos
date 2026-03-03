#include <stdio.h>
#include <stdlib.h>

int main(){
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