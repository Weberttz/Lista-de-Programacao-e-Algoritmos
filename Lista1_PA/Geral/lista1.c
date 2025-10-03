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

void calculaImpostoDeRenda(){
    float salario;
    printf("Digite o salario: ");
    scanf("%f", &salario);
    //salario/=100;

    if(salario < 2259.20){
        salario = salario - (0 * salario/100);
    }
    if(salario >= 2259.20 && salario < 2826.65){
        salario = salario - (7 * salario/100);
    }
    if(salario >= 2826.65 && salario < 3751.05){
        salario = salario - (15 * salario/100);
    }
    if(salario >= 3751.05 && salario <= 4664.68){
        salario = salario - (22 * salario/100);
    }
    if(salario > 4664.68) {
        salario = salario - (27 * salario/100);
    }

    printf("O salario apos a retirada do imposto de renda e: %.2f", salario);
}

void notaFinal(){
    float av1, tb1, tb2, nf;

    printf("Sabendo que a Nota Final =  [Avaliacao 1 + (Trabalho 1 + Trabalho 2)]/2\nDigite a  nota da avaliacao 1: ");
    scanf("%f", &av1);
    printf("Digite a nota do trabalho 1: ");
    scanf("%f", &tb1);
    printf("Digite a nota do trabalho 2: ");
    scanf("%f", &tb2);

    nf = (av1 + ((tb1 + tb2)/2))/2;

    printf("A nota final e: %.2f", nf);

}

void produtoInternoVetor(){
    int tamanho = 3, produto = 0;
    int vetor_a[3] = {0}, vetor_b[3] = {0};

    for(int i = 0; i < tamanho; i++)
    {
        printf("Digite a%d: ", i);
        scanf("%d", &vetor_a[i]);
    }
    for(int i = 0; i < tamanho; i++)
    {
        printf("Digite b%d: ", i);
        scanf("%d", &vetor_b[i]);
    }

    for(int i = 0; i<tamanho; i++){
        produto+= vetor_a[i] * vetor_b[i];
    }
    
    printf("O produto interno e: %d", produto);
}

void calculaIMC(){
}


void escolhaUsuario(){
    int escolha = 0;

    printf("Escolha\n1- Calcula Idade\n2- Imposto de Renda\n3- Calcula Nota Final\n4- Calcula Produto Iterno de Vetores\n5-Teste\n");
    scanf("%d", &escolha);
    switch(escolha){
        case 1:
            calculaIdade();
            break;
        case 2:
            calculaImpostoDeRenda();
            break;
        case 3:
            notaFinal();
            break;
        case 4:
            produtoInternoVetor();
            break;
        case 5:
            break;
        default:
            printf("Entrada inválida");
            break;
    }
}

int main(){
    escolhaUsuario();
    return 0;
}