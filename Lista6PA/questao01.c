#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arq1, *arq2, *arq3;
    int A, B, C;

    arq1 = fopen("Arquivos/arquivo1.txt", "r");
    arq2 = fopen("Arquivos/arquivo2.txt", "r");
    arq3 = fopen("Arquivos/arquivo3.txt", "w");

    if(arq1 == NULL || arq2 == NULL){
        printf("Erro ao abrir um dos arquivos\n");
        system("pause");
        return 1;
    }

    while(fscanf(arq1, "%d\n", &A) != EOF){
        fscanf(arq2, "%d\n", &B);
        C = A + B;
        fprintf(arq3, "%d\n", C);
    }


    printf("Programa completado");

    fclose(arq1);
    fclose(arq2);
    fclose(arq3);

    return 0;
}
