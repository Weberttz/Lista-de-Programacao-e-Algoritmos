#include <stdio.h>

float calcTriangulo(float base, float altura){
    return (base * altura)/2;
}

int main(){

    float base, altura, area;
    printf("Digite a base do triangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);

    area = calcTriangulo(base, altura);

    if((int)area == area)
        printf("A area do triangulo: %.f", area);
    else 
        printf("A area do triangulo: %.2f", area);


    return 0;
}