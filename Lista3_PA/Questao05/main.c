#include <stdio.h>

int main(){
    char frase[100];
    int qnt_a = 0, tam = 0, total, qnt_espacos = 0;

    printf("Digite uma frase: ");

    for(int i=0; i<100; i++){
        scanf("%c", &frase[i]);
        tam++;
        if((int)frase[i] == 10)
            break;
        if((int)frase[i] == 32)
            qnt_espacos++;
    }
    
    for(int i = 0; i < tam; i++){
        if(frase[i] == 'a' || frase[i] == 'A')
            qnt_a++;
    }

    total = tam - 1 - qnt_espacos;
    
    printf("A quantidade de letras 'a' na frase: %d\n", qnt_a);
    printf("A quantidade total de caractesres: %d", total);

    return 0;
}