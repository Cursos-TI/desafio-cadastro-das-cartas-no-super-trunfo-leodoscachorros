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
    scanf("%49s", estado);  

    printf("Digite o código da carta:\n");
    scanf(" %c", &codigo_da_carta);  

    printf("Digite o nome da cidade:\n");
    scanf("%49s", nome_da_cidade);  

    printf("Digite a população:\n");
    scanf("%d", &populacao);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_em_km2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &numero_de_pontos_turisticos);

   
   
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %c\n", codigo_da_carta);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área em km²: %.2f\n", area_em_km2);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos);

    return 0;
}