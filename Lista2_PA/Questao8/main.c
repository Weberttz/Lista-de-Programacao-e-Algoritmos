#include <stdio.h>

int main(){

    int linhas = 3, colunas = 3, indice;
    float media = 0;
    int mat[linhas][colunas];

    printf("Digite a matriz %dx%d:\n", linhas, colunas);

    //Preenche a matriz
    for(int i=0; i<linhas; i++){
        for(int j=0; j<linhas; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    //Organiza a linha da matriz em ordem crescente 
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            for(int k = j; k < colunas; k++){
                if(mat[i][k] < mat[i][j]){
                    int aux = mat[i][k];
                    mat[i][k] = mat[i][j];
                    mat[i][j] = aux;
                }
            }
        }
    }

    printf("\nMatriz ordenada\n");

    //Imprime a matriz 
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("Digite a linha que deseja calcular a media: ");
    scanf("%d", &indice);

    //Calcula média da linha
    for(int i=0; i<colunas; i++){
        media += mat[indice][i];
    }
    media /= colunas;

    printf("a media: %.2f", media);

    return 0;
}
