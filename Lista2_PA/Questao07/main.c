#include <stdio.h>

void ciMatriz(){
    int linhas = 3, colunas = 3;
    int M[linhas][colunas];

    printf("Monte a matriz %dx%d:\n", linhas, colunas);

    for(int i = 0; i < linhas; i++)
    {
        for(int j = 0; j < colunas; j++)
        {
            scanf("%d", &M[i][j]);
        }
        
    }

    for(int i = 0; i < linhas; i++)
    {
        for(int j = 0; j < colunas; j++)
        {
            if(M[i][j] %2 == 0) M[i][j] = 1;
            else  M[i][j] = -1;
        }
        
    }

    for(int i = 0; i < linhas; i++)
    {
        for(int j = 0; j < colunas; j++)
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

}

int main(){
    ciMatriz();
    return 0;
}