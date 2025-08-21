#include <stdio.h>

int main(){
    //Carta 01
    //Primeiro criei as variáveis e depois atribuí valores a elas.
    //Usei o char[] para os textos, o int para  números inteiros e o float para números flutuantes.
    char Estado1[20] = "Recife";
    char Codigo1[4] = "A01";
    char Cidade1[20]= "joao pessoa";
    unsigned long int População1 = 960000;
    float Area1 = 211.5;
    float Pib1 = 22.24;
    int Pontos1 = 100;
    float Densidade1, Pibpercapita1, Superpoder1, inversodensidade1;

    //carta 2
    // Repeti o mesmo processo da carta 1.
    char Estado2[20] = "Alagoas";
    char Codigo2[4] = "A02";
    char Cidade2[20] = "Maceio";
    unsigned long int População2 = 957916;
    float Area2 = 509.32;
    float Pib2 = 27.50;
    int Pontos2 = 200;
    float Densidade2, Pibpercapita2, Superpoder2, inversodensidade2;


    // Usei o printf para imprimir as variávei.
    // Usei os especificadores para sinalizar cada tipo de impressão.
    printf("Carta 01: \n");

    printf("Estado: %s \n", Estado1);

    printf("Código: %s \n", Codigo1);

    printf("Cidade: %s \n", Cidade1);

    printf("População: %lu \n", População1);

    printf("Área: %.2f km² \n", Area1);

    printf("PIB: %.2f Bilhões de reais \n", Pib1);

    printf("Pontos turísticos: %d \n", Pontos1);

    //para calcular a densidade dividi a população pela area

    Densidade1 = (População1 / Area1);
    printf("Densidade Populacional: %.2f \n", Densidade1);

    //Para calcular a Pib per capita multipliquei o pib por 1 bilhão e dividi pela população
    Pibpercapita1 = (Pib1 * 1000000000) / População1;
    printf("Pib per capita: %.f reais \n", Pibpercapita1);

    inversodensidade1 = Area1 / População1;

    Superpoder1 = (float)População1 + Area1 + Pib1 + (float)Pontos1 + inversodensidade1;
    printf("Super poder: %.2f \n\n", Superpoder1);

    //Sendo %d para números inteiros, %s para nomes e codigos e a %f para imprimir números de pontos flutuantes.

    printf("Carta 02: \n");

    printf("Estado: %s \n", Estado2);

    printf("Código: %s \n", Codigo2);

    printf("Cidade: %s \n", Cidade2);

    printf("População: %lu \n", População2);

    printf("Área: %.2f km² \n", Area2);

    printf("PIB: %.2f Bilhões de reais \n", Pib2);

    printf("Pontos turísticos: %d \n", Pontos2);

    Densidade2 = (População2 / Area2);
    printf("Densidade Populacional: %.2f \n", Densidade2);

    Pibpercapita2 = (Pib2 * 1000000000) / População2;
    printf("Pib per capita: %.f reais \n", Pibpercapita2);

    //para calcular o inverso da densidade criei uma variavel com o nome inversodensidade 1 e 2.
    // e então dividi a area pela população dando assim o resultado inverso.
    inversodensidade1 = Area1 / População1;

    Superpoder2 = (float)População2 + Area2 + Pib2 + (float)Pontos2 + inversodensidade2;
    printf("Super poder: %.2f \n\n", Superpoder2);

    // compração entre carta 1 e 2 ( se o resultado da comparação resultar em 1 a carta 1 vence,
    // mas se for 0 a carta 2 vence, exceto na densidade, porque se a densidade for menor a carta ganha) 
    printf("Comparação de cartas: \n");

    printf("População: %d Carta 1 venceu \n", População1 > População2);

    printf("Área: %d Carta 2 venceu \n", Area1 > Area2);

    printf("PIB: %d Carta 2 venceu \n", Pib1 > Pib2);

    printf("Pontos turísticos: %d Carta 2 venceu \n", Pontos1 > Pontos2);

    printf("Densidade Populacional: %d Carta 2 venceu \n", Densidade1 < Densidade2);

    printf("Pib per capita: %d Carta 2 venceu \n", Pibpercapita1 > Pibpercapita2);

    printf("Super poder: %d Carta 1 venceu \n\n", Superpoder1 > Superpoder2);
    
    printf("Carta 2 venceu: \n");


    return (0);
    //finalizei com o return (0);.
}