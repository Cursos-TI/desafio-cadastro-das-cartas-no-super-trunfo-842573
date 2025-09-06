#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    printf("Desafio cadastro das cartas:\n");

    char estado carta1, estado carta2;
    char codigo carta1, codigo carta2;
    char nome cidade carta1, nome cidade carta2;
    int populacao carta1, populacao carta2;
    float area em quilometos quadrado carta1, area em quilometros quadrado carta2;
    float pib carta1, pib carta2;
    int numeros pontos turisticos carta1, numeros pontos turisticos carta2;

    printf("\nDigite o estado carta1", "Digite o estado carta2");
    scanf("%c", &carta1->estado, &carta2->estado);

    printf("Digite o codigo carta1", "Digite o codigo carta2");
    scanf("%s", carta1->codigo, carta2->codigo);

    printf("Digite o nome cidade carta1", "Digite o nome cidade carta2");
    scanf("%s", carta1->cidade, carta2->cidade);

    printf("Digite a populacao da cidade carta1", "Digite a populacao da cidade carta2");
    scanf("%d", carta1->populacao, carta2->populacao);

    printf("Digite a area em quilometros quadrados carta1", "Digite a area em quilometros quadrados carta2");
    scanf("%f", carta1->area, carta2->area);

    printf("Digite o pib carta1","Digite o pib carta2");
    scanf("%f", carta1->pib, carta2>pib);

    printf("Digite o numero dos pontos turisticos carta1", "Digite o nome dos pontos turisticos carta2");
    scanf("%d", &carta1->pontos turisticos, carta2->pontos turisticos);

    int main(){
        print Desafio cadastro cartas1, carta2;

        print("Insira os dados da primeira carta:");
        lerCarta(&carta1);

        printf("\nInsiraos dados da segunda carta:");
        lerCarta(&carta2);

        printf("\n\nDados da primeira carta:\n");
        printf("Estado: %c\nCodigo: %s\nCidade: %sPopulacao: %d\n", carta1.estado, carta1.codigo, carta1.cidade, carta1.populacao, carta1.area em metros quadrados, carta1.pib, carta1.pontos turisticos);

        printf("\nDados da segunda carta:\n");
        printf("Estado: %c\nCodigo: %s\nCidade: %s\nPopulacao: %d\n", carta2.estado, carta2.codigo, carta2.cidade, carda2.populacao, carta2.area em metros quadrados, carta2.pib, carta2.pontos turisticos);

        return 0;


    }

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
