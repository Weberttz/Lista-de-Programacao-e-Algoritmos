#include <stdio.h>

void ordenaLista(int qnt, float lista[]){

    for(int i = 0; i<qnt; i++){
        for(int j = 0; j<qnt; j++){
            if(lista[i] < lista[j]){
                float temp = lista[i];
                lista[i] = lista[j];
                lista[j] = temp;
            }
        }
    }
}

int main(){
    int qnt;
    printf("Digite a quantidade de notas: ");
    scanf("%d", &qnt);

    float lista[qnt];

    for(int i=0; i<qnt; i++){
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &lista[i]);
    }

    ordenaLista(qnt , lista);

    printf("As lista ordenada:\n");
    for(int i = 0; i<qnt; i++){
        printf("%.2f ", lista[i]);
    }

}