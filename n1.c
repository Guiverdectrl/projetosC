#include <stdio.h>

int main (){
    int idade = 19;                  //aqui os codigos estão inicializados
    int quantidade = 1;
    float altura = 1.72;
    double salario = 0;
    char letra = 'G';
    char nome [20] = "Guilherme";


    printf( "a idade é: %d\n", idade); // %d identifica numeros decimais
    printf("a altura é: %.2f\n", altura); 
    printf("o nome é: %s\n", nome);
    printf(" a letra é: %c\n", letra);
}