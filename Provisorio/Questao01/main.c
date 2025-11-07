#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int a, b, c, delta;
    float raiz1, raiz2;
    
    printf("Digite a: ");
    scanf("%d", &a);
    printf("Digite b: ");
    scanf("%d", &b);
    printf("Digite c: ");
    scanf("%d", &c);

    delta = (b * b) - 4 * a * c;

    if(delta > 0){
        printf("Existem duas raizes");
        raiz1 = (-b + sqrt(delta))/(2 * a);
        raiz2 = (-b - sqrt(delta))/(2 * a);

        printf("\n%.2f %.2f", raiz1, raiz2);
    }
    else if(delta == 0){
        printf("Existe uma raiz real repetida");
        raiz1 = (-b + sqrt(delta))/(2 * a);

        printf("\n%.2f", raiz1);
    }
    else{ 
        printf("Nao existem raizes reais");
    }
    
    return 0;
}

