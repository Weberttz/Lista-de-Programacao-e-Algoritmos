#include <stdio.h>
#include <math.h>

double elevacao(double num, int exp){
    double resultado = 1;
    for (int i = 0; i < exp; i++)
    {
        resultado *= num;
    }
    return resultado;
}

void calculaBhaskara(){
    double a, b, c, delta;
    double raizes[2] = {0};
    printf("Digite o coeficiente a: ");
    scanf("%lf", &a);
    printf("Digite o coeficiente b: ");
    scanf("%lf", &b);
    printf("Digite o coeficiente c: ");
    scanf("%lf", &c);
    
    delta = (elevacao(b, 2)) - 4*a*c;
    
    if(delta > 0){
        raizes[0] = ((-1*b) + sqrt(delta))/2*a;
        raizes[1] = ((-1*b) - sqrt(delta))/2*a;

        printf("Existem duas raizes para essa equacao:\n");
        for(int i = 0;i < 2; i++){
            if(raizes[i] > -1)
            printf("%.0lf ", raizes[i]);
        }
    }
    else if(delta == 0){
        raizes[0] = (-1*b)/2*a;
        printf("Existem duas raizes iguais para essa equacao:\n");
        for(int i = 0;i < 1; i++){
            printf("%.0lf ", raizes[i]);
        }
    }
    else printf("Nao exitem raizes reais");

}
int main(){
    calculaBhaskara();
    return 0;
}