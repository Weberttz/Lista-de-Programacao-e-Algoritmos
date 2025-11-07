#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

struct posicao{
    int x, y;
    int livre;
};

int main()
{

    int tabuleiro[3][3] = {0};
    char painel[3][3];

    int x = rand()%3;
    int y = rand()%3;

    tabuleiro[x][y] = 1;

    srand(time(NULL));

    for(int i =0; i<3; i++){
        for(int j=0; j<3; j++){
            painel[i][j] = '*';
            printf("%c ", painel[i][j]);
        }
        printf("\n");
    }

    
    

    return 0;
}