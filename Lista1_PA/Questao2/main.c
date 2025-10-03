#include <stdio.h>

void calculaImpostoDeRenda(){
    float salario;
    printf("Digite o salario: ");
    scanf("%f", &salario);
    //salario/=100;

    if(salario < 2259.20){
        salario = salario - (0 * salario/100);
    }
    if(salario >= 2259.20 && salario < 2826.65){
        salario = salario - (7 * salario/100);
    }
    if(salario >= 2826.65 && salario < 3751.05){
        salario = salario - (15 * salario/100);
    }
    if(salario >= 3751.05 && salario <= 4664.68){
        salario = salario - (22 * salario/100);
    }
    if(salario > 4664.68) {
        salario = salario - (27 * salario/100);
    }

    printf("O salario apos a retirada do imposto de renda e: %.2f", salario);
}

int main(){
    calculaImpostoDeRenda();
    return 0;
}