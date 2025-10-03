#include <stdio.h>

void notaFinal(){
    float av1, tb1, tb2, nf;

    printf("Sabendo que a Nota Final =  [Avaliacao 1 + (Trabalho 1 + Trabalho 2)]/2\nDigite a  nota da avaliacao 1: ");
    scanf("%f", &av1);
    printf("Digite a nota do trabalho 1: ");
    scanf("%f", &tb1);
    printf("Digite a nota do trabalho 2: ");
    scanf("%f", &tb2);

    nf = (av1 + ((tb1 + tb2)/2))/2;

    printf("A nota final e: %.2f", nf);

}
int main(){
    notaFinal();
    return 0;
}