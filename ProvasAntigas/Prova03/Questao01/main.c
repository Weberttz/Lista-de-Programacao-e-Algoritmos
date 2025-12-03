#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arquivo; //Ponteiro para arquivo
    char caracter;
    int i = 0, k = 0, contador = 0,  cont_p = 0; //contadores
    char *palavra = malloc(10*sizeof(char));  //ponteiro palavra (string) incialmente começa podendo conter 10 caracteres

    printf("Digite uma palavra: ");
    scanf("%s", palavra); //ponteiro recebe o input do usuário

    while(palavra[k] != '\0') //enquanto existir caracteres na string palavra, contamos
        k++; //incrementamos em k

    palavra = realloc(palavra, k); //realocação das 10 letras da string, caso o usuário passe menos

    arquivo = fopen("artigo.txt", "r"); // Abrir o arquivo

    if(arquivo == NULL){ // Se o ponteiro que aponta para o arquivo for nulo
        printf("Erro ao abrir o arquivo"); //imprimir erro 
    }

    while((caracter = fgetc(arquivo))!= EOF){//Enquanto o caracter for diferente do fim do arquivo
        if(caracter != ' ' && caracter == palavra[i]){ // se o caracter for diferente de espaço e o caracter pego do arquivo for igual ao caracter da palavra
            contador++; //contador aumenta
            i++; //i também
            if(contador == k) //se contador se igualar ao tamanho da palavra digitada pelo usuário
                cont_p++; //contador que identifica a quantidade de palavras aumenta

        }else{ //se caracter for diferente de espaço ou caracter pego do arquivo for diferente do caracter da palavra
            i = 0; //i sera
            contador = 0; //contador também
        }
        
    }

    printf("%d", cont_p); //imprime a qunantidade de ocorrências da palavra no fim

    return 0;
}
