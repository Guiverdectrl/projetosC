#include <stdio.h>

/// @brief 
/// @return 
int main(){
    int idade, matricula;
    float altura;
    char nome[50];

    printf("digite sua idade: \n");
    scanf("%d", &idade);

    printf("digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite o seu nome: \n");
    scanf("%s", &nome);

    printf("Digite sua matricula \n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s Matrícula: %d\n", nome, matricula);
    printf("Idade: %d Altura: %f", idade, altura);

    return (0);
}