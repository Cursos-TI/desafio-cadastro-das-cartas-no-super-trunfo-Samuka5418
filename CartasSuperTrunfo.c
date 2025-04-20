#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    char estado1, estado2;
    char codigo1 [4], codigo2 [4];
    char cidade1 [20], cidade2 [20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float pibcapital1, pibcapital2;

    printf("Cadastro das Cartas do Super Trunfo\n\n");

    printf("------------ Carta1 ------------\n\n");

    printf("Digite uma letra do 'A' a 'H', Representara o Estado:\n");
    scanf(" %c", &estado1);

    printf("Digite a Letra do Estado, Seguida de um Numero de 01 a 04:\n");
    scanf("%s", &codigo1);

    printf("Digite o Nome da cidade:\n");
    scanf("%s", &cidade1);

    printf("Digite a População:\n");
    scanf("%d", &populacao1);

    printf("Digite a Área:\n");
    scanf("%f", &area1);

    printf("Digite o Pib:\n");
    scanf("%f", &pib1);

    printf("Digite a Quantidade de Pontos Turístico:\n");
    scanf("%d", &pontos1);

    densidade1 = (float) populacao1 / area1;
    pibcapital1 = (float) populacao1 / pib1;

    printf("\n---------- Informações da Sua Carta 1----------\n\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("Pib: %f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Dencidade Populacional: %f\n", densidade1);
    printf("Pib per Capital: %f\n\n", pibcapital1);

    // CARTA 2 ---------------------------------------------------------------
    printf("------------ Carta2 ------------\n\n");

    printf("Digite uma letra do 'A' a 'H', Representara o Estado:\n");
    scanf(" %c", &estado2);

    printf("Digite a Letra do Estado, Seguida de um NÚmero de 01 a 04:\n");
    scanf("%s", &codigo2);

    printf("Digite o Nome da cidade:\n");
    scanf("%s", &cidade2);

    printf("Digite a População:\n");
    scanf("%d", &populacao2);

    printf("Digite a Área:\n");
    scanf("%f", &area2);

    printf("Digite o Pib:\n");
    scanf("%f", &pib2);

    printf("Digite a Quantidade de Pontos Turístico:\n");
    scanf("%d", &pontos2);

    densidade2 = (float) populacao2 / area2;
    pibcapital2 = (float) populacao2 / pib2;

    printf("\n---------- Informações da Sua Carta 2----------\n\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("Pib: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Dencidade Populacional: %f\n", densidade2);
    printf("Pib per Capital: %f\n", pibcapital2);


    return 0;
}
