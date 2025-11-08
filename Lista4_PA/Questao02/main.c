#include <stdio.h>

float pesoIdeal(float altura, int genero){
    if(genero == 1){
        return 72.6 * altura - 58;
    }else{
        return 62.1 * altura - 44.7;
    }
}


int main(){
    int genero, aceito = 0;
    float altura, peso;

    while(aceito == 0){
        printf("1 - Masculino\n2 - Feminino\nDigite o genero da pessoa: ");
        scanf("%d", &genero);
        if(genero == 1 || genero == 2){
            aceito = 1;
        }else{
            printf("Digite um genero valido\n");
        }
    }
    
    printf("Digite a altura da pessoa: ");
    scanf("%f", &altura);

    peso = pesoIdeal(altura, genero);

    printf("O peso ideal dessa pessoa: %.2f", peso);
    
    
    return 0;
}