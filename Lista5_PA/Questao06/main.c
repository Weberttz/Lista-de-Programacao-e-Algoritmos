#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float vetorE[10];

    float *vetorD = malloc(10*sizeof(float));

    wprintf(L"Endereços de memória do vetor Estático:\n");

    for(int i=0; i<10; i++){
        
        printf("elemento %d - %x ou %p\n", i, (unsigned int) &vetorE[i], &vetorE[i]);
    }

    wprintf(L"Endereços de memória do vetor Dinâmico:\n");

    for(int i=0; i<10; i++){
        vetorD[i] = i;
        printf("elemento %d - %x ou %p\n", i, (unsigned int) &vetorD[i], &vetorD[i]);
    }

    free(vetorD);

    return 0;
}