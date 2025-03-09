#include <stdio.h>

int main() {
    printf("Desafio Xaderz\n");
    printf("Novo Comit\n");

    char estado[51]; 
    char codigo_da_carta[10];
    char nome_da_cidade[100];  
    int populacao;
    float area_em_km2;
    float pib;
    int numero_de_pontos_turisticos;

    printf("Digite o estado:\n");
    scanf("%50s", estado);  

    printf("Digite o código da carta:\n");
    scanf("%9s", codigo_da_carta);  

    printf("Digite o nome da cidade:\n");
    scanf("%99s", nome_da_cidade);  

    printf("Digite a população:\n");
    scanf("%d", &populacao);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_em_km2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &numero_de_pontos_turisticos);

    printf("Estado: %s\n", estado);  
    printf("Código da carta: %s\n", codigo_da_carta);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área em km²: %.2f\n", area_em_km2); 
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos);

    return 0;
}

