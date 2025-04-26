#include <stdio.h>

int main()
 {
    
    char estado1, estado2;
    char codigo1[4], codigo2 [4];
    char cidade1 [20], cidade2 [20];
    unsigned int populacao1, populacao2;
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
    scanf(" %3s", codigo1);

    printf("Digite o Nome da cidade:\n");
    scanf(" %19s", cidade1);

    printf("Digite a População:\n");
    scanf("%u", &populacao1);

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
    printf("População: %u\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("Pib: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Dencidade Populacional: %.2f\n", densidade1);
    printf("Pib per Capital: %.2f\n\n", pibcapital1);

    // CARTA 2 ---------------------------------------------------------------
    printf("------------ Carta2 ------------\n\n");

    printf("Digite uma letra do 'A' a 'H', Representara o Estado:\n");
    scanf(" %c", &estado2);

    setbuf(stdin,NULL);

    printf("Digite a Letra do Estado, Seguida de um NÚmero de 01 a 04:\n");
    scanf(" %3s", codigo2);

    printf("Digite o Nome da cidade:\n");
    scanf(" %19s", cidade2);

    printf("Digite a População:\n");
    scanf("%u", &populacao2);

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
    printf("População: %u\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("Pib: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Dencidade Populacional: %.2f\n", densidade2);
    printf("Pib per Capital: %.2f\n", pibcapital2);

    float densidadeEcapital1;
    float densidadeEcapital2;

    densidadeEcapital1 = densidade1 + pibcapital1;
    densidadeEcapital2 = densidade2 + pibcapital2;

    float superpoder1;
    float superpoder2;

    superpoder1 = (float) (populacao1 + area1 + pib1 + pontos1 + pibcapital1) - densidade1;
    superpoder2 = (float) (populacao2 + area2 + pib2 + pontos2 + pibcapital2) - densidade2;

    printf("\nComparacao entre as cartas:\n");

    int resupopulacao, resuarea, resupib, resupontos, resudensidade, resulpibper, resulsuperpoder;

    resupopulacao = populacao1 > populacao2;
    resuarea = area1 > area2;
    resupib = pib1 > pib2;
    resupontos = pontos1 > pontos2;
    resudensidade = densidade1 > densidade2;
    resulpibper = pibcapital1 > pibcapital2;
    resulsuperpoder = superpoder1 > superpoder2;
    
    printf("\nResultado Populacao:%d\n",resupopulacao);
    printf("\nResultado Area:%d\n",resuarea);
    printf("\nResultado PiB:%d\n",resupib);
    printf("\nResultado Pontos turisticos:%d\n",resupontos);
    printf("\nResultado Densidade:%d\n",resudensidade);
    printf("\nResultado PiB Capital:%d\n",resulpibper);
    printf("\nResultado Supor poder:%d\n",resulsuperpoder);

    return 0;
}
