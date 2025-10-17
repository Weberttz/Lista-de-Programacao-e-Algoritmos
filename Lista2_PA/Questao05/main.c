#include <stdio.h>

void vetorTamanhos(){
    int qnt_jogadores = 6;
    int indices[qnt_jogadores];
    float tamanhos[qnt_jogadores];

    //Preenche vetores de tamanho e índices 
    for(int i=0; i<qnt_jogadores; i++){
        printf("Digite a altura do jogador %d: ", i);
        scanf("%f", &tamanhos[i]);
        indices[i] = i;
    }

    //Organiza vetores
    for(int i=0; i<qnt_jogadores; i++){
        for(int j=0; j < qnt_jogadores; j++)
        {
            if(tamanhos[j] < tamanhos[i]){
                float aux = tamanhos[j];
                tamanhos[j] = tamanhos[i];
                tamanhos[i] = aux;
                int aux2 = indices[j];
                indices[j] = indices[i];
                indices[i] = aux2;
            }

        }
    }

    printf("Maior altura: %.2f, indice: %d\n", tamanhos[qnt_jogadores-1], indices[qnt_jogadores-1]);
    printf("Menor altura: %.2f, indice: %d\n", tamanhos[0], indices[0]);
    printf("Tamanhos dos jogadores em ordem decrescente: ");

    for(int i=0; i < qnt_jogadores; i++)
    {   
        printf("%.2f ", tamanhos[i]);
    }

}


int main(){
    vetorTamanhos();
    return 0;
}