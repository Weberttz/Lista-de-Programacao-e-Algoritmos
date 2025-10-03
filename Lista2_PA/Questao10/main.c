#include <stdio.h>

void preencheMatriz(int linhas, int colunas, int matriz[][colunas]){
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(int linhas, int colunas, int matriz[][colunas]){
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void somaMatrizes(int linhas, int colunas, int matriz1[][colunas], int matriz2[][colunas], int matriz3[][colunas]){
    for(int i = 0; i < linhas; i++)
    {
        for(int j = 0; j < colunas; j++)
        {
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        } 
    }
}

int main(){
    int linhas = 2, colunas = 3;
    int A[linhas][colunas], B[linhas][colunas], C[linhas][colunas];
    printf("Monte a matriz A[][]%dx%d:\n", linhas, colunas);
    preencheMatriz(linhas, colunas, A);
    printf("Monte a matriz B[][]%dx%d:\n", linhas, colunas);
    preencheMatriz(linhas, colunas, B);

    somaMatrizes(linhas, colunas, A, B, C);

    printf("\nMatriz A: \n");
    imprimirMatriz(linhas, colunas, A);
    printf("\nMatriz B:\n");
    imprimirMatriz(linhas, colunas, B);
    printf("\nMatriz C:\n");
    imprimirMatriz(linhas, colunas, C);

    return 0;
}