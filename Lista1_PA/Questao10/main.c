#include <stdio.h>    

void retornaHorario(){
    char horario[5];  
    printf("Digite o horario que deseja chegar ao encontro: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &horario[i]);
    }

    int minutos = 0, hora = 0;
    for(int i = 0; i < 5; i++)
    {
        if(i == 0) hora+= (horario[i] - '0') * 10;
        else if(i > 0 && i < 2) hora+= horario[i] - '0';


        if(i == 3) minutos+= (horario[i] - '0') * 10;
        else if(i > 3 && i < 5) minutos+= horario[i] - '0';
    }

    hora--;

    if(hora < 0){
        hora = 23;
    }
    if(hora < 10 && minutos < 10)
        printf("retorno: 0%d:0%d", hora, minutos);
    else
         printf("retorno: %d:%d", hora, minutos);
}

int main(){
    retornaHorario();
    return 0;
}