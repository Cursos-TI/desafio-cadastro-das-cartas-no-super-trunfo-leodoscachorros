#include <stdio.h>

int main(){

    printf("desafio super trunfo!\n");
    printf("novo comit\n");

    char estado[50];
    char codigo_da_carta;
    char nome_da_cidade[50];
    int populacao;
    float area_em_km2;
    float pib;
    int numero_de_pontos_turisticos;

    printf("Digite seu estado:\n");
    scanf("%50c", estado);  

    printf("Digite o código da carta:\n");
    scanf(" %c", &codigo_da_carta);  

    printf("Digite o nome da cidade:\n");
    scanf("%c", nome_da_cidade);  

    printf("Digite a população:\n");
    scanf("%d", &populacao);

    printf("Digite a área em km²:\n");
    scanf("%2.f", &area_em_km2);

    printf("Digite o PIB:\n");
    scanf("%2.f", &pib);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &numero_de_pontos_turisticos);

   
   
    printf("Estado: %c\n", estado);

    printf("Código da Carta: %c\n", codigo_da_carta);
     
    printf("Nome da Cidade: %c\n", nome_da_cidade);

    printf("População: %d\n", populacao);

    printf("Área em km²: %f\n", area_em_km2);

    printf("PIB: %f\n", pib);

    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos);

    return 0;
}