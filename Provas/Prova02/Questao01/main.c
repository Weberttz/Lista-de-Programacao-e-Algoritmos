#include <stdio.h>
#include <stdlib.h>

void ordenarLista(int *lista, int opc){
    if(opc == 0){
        for(size_t i=0; i<sizeof(lista); i++){
            for(size_t j = 0; j<sizeof(lista); j++){
                if(lista[i] < lista[j]){
                    int aux  = lista[i];
                    lista[i] = lista[j];
                    lista[j] = aux;
                }
            }
        }
    }else{
        for(size_t i=0; i<sizeof(lista); i++){
            for(size_t j = 0; j<sizeof(lista); j++){
                if(lista[i] > lista[j]){
                    int aux  = lista[i];
                    lista[i] = lista[j];
                    lista[j] = aux;
                }
            }
        }
    }
}

int main(){
    FILE *arq;
    int tam = 1, num, k = 0, contador = 0;
    int *numeros = malloc(tam*sizeof(int));

    arq = fopen("Arquivo.txt", "r");

    while(fscanf(arq, "%d", &num) != EOF){
        for(int i=0; i<tam; i++){
            if(num != numeros[i]){
                contador++;
            }
        }
        if(contador == tam){
            tam++;
            numeros = realloc(numeros, tam*sizeof(int));
            numeros[k] = num;
            k++;
        }
        contador = 0;
    }

    ordenarLista(numeros, 0);

    for(int i = 0; i<tam; i++){
        printf("%d ", numeros[i]);
    }

    fclose(arq);
    free(numeros);

    return 0;
}