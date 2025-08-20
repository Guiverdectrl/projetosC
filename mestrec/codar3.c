# include <stdio.h>

int main(){
    //aprendendo variaveis com produto e estoque.
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int EstoqueA = 1000;
    unsigned int EstoqueB = 2000;

    float ValorA = 10.50;
    float ValorB = 20.50;

    unsigned int EstoqueminimoA = 500;
    unsigned int EstoqueminimoB = 2500;

    double ValortotalA;
    double ValortotalB;

    int ResultadoA, ResultadoB;

    printf("produto %s tem estoque %u e o valor unitario %.2f\n", produtoA, EstoqueA, ValorA);
    printf("produto %s tem estoque %u e o valor unitario %.2f\n", produtoB, EstoqueB, ValorB);

    ResultadoA = EstoqueA > EstoqueminimoA;
    ResultadoB = EstoqueB > EstoqueminimoB;

    printf("o produto %s tem estoque mínimo %d\n", produtoA, ResultadoA);
    printf("o produto %s tem estoque mínimo %d\n", produtoB, ResultadoB);

    printf("o valor total de A (%.2f) é maior que o valor total de B (%.2f)", 
                     EstoqueA * ValorA, EstoqueB * ValorB,
                  (EstoqueA * ValorA) > (EstoqueB * ValorB) );

}