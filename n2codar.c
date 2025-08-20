#include <stdio.h>

int main (){
    int nota1, nota2, nota3;
    int media;

    printf("*** Média dos alunos *** \n");

    printf("digite sua primeira nota \n");
    scanf("%d, &nota1);

    printf("digite sua segunda nota \n");
    scanf("%d", &nota2);

    printf("digite sua primeira nota \n");
    scanf("%d", *nota3);

    media = (nota1 + nota2 + nota3) /3;
    printf("A média é: %d \n", media);

}
