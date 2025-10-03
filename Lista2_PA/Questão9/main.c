#include <stdio.h>

void imprimeMatriz(){
    int linhas = 5, colunas = 5, contador = 0, soma =0;
    int mat[linhas][colunas], diagonalp[linhas];

    for(int i=0; i<linhas;i++){
        for(int j=0; j<colunas; j++){
            contador++;
            mat[i][j] = contador;
        }
    }

    for(int i=0; i<linhas;i++){
        for(int j=0; j<colunas; j++){
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }


    for(int i=0; i<linhas;i++){
        for(int j=0; j<colunas; j++){
            soma += mat[i][j];
        }
        printf("\nA soma da linha %d: %d", i+1, soma);
    }

    printf("\n\nVetor diagonais:\n");
    for(int i=0; i<linhas;i++){
        diagonalp[i] = mat[i][i];
        printf("%d ", diagonalp[i]);
    }

}

int main(){
    imprimeMatriz();
    return 0;
}