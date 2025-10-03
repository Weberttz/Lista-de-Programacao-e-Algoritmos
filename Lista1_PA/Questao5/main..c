#include <stdio.h>

float elevacao(float num, int exp){
    float resultado = 1;
    for (int i = 0; i < exp; i++)
    {
        resultado *= num;
    }
    return resultado;
}

void verificaIMC(double imc){
    if(imc < 18.5) printf("Abaixo do peso");
    if(imc > 18.5 && imc < 24.9) printf("Peso normal");
    if(imc > 24.9 && imc < 29.9) printf("Sobrepeso");
    if(imc > 30) printf("Obsidade");
}


void calculaIMC(){
    float peso, altura, imc;
    printf("Digite o peso em Kg: ");
    scanf("%f", &peso);
    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    imc = peso/elevacao(altura, 2);
    verificaIMC(imc);

}

int main(){
    calculaIMC();
    return 0;
}