#include <stdio.h>
#include <stdlib.h>

int main(){

    int tam = 5;
    int *vet = malloc(tam * sizeof(int));

    for(int i=0; i<tam; i++)
        scanf("%d", &vet[i]);

    for(int i=0; i<tam; i++){
        if(vet[i]%2 == 0)
            printf("Número %d\nEndereço hexadecimal %p\n", vet[i], &vet[i]);
    }

    return 0;
}