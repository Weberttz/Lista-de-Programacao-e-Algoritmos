#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int tam = 3;

    float matE[tam][tam];

    float *matD1 = malloc(tam*sizeof(float));
    float **matD2 = malloc(tam*sizeof(matD1));

    wprintf(L"Endereços dos elementos da matriz estática\n");
    for(int i=0; i<tam; i++){
        for(int j = 0; j<tam; j++){
            wprintf(L"elemento da posição: %d %d - %x ou %p\n", i, j, &matE[i][j], &matE[i][j]);
        }
    }
    wprintf(L"Endereços dos elementos da matriz dinâmica\n");
    int cont = 0;
    for(int i = 0; i<tam; i++){
        for(int j = 0; j<tam; j++){
            wprintf(L"elemento da posição: %d %d - %x ou %p\n",i, j, &matD2[cont], &matD2[cont]);
            cont++;
        }
    }

    free(matD1);
    free(matD2);

    return 0;
}