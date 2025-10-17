#include <stdio.h>

void paraCelsius(){
    float fah, celsius;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fah);
    celsius = (fah - 32) * ((float)5/9);
    
    printf("%.2f em Fahrenheit equivale a %.2f Celsius", fah, celsius);
}

void paraFahrenheit(){
    float fah, celsius;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    fah =  (celsius * 9/5) + 32;

    printf("%.2f em Celsius equivale a %.2f Fahrenheit", celsius, fah);
}



void escolhaUsuario(){
    int escolha;
    printf("Escolha a entrada:\n1- Em Fahrenheit\n2- Em Celsius\n");
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 1:
        paraCelsius();
        break;
    case 2:
        paraFahrenheit();
        break;
    default:
        printf("Entrada invalida");
        break;
    }
}

int main(){
    escolhaUsuario();
    return 0;
}