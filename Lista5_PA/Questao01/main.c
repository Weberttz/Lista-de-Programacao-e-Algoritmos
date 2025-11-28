#include <stdio.h> 

int main() { 
    int y, *p, x; //cria as variáveis
    y = 0; //atribui 0 à variável y
    p = &y; //O ponteiro agora aponta para o endereço de y
    x = *p; //x recebe o conteúdo apontado por *p, ou seja, o valor de y = 0
    x = 4; //x recebe 4
    (*p)++; //o conteúdo para o qual o ponteiro aponta é incrementado, passando a valer 1
    x--; //x é decrementado, passando a valer 3
    (*p) += x; //o conteúdo para o qual o ponteiro *p aponta recebe o valor de *p + x (1+3 = 4)
    printf("y = %d\n", y); //y então vale 4 após todos os cálculos
    return 0;
}