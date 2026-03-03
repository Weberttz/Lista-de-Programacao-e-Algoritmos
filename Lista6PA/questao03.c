#include <stdio.h>
#include <stdlib.h>

int Primo(int num){
    int primo = 0, contador = 0;

    for(int i=1; i<=num; i++){
        if(num%i == 0)
            contador++;
    }

    if(contador == 2)
        primo = 1;

    return primo;
}

int main(){
    FILE *arquivo;

    arquivo = fopen("Arquivos/lista.txt", "w");

    int n;
    printf("Digite n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        if(Primo(i))
            fprintf(arquivo, "%d Primo\n", i);
        else
            fprintf(arquivo, "%d NPrimo\n", i);
    }
        
    fclose(arquivo);

    return 0;
}
