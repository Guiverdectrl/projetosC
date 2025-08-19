#include <stdio.h>

int main (){
    int idade = 19;                  //aqui os codigos estão inicializados
    int quantidade = 1;
    float altura = 1.72;
    double salario = 0;
    char letra = 'G';
    char nome [20] = "Guilherme";

    printf("digite sua idade:");
    scanf("%d", &idade);
    printf("a idade é: %d\n", idade);

    printf("digite sua altura:");
    scanf("%f", &altura);
    printf("a altura é: %f\n", altura);

    printf("digite seu nome:");
    scanf("%s", nome);
    printf("o nome é: %s\n", nome);

}