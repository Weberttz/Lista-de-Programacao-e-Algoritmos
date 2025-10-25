#include <stdio.h>
#include <string.h>

int main(){

    char pessoa1[40], pessoa2[40];

    printf("Digite o nome da pessoa 1: ");
    scanf("%s", pessoa1);

    printf("Digite o nome da pessoa 2: ");
    scanf("%s", pessoa2);

    if(strcmp(pessoa1, pessoa2) == 0)
        printf("Os nomes sao iguais");
    else
        printf("Os nomes sao diferentes");

    return 0;

}