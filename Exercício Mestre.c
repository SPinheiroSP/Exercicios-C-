#include <stdio.h>

int main() {

    // Variáveis referente a carta 1;
    
    unsigned long int população1; // variável de numero de habitantes;
    double area1; // variável da area da cidade;
    double pib1; // variável ddo pib da cidade;
    int turism1; // variável de numero de pontos turísticos;
    char code1[10]; // variável do código da cidade na carta;
    char cidade1[30]; // variável do nome da cidade;
    char estado1[5]; // variável do estado da cidade;
    float densidade1, pibpercapita1; // variável de densidade populacional e renda per cápita;
    float inversodensidade1; // variável de inverso da densidade populacional;
    double superpoder1; // variável de superpoder da carta1;

    // campo de imput manual dos valores das variáveis;
  
    printf("Digite o Estado Referente a Carta 1:\n");
    scanf("%s", &estado1);
    printf("Digite o Código da Carta Referente a Carta 1:\n");
    scanf("%s", &code1);
    printf("Digite o Nome da Cidade Referente a Carta 1:\n");
    scanf("%s", &cidade1);
    printf("Digite o Numero de Habitantes Referente a Carta 1:\n");
    scanf("%u", &população1);
    printf("Digite a Área da Cidade em km Referente a Carta 1:\n");
    scanf("%lf", &area1);
    printf("Digite o PIB da Cidade Referente a Carta 1:\n");
    scanf("%lf", &pib1);
    printf("Digite o Número de Pontos Turísticos Referente a Carta 1:\n");
    scanf("%d", &turism1);

    //calculo para densidade e renda percápita;
    densidade1 = (população1 / area1);
    pibpercapita1 = (pib1 / população1);

    //calculo para inverso da densidade;
    inversodensidade1 = (1/densidade1);

    //calculo do superpoder;
    superpoder1 = (area1+pib1+população1+turism1+pibpercapita1+inversodensidade1);
    
    //Apresentação dos dados da Carta 01;

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", code1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", população1);
    printf("Área: %.2lf km²\n", area1);
    printf("PIB: R$%.2lf\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turism1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Cápita: R$%.2f\n", pibpercapita1);
    printf("Super Poder: %.2lf\n", superpoder1);

    // Variáveis referente a carta 02;
    
    unsigned long int população2; // variável de numero de habitantes;
    float area2; // variável da area da cidade,
    float pib2; // variável ddo pib da cidade;
    int turism2; // variável de numero de pontos turísticos;
    char code2[10]; // variável do código da cidade na carta;
    char cidade2[30]; // variável do nome da cidade;
    char estado2[5]; // variável do estado da cidade;
    float densidade2, pibpercapita2; // variável de densidade populacional e renda per cápita;
    float inversodensidade2; // variável de inverso da densidade populacional;
    double superpoder2; // variável de superpoder da carta2;

    // Campo de imput manual dos valores das variáveis;
  
    printf("Digite o Estado Referente a Carta 2:\n");
    scanf("%s", &estado2);
    printf("Digite o Código da Carta Referente a Carta 2:\n");
    scanf("%s", &code2);
    printf("Digite o Nome da Cidade Referente a Carta 2:\n");
    scanf("%s", &cidade2);
    printf("Digite o Numero de Habitantes Referente a Carta 2:\n");
    scanf("%u", &população2);
    printf("Digite a Área da Cidade em km Referente a Carta 2:\n");
    scanf("%f", &area2);
    printf("Digite o PIB da Cidade Referente a Carta 2:\n");
    scanf("%f", &pib2);
    printf("Digite o Número de Pontos Turísticos Referente a Carta 2:\n");
    scanf("%d", &turism2);

    //calculo para densidade e renda percápita;
    densidade2 = (população2 / area2);
    pibpercapita2 = (pib2 / população2);

    //calculo para inverso da densidade;
    inversodensidade2 = (1/densidade2);

    //calculo do superpoder;
    superpoder2 = (area2+pib2+população2+turism2+pibpercapita2+inversodensidade2);

    //Apresentação dos dados da Carta 02;

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", code2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", população2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$%.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turism2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Cápita: R$%.2f\n", pibpercapita2);
    printf("Super Poder: %.2lf\n", superpoder2);

    // comparação entre as cartas para identificar vencedora;

    int população = população1 > população2;
    int area = area1 > area2;
    int pib = pib1 > pib2;
    int Pontosturísticos = turism1 > turism2;
    int densidade = inversodensidade1 > inversodensidade2;
    int pibpercapita = pibpercapita1 > pibpercapita2;
    int superpoder = superpoder1 > superpoder2;

    printf("População: %d\n", população);
    printf("Área: %d\n", area);
    printf("PIB: %d\n", pib);
    printf("Pontos Turísticos: %d\n", Pontosturísticos);
    printf("Densidade Populacional: %d\n", densidade);
    printf("PIB Per Capita: %d\n", pibpercapita);
    printf("Super Poder: %d\n", superpoder);


    return 0;

}