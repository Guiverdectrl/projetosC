#include <stdio.h>

int main(){
    //Carta 01
    //Primeiro criei as variáveis e depois atribuí valores a elas.
    //Usei o char[] para os textos, o int para  números inteiros e o float para números flutuantes.
    char Estado1[20] = "Recife";
    char Codigo1[4] = "A01";
    char Cidade1[20]= "joao pessoa";
    int População1 = 650000;
    float Area1 = 500.000;
    float Pib1 = 50.000000;
    int Pontos1 = 100;

    //carta 2
    // Repeti o mesmo processo da carta 1.
    char Estado2[20] = "Alagoas";
    char Codigo2[4] = "A02";
    char Cidade2[20] = "Maceio";
    int População2 = 957916;
    float Area2 = 509.320;
    float Pib2 = 2.7000000;
    int Pontos2 = 200;

    // Usei o printf para imprimir as variávei.
    // Usei os especificadores para sinalizar cada tipo de impressão.
    printf("Carta 01: \n");
    printf("Estado: %s \n", Estado1);
    printf("Código: %s \n", Codigo1);
    printf("População: %d \n", População1);
    printf("Área: %f \n", Area1);
    printf("PIB: %f \n", Pib1);
    printf("Pontos turísticos: %d \n\n", Pontos1);

    //Sendo %d para números inteiros, %s para nomes e codigos e a %f para imprimir números de pontos flutuantes.

    printf("Carta 02: \n");
    printf("Estado: %s \n", Estado2);
    printf("Código: %s \n", Codigo2);
    printf("População: %d \n", População2);
    printf("Área: %f \n", Area2);
    printf("PIB: %f \n", Pib2);
    printf("Pontos turísticos: %d \n", Pontos2);

    return (0);
    //finalizei com o return (0);.
}