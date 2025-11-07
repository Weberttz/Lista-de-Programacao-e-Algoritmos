#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    int ordem  = 3, qnt_vogais = 0;
    char matrizLetras[ordem][ordem];

    printf("Digite as letras na matriz da 3x3 com essa configuracao: \n");

    for(int i=0; i<ordem; i++){
        for(int j=0; j<ordem; j++){
            printf("l%d%d ", i+1, j+1);         
        }
        printf("\n");
    }

    printf("\n");
    for(int i=0; i<ordem; i++){
        for(int j=0; j<ordem; j++){
            scanf("%c%*c", &matrizLetras[i][j]);            
        }
    }

    for(int i=0; i<ordem; i++){
        for(int j=0; j<ordem; j++){
             switch (tolower(matrizLetras[i][j]))
            {
            case 'a':
                qnt_vogais++;
                break;
            case 'e':
                qnt_vogais++;
                break;
            case 'i':
                qnt_vogais++;
                break;
            case 'o':
                qnt_vogais++;
                break;
            case 'u':
                qnt_vogais++;
                break;
            default:
                break;
            }
        }
    }

    printf("A quantidade de vogais: %d", qnt_vogais);


    return 0;
}