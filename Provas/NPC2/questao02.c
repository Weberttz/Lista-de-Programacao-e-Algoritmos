#include <stdio.h>
#include <stdlib.h>

//Usei int para os valores da sequência para facillitar os cálculos
int main(){
    int tam;
    int *amostra = malloc(1*sizeof(int));
    printf("Digite o tamanho da amostra: ");
    scanf("%d", &tam);

    amostra = realloc(amostra, tam*sizeof(int));
    printf("Digite a sequencia separada por espacos: ");
    for(int i = 0; i<tam; i++){
        //printf("Digite o valor da posicao %d da sequencia: ", i+1);
        scanf("%d", &amostra[i]);
    }

    int maior = amostra[0], menor = amostra[0];
    float media = 0;
    //Para calcular intensidade média e identificar o maior e menor valor
    for(int i = 0; i<tam; i++){
        media += (float) amostra[i]/tam;

        if(maior < amostra[i])
            maior = amostra[i];

        if(menor > amostra[i])
            menor = amostra[i];
    }
    //Para verificar se tem pico
    int pico = 0, contador = 0;
    for(int i = 0; i<tam; i++){
        if(amostra[i] > amostra[i-1]){
            //printf("%d maior que %d\n", amostra[i], amostra[i-1]);
            contador++;
        }
    }
    if(contador >= 3)
        pico = 1;

    
    printf("A media: %.2f ", media);
    printf("O maior: %d\nO menor: %d\n", maior, menor);
    if(pico == 1)
        printf("A amostra possui pico");
    else
        printf("A amostra nao possui pico");

    free(amostra);

    return 0;
}