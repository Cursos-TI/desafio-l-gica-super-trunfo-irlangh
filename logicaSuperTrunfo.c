#include <stdio.h>
#include <stdlib.h>

int main(){ 
    
    //declaração das variáveis
    char estado1, estado2, codigo1[5], codigo2[5], cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2; 
    float area1, area2, pib1, pib2; 

    //variáveis para os cálculos
    float dens_populacional1, dens_populacional2, pib_per_capita1, pib_per_capita2, pib1c, pib2c;

    // Entrada de dados (mantida igual ao desafio anterior)
    printf("Bem vindo ao Super Trunfo: Cidades!\n");
    printf("___________________________________\n");

    printf("------------\n");
    printf("CARTA n° 1:\n");
    printf("------------\n");

    printf("Digite uma letra de 'A' a 'H' para representar seu estado: ");
    scanf(" %c", &estado1);
    
    printf("Digite o Código da carta (ex: A01): ");
    scanf(" %s", codigo1);

    printf("Digite o nome da Cidade: ");
    scanf(" %s", cidade1);

    printf("Digite a População: ");
    scanf(" %lu", &populacao1);

    printf("Digite a Área (km²): ");
    scanf(" %f", &area1);
    
    printf("Digite o PIB (em Bilhões): ");
    scanf(" %f", &pib1);
    
    printf("Digite o Número de Pontos Turísticos: ");
    scanf(" %d", &pontosturisticos1); 

    printf("------------\n");
    printf("CARTA n° 2:\n");
    printf("------------\n");

    printf("Digite uma letra de 'A' a 'H' para representar seu estado: ");
    scanf(" %c", &estado2);

    printf("Digite o Código da carta (ex: B03): ");
    scanf(" %s", codigo2);

    printf("Digite o nome da Cidade: ");
    scanf(" %s", cidade2);

    printf("Digite a População: ");
    scanf(" %lu", &populacao2);

    printf("Digite a Área (km²): ");
    scanf(" %f", &area2); 

    printf("Digite o PIB (em Bilhões): ");
    scanf(" %f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf(" %d", &pontosturisticos2);

    // Cálculos
    pib1c = pib1 * 1e9;
    pib2c = pib2 * 1e9;

    dens_populacional1 = (float) populacao1 / area1;
    dens_populacional2 = (float) populacao2 / area2;

    pib_per_capita1 = pib1c / (float) populacao1;
    pib_per_capita2 = pib2c / (float) populacao2;

    // Menu interativo, usuario escolhe o atributo que quer comparar
    int opcao;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite o número da opção desejada: ");
    scanf("%d", &opcao);

    printf("\n===== RESULTADO DA COMPARAÇÃO =====\n");
    printf("Cidade 1: %s\n", cidade1);
    printf("Cidade 2: %s\n", cidade2);

    //uso do Switch para comparar e apresentar os atributos escolhidos
    switch(opcao){
        case 1:
            printf("Atributo: População\n");
            printf("%s: %lu habitantes\n", cidade1, populacao1);
            printf("%s: %lu habitantes\n", cidade2, populacao2);
            if(populacao1 > populacao2){
                printf("Vencedora: %s\n", cidade1);
            } else if(populacao2 > populacao1){
                printf("Vencedora: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            if(area1 > area2){
                printf("Vencedora: %s\n", cidade1);
            } else if(area2 > area1){
                printf("Vencedora: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: R$ %.2f bilhões\n", cidade1, pib1);
            printf("%s: R$ %.2f bilhões\n", cidade2, pib2);
            if(pib1 > pib2){
                printf("Vencedora: %s\n", cidade1);
            } else if(pib2 > pib1){
                printf("Vencedora: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", cidade1, pontosturisticos1);
            printf("%s: %d pontos\n", cidade2, pontosturisticos2);
            if(pontosturisticos1 > pontosturisticos2){
                printf("Vencedora: %s\n", cidade1);
            } else if(pontosturisticos2 > pontosturisticos1){
                printf("Vencedora: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", cidade1, dens_populacional1);
            printf("%s: %.2f hab/km²\n", cidade2, dens_populacional2);
            if(dens_populacional1 < dens_populacional2){
                printf("Vencedora: %s (menor densidade ganha!)\n", cidade1);
            } else if(dens_populacional2 < dens_populacional1){
                printf("Vencedora: %s (menor densidade ganha!)\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}
