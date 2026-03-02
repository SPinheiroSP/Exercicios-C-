#include <stdio.h>

int main() {

    // Variáveis referente a carta 01.
    
    int população; // variável de numero de habitantes.
    float area; // variável da area da cidade.
    float pib; // variável ddo pib da cidade.
    int turism; // variável de numero de pontos turísticos.
    char code[10]; // variável do código da cidade na carta.
    char cidade[30]; // variável do nome da cidade.
    char estado[5]; // variável do estado da cidade.

    // Campo de imput manual dos valores das variáveis.
  
    printf("Digite o Estado:\n");
    scanf("%s", &estado);
    printf("Digite o Código da Carta:\n");
    scanf("%s", &code);
    printf("Digite o Nome da Cidade:\n");
    scanf("%s", &cidade);
    printf("Digite o Numero de Habitantes:\n");
    scanf("%d", &população);
    printf("Digite a Área da Cidade em km:\n");
    scanf("%f", &area);
    printf("Digite o PIB da Cidade:\n");
    scanf("%.2f", &pib);
    printf("Digite o Número de Pontos Turísticos:\n");
    scanf("%d\n", &turism);


    //Apresentação dos dados da Carta 01

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", code);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", população);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$%.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", turism);

}