#include <stdio.h>

int main() {

    // Variáveis referente a carta 01.
    
    int população1; // variável de numero de habitantes.
    float area1; // variável da area da cidade.
    float pib1; // variável ddo pib da cidade.
    int turism1; // variável de numero de pontos turísticos.
    char code1[10]; // variável do código da cidade na carta.
    char cidade1[30]; // variável do nome da cidade.
    char estado1[5]; // variável do estado da cidade.

    // Campo de imput manual dos valores das variáveis.
  
    printf("Digite o Estado Referente a Carta 1:\n");
    scanf("%s", &estado1);
    printf("Digite o Código da Carta Referente a Carta 1:\n");
    scanf("%s", &code1);
    printf("Digite o Nome da Cidade Referente a Carta 1:\n");
    scanf("%s", &cidade1);
    printf("Digite o Numero de Habitantes Referente a Carta 1:\n");
    scanf("%d", &população1);
    printf("Digite a Área da Cidade em km Referente a Carta 1:\n");
    scanf("%f", &area1);
    printf("Digite o PIB da Cidade Referente a Carta 1:\n");
    scanf("%f", &pib1);
    printf("Digite o Número de Pontos Turísticos Referente a Carta 1:\n");
    scanf("%d", &turism1);


    //Apresentação dos dados da Carta 01

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", code1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", população1);
    printf("Área: %f km²\n", area1);
    printf("PIB: R$%f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turism1);

    // Variáveis referente a carta 02.
    
    int população2; // variável de numero de habitantes.
    float area2; // variável da area da cidade.
    float pib2; // variável ddo pib da cidade.
    int turism2; // variável de numero de pontos turísticos.
    char code2[10]; // variável do código da cidade na carta.
    char cidade2[30]; // variável do nome da cidade.
    char estado2[5]; // variável do estado da cidade.

    // Campo de imput manual dos valores das variáveis.
  
    printf("Digite o Estado Referente a Carta 2:\n");
    scanf("%s", &estado2);
    printf("Digite o Código da Carta Referente a Carta 2:\n");
    scanf("%s", &code2);
    printf("Digite o Nome da Cidade Referente a Carta 2:\n");
    scanf("%s", &cidade2);
    printf("Digite o Numero de Habitantes Referente a Carta 2:\n");
    scanf("%d", &população2);
    printf("Digite a Área da Cidade em km Referente a Carta 2:\n");
    scanf("%f", &area2);
    printf("Digite o PIB da Cidade Referente a Carta 2:\n");
    scanf("%f", &pib2);
    printf("Digite o Número de Pontos Turísticos Referente a Carta 2:\n");
    scanf("%d", &turism2);


    //Apresentação dos dados da Carta 02

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", code2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", população2);
    printf("Área: %f km²\n", area2);
    printf("PIB: R$%f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turism2);

}