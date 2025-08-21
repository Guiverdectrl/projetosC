#include <stdio.h>

int main(){
    //Carta 01
    //Primeiro criei as variáveis
    //Usei o char[] para os textos, o int para  números inteiros e o float para números flutuantes.
    //Estabeleci uma quantidade de caracteres em cada char para ser possível digitar mais livrimente.
    char Estado1[20];
    char Codigo1[4];
    char Cidade1[30];
    unsigned long int População1;
    float Area1;
    float Pib1;
    int Pontos1;
    float Densidade1, Pibpercapita1, inversodensidade1, Superpoder1;

    //carta 2
    // Repeti o mesmo processo da carta 1.
    char Estado2[20];
    char Codigo2[4];
    char Cidade2[30];
    unsigned long int População2;
    float Area2;
    float Pib2;
    int Pontos2; 
    float Densidade2, Pibpercapita2, inversodensidade2, Superpoder2;


    // Usei o printf para imprimir as variáveis e o scanf para que seja possível digitar no terminal, ou seja, para dar valor as variáveis.
    printf("Desafio super Trunfo! \n\n");

    // Usei os especificadores para sinalizar cada tipo de impressão. Sendo %d para números inteiros, %s para caracteres, %f para numeros flutuantes
    // "\n" serve para pular uma linha, quem da valor as variáveis são os usuários
    printf("Carta 01: \n");

    printf("Digite o Estado (A-H): \n", Estado1);
    scanf("%s", Estado1);

    printf("Digite o Código da carta (Ex: A01): \n", Codigo1);
    scanf("%s", Codigo1);

    printf("Digite o nome da cidade: \n", Cidade1);
    scanf("%s", Cidade1);

    printf("Digite a quantidade da População: \n", População1);
    scanf("%lu", &População1);

    printf("Digite a Área km²: \n", Area1);
    scanf("%f", &Area1);

    printf("Digite o PIB da cidade: \n", Pib1);
    scanf("%f", &Pib1);

    printf("Digite o número de Pontos turísticos da cidade:\n", Pontos1);
    scanf("%d", &Pontos1);

    printf("\n");

    //usei o \n só para pular mais uma linha
    //Repeti o mesmo processo da carta 1

    printf("Carta 02: \n");

    printf("Digite o Estado (EX:A-H): \n", Estado2);
    scanf("%s", Estado2);

    printf("Digite o Código da Carta (Ex: A01): \n", Codigo2);
    scanf("%s", Codigo2);

    printf("Digite o nome da Cidade:\n", Cidade2);
    scanf("%s", Cidade2);

    printf("Digite a quantidade da População da cidade 2: \n", População2);
    scanf("%lu", &População2);

    printf("Digite a Área km² da cidade 2: \n", Area2);
    scanf("%f", &Area2);

    printf("Digite o PIB da cidade 2: \n", Pib2);
    scanf("%f", &Pib2);

    printf("Digite o número de Pontos turísticos da cidade 2:\n", Pontos2);
    scanf("%d", &Pontos2);

    printf("\n");

    //usei o comando print para listar em ordem todos os dados digitados pelo usuário, coloquei os com especificações iguais juntos para organizar.

    printf("Carta 01: \n");

    printf("Estado: %s\nCódigo: %s\nCidade: %s\n", Estado1, Codigo1, Cidade1);

    printf("População: %lu\n", População1);

    printf("Área: %.2f\n", Area1);

    printf("PIB: %.2f\n", Pib1);

    printf("Pontos Turisticos: %d\n", Pontos1);

    //para calcular a densidade dividi a população pela area
    Densidade1 = População1 / (float)Area1;
    printf("Densidade Populacional: %.2f Hab/km²\n", Densidade1);

    //Para calcular o Pib per capita multipliquei o pib por 1 bilhão e dividi pela população
    Pibpercapita1 = (Pib1 * 1000000000) / População1;
    printf("Pib per capita: %2.f reais\n\n", Pibpercapita1);

    inversodensidade1 = (float)Area1 / População1;

    Superpoder1 = População1 + Area1 + Pib1 + (float)Pontos1 + inversodensidade1;
    printf("Super poder: %.2f \n\n", Superpoder1);

    printf("Carta 02: \n");

    printf("Estado: %s\nCódigo: %s\nCidade: %s\n", Estado2, Codigo2, Cidade2);

    printf("População: %lu\n", População2);

    printf("Área: %.2f\n", Area2);

    printf("PIB: %.2f\n", Pib2);

    printf("Pontos Turisticos: %d\n", Pontos2);

    //para calcular cada um utilizei o mesmo processo da carta 1

    Densidade2 = População2 / (float)Area2;
    printf("Densidade Populacional: %.2f Hab/km²\n", Densidade2);

    Pibpercapita2 = (Pib2 * 1000000000) / População2;
    printf("Pib per capita: %2.f reais\n\n", Pibpercapita2);

    inversodensidade2 = (float)Area2 / População2;

    Superpoder2 = População2 + Area2 + Pib2 + (float)Pontos2 + inversodensidade2;
    printf("Super poder: %d \n\n", Superpoder2);

    printf("***Comparação das Cartas***\n\n");

    Printf("População: Carta %d Venceu\n", (População1 > População2)? 1 : 0);

    printf("Área: Carta %d Venceu\n", (Area1 > Area2)? 1 : 0);

    printf("PIB: Carta %d Venceu\n", (Pib1 > Pib2)? 1 : 0);

    printf("Pontos Turísticos %d Venceu\n", (Pontos1 > Pontos2)? 1 : 0);

    printf("Densidade Populacional (menor vencer): %.2f Venceu\n", (Densidade1 < Densidade2)? 1 : 0 );

    printf("Pib per capita: %d Venceu\n", (Pibpercapita1 > Pibpercapita2)? 1 : 0);

    printf("Super poder: %d Venceu\n", (Superpoder1 > Superpoder2)? 1 : 0);

    return (0);
    //finalizei com o return (0);.
    
}