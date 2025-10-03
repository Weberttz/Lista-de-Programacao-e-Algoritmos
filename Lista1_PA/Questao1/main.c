#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void calculaIdade(){
    int idade, ano_atual, mes_atual, dia_atual, dias_vividos;

    struct data_nascimento_usuario{
        int dia, mes, ano;
    };

    struct data_nascimento_usuario nascimento_usuario;
    time_t agora = time(NULL);
    struct tm *data_atual = localtime(&agora);

    printf("Digito o dia de seu nascimento: ");
    scanf("%d", &nascimento_usuario.dia);
    printf("Digite o mes de seu nascimento: ");
    scanf("%d", &nascimento_usuario.mes);
    printf("Digite o ano de seu nascimento: ");
    scanf("%d", &nascimento_usuario.ano);

    ano_atual = data_atual->tm_year + 1900;
    mes_atual = data_atual->tm_mon + 1;
    dia_atual = data_atual->tm_mday;

    if(mes_atual > nascimento_usuario.mes)
    idade = ano_atual - nascimento_usuario.ano;
    else if(dia_atual > nascimento_usuario.dia)
    idade = ano_atual - nascimento_usuario.ano;
    else idade = ano_atual - nascimento_usuario.ano -1;

    if(idade > 0){
        dias_vividos = (idade - 1) * 365 + (12 - nascimento_usuario.mes) * 30 + nascimento_usuario.dia;
        printf("Idade: %d\nDias vividos: %d", idade, dias_vividos);
    } 
    else printf("Entrada invalida");

}

int main(){
    calculaIdade();
    return 0;
}