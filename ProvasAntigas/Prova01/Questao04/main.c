#include <stdio.h>

int primo(int num){
    int contador = 0, valor = 0;
    for(int i=1; i<=num;i++){
        if(num%i == 0){
            contador++;
        }
    }
    if(contador == 2) valor = 1;
    
    return valor;
}

int main(){
    int qnt = 5,i = 0, num = 0, maior = 0, indice = 0, resultado = 0;
    int primos[5], quantidades[5] = {0}, fatores[5] = {2, 3, 5, 7, 11};
    
    while(i<qnt){
        printf("Digite o primo de posicao %d: ", i+1);
        scanf("%d", &num);

        if(primo(num) == 1 && num <= 11){
            primos[i] = num;
        }else{
            printf("Digite um numero primo ate 11!\n");
            continue;
        }
            
        i++;
    }

    for(int i=0; i<qnt; i++){
        switch (primos[i])
        {
        case 2:
            quantidades[0]++; 
            break;
        case 3:
            quantidades[1]++;
            break;
        case 5: 
            quantidades[2]++;
            break;
        case 7:
            quantidades[3]++;
            break;
        case 11:
            quantidades[4]++;
            break;
        }
    }

    for(int i = 0; i < qnt; i++)
    {
        if(quantidades[i] > maior){
            maior = quantidades[i];
            indice = i;
        }
    }

    printf("O fator com maior frequencia eh: %d, aparece %d vezes", fatores[indice], quantidades[indice]);
    
    for(int i = 0; i < qnt; i++)
    {
        resultado += quantidades[i] * fatores[i];
    }

    printf("\nO numero gerado ao multiplicar os fatores por suas frequencias eh: %d", resultado);
    

    return 0;
}