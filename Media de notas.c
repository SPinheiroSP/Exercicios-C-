#include <stdio.h>

int main() {

// Variaveis notas e média;

int nota1, nota2, nota3;
float media;

// Entrada das 3 notas;

printf("--Programa de Calculo de média---\n");

printf("Digite a primeira nota:\n");
scanf("%d", &nota1);

printf("Digite a segunda nota:\n");
scanf("%d", &nota2);

printf("Digite a terceira nota:\n");
scanf("%d", &nota3);

media = (float)(nota1+nota2+nota3)/3;

printf("O valor da média é: %.1f\n", media);

return 0;

}