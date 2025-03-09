#include <stdio.h>

int main() {
    printf("Desafio Xaderz\n");
    printf("Novo Comit\n");

    char estado[51];  // Alocando espaço para a string estado
    char codigo_da_carta;
    char nome_da_cidade[100];  // Alocando espaço para a string nome_da_cidade
    int populacao;
    float area_em_km2;
    float pib;
    int numero_de_pontos_turisticos;

    printf("Digite o estado:\n");
    scanf("%50s", estado);  // Usando %50s para ler uma string com até 50 caracteres

    printf("Digite o código da carta:\n");
    scanf(" %c", &codigo_da_carta);  

    printf("Digite o nome da cidade:\n");
    scanf("%99s", nome_da_cidade);  // Usando %99s para ler uma string com até 99 caracteres

    printf("Digite a população:\n");
    scanf("%d", &populacao);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_em_km2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);  // Usando %f para ler um valor de ponto flutuante

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &numero_de_pontos_turisticos);

    printf("Estado: %s\n", estado);  // Usando %s para imprimir uma string
    printf("Código da carta: %c\n", codigo_da_carta);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área em km²: %.2f\n", area_em_km2);  // Usando %.2f para imprimir um valor de ponto flutuante com 2 casas decimais
    printf("PIB: %.2f\n", pib);  // Usando %.2f para imprimir um valor de ponto flutuante com 2 casas decimais
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos);

    return 0;
}