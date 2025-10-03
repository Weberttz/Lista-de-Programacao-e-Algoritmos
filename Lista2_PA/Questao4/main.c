#include <stdio.h>

void ccTabela(){
    int linhas = 3, colunas = 2, qnt_filial_lucro = 0;
    float tabela[linhas][colunas];
    float lucro = 0, soma = 0, media;

    //Cria tabela
    for(int i = 0; i < linhas; i++){
        printf("Digite o investimento e o retorno da filial %d, respectivamente: ", i+1);
        for(int j = 0; j < colunas; j++){
            scanf("%f", &tabela[i][j]);
        }
    }

    //Calcula lucro
    for(int i = 0; i < linhas; i++){
        tabela[i][0] = -1 * tabela[i][0];
        for(int j = 0; j < colunas; j++){
            lucro += tabela[i][j];
        }

        if(lucro > 0){
            printf("a filial de linha %d deu lucro de %.0f\n", i+1, lucro);
            soma += lucro;
            qnt_filial_lucro++;
        }
        lucro = 0;
    }
    media = soma/qnt_filial_lucro;

    printf("a media dos lucros: %.0f", media);
    
}


int main(){
    ccTabela();
    return 0;
}