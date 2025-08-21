#include <stdio.h>

int main(){
    //Carta 01
    //Primeiro criei as variáveis
    //Usei o char[] para os textos, o int para  números inteiros e o float para números flutuantes.
    char Estado1[20];
    char Codigo1[4];
    char Cidade1[20];
    int População1;
    float Area1;
    float Pib1;
    int Pontos1;

    //carta 2
    // Repeti o mesmo processo da carta 1.
    char Estado2[20];
    char Codigo2[4];
    char Cidade2[20];
    int População2;
    float Area2;
    float Pib2;
    int Pontos2; 


    // Usei o printf para imprimir as variávei.
    // Usei os especificadores para sinalizar cada tipo de impressão.
    printf("Carta 01: \n");

    printf("Digite o nome do Estado: \n", Estado1);
    scanf("%s", &Estado1);

    printf("Digite o nome do Código: \n", Codigo1);
    scanf("%s", &Codigo1);

    printf("Digite o nome da cidade: \n", Cidade1);
    scanf("%s", &Cidade1);

    printf("Digite a quantidade da Popuçação: \n", População1);
    scanf("%d", &População1);

    printf("Digite a Área km²: \n", Area1);
    scanf("%f", &Area1);

    printf("Digite o PIB da cidade: \n", Pib1);
    scanf("%f", &Pib1);

    printf("Digite o número de Pontos turísticos da cidade: \n", Pontos1);
    scanf("%d", &Pontos1);

    //Sendo %d para números inteiros, %s para nomes e codigos e a %f para imprimir números de pontos flutuantes.

    printf("Carta 02: \n");

    printf("Digite o nome do Estado: \n", Estado2);
    scanf("%s", &Estado2);

    printf("Digite o nome do Código: \n", Codigo2);
    scanf("%s", &Codigo2);

    printf("Digite o nome da cidade: \n", Cidade2);
    scanf("%s", &Cidade2);

    printf("Digite a quantidade da Popuçação: \n", População2);
    scanf("%d", &População2);

    printf("Digite a Área km²: \n", Area2);
    scanf("%f", &Area2);

    printf("Digite o PIB da cidade: \n", Pib2);
    scanf("%f", &Pib2);

    printf("Digite o número de Pontos turísticos da cidade: \n", Pontos2);
    scanf("%d", &Pontos2);

    return (0);
    //finalizei com o return (0);.
    
}