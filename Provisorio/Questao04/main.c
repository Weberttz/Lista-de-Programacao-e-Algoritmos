#include <stdio.h>
#include <string.h>

int main(){

    char palavra1[50], palavra2[50], palavra3[50];

    printf("Digite a palavra1:");
    scanf("%s", palavra1);
    printf("Digite a palavra2:");
    scanf("%s", palavra2);
    printf("Digite a palavra3:");
    scanf("%s", palavra3);

    int tam_frase = strlen(palavra1) + strlen(palavra2) + strlen(palavra3);

    char frase[tam_frase+1];

    strcat(frase, palavra1);
    strcat(frase, palavra2);
    strcat(frase, palavra3);

    printf("A frase: ");

    for(int i=0; i<=tam_frase; i++){
        printf("%c", frase[i]);
    }
    printf(" tem %d caracteres", tam_frase);

    return 0;
}