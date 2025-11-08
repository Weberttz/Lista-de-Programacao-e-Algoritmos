#include <stdio.h>

int somaIntervalo(int n1, int n2){
    int soma = 0;
    for(int i=n1; i <= n2; i++){
        soma += i;
    }
    return soma;
}

int main(){
    int n1, n2, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    if(n1 > n2){
        //n1 = n1 ^ n2 ^ (n2 = n1); //troca de variável sem temp
        
        int temp = n1; 
        n1 = n2;
        n2 = temp;
    }
       
        
    resultado = somaIntervalo(n1, n2);

    printf("A soma do intervalo de %d ate %d (com ambos inclusos): %d", n1, n2, resultado);
    

    return 0;
}