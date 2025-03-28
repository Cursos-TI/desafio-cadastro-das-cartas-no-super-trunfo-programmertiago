#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    printf("Desafio Super Trunfo!\n");
    printf("Cadastro de Cartas:\n");

    char codigo_da_cidade [50] = "H04";
    char nome_da_cidade [50] = "Manaus";
    int populacao = 1000;
    float area = 1000.1;
    float PIB = 1000.1;
    int pontos_turisticos = 1;

    printf("Digite o Código da Cidade: ");
    scanf("%s", codigo_da_cidade);
    printf("Código da cidade: %s\n", codigo_da_cidade);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nome_da_cidade);
    printf("Nome da cidade: %s\n", nome_da_cidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);
    printf("População: %d\n", populacao);

    printf("Digite a Área: ");
    scanf("%f", &area),
    printf("Área: %.2f\n", area);

    printf("Digite o PIB: ");
    scanf(" %f", &PIB),
    printf("PIB: %.2f\n", PIB);

    printf("Digite os Pontos Turísticos: ");
    scanf(" %d", &pontos_turisticos),
    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
