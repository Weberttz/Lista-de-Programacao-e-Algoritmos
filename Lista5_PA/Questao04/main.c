#include <stdio.h>
#include <stdlib.h>

void soma(int *A, int *B){
    *A = *A + *B;
}

int main (){
    int A, B;
    printf("Entre com o valor de A: ");
    scanf("%d", &A);

    printf("Entre com o valor de B ");
    scanf("%d", &B);

    soma(&A, &B);

    printf("o valor de A apos a funcao: %d", A);

    return 0;
}