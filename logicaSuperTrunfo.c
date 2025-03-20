#include <stdio.h>

int main(){ 
    
    //declaração das variaveis.
    char estado1, estado2, codigo1[5], codigo2[5], cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    int pontosturisticos1,pontosturisticos2; 
    float area1, area2, pib1, pib2; 

    //declaração das variaveis para os calculos.
    float dens_populacional1, dens_populacional2, pib_per_capita1, pib_per_capita2, pib1c, pib2c;
    float superPoder1,superPoder2;

    /* Apresentação do sistema e entrada de dados pelo usuário. */ 
    printf("Bem vindo ao Super Trunfo: Paises\n");
    printf("___________________________________\n");

    printf("------------\n");
    printf("CARTA n° 1:\n");
    printf("------------\n");

    printf("Digite uma letra de 'A' a 'H' para representar seu estado.\n"); 
    scanf(" %c", &estado1);

    printf("Digite o Código de sua carta (use a letra do seu estado seguida de um numero de '01' a '04').\n"); 
    scanf(" %s", codigo1);
    
    printf("Digite o nome da Cidade.\n"); 
    getchar();
    fgets(cidade1,sizeof(cidade1), stdin);

    printf("Digite a População de Sua Cidade.\n");
    scanf(" %lu", &populacao1);
 
    printf("Digite a Área de Sua Cidade.\n");
    scanf(" %f", &area1);
    
    printf("Digite o PIB de Sua Cidade (em Bilhões).\n");
    scanf(" %f", &pib1);

    printf("Digite o Número de Pontos Turísticos de Sua Cidade.\n");
    scanf(" %d", &pontosturisticos1); 

    printf("------------\n");
    printf("CARTA n° 2:\n");
    printf("------------\n");

    printf("Digite uma letra de 'A' a 'H' para representar seu estado.\n"); 
    scanf(" %c", &estado2);

    printf("Digite o Código de sua carta (use a letra do seu estado seguida de um numero de '01' a '04').\n"); 
    scanf(" %s", codigo2);
    
    printf("Digite o nome da Cidade.\n"); 
    getchar();
    fgets(cidade2,sizeof(cidade2), stdin);

    printf("Digite a População de Sua Cidade.\n");
    scanf(" %lu", &populacao2);
 
    printf("Digite a Área de Sua Cidade.\n");
    scanf(" %f", &area2);
    
    printf("Digite o PIB de Sua Cidade (em Bilhoes).\n");
    scanf(" %f", &pib2);

    printf("Digite o Número de Pontos Turísticos de Sua Cidade.\n");
    scanf(" %d", &pontosturisticos2);

    //atribuindo os calculos as variaveis
    /*Transformando o numero digitado pelo usuario em um numero com as casas decimais equivalentes a 1 bilhão e atribuindo a variavel "pib1c, pib2c", facilitando o calculo e a impressão ao final do programa.*/
    pib1c = pib1 * 1e9;
    pib2c = pib2 * 1e9;

    /*calculando a densidade populacional de ambas as cartas.*/
    dens_populacional1 = (float) populacao1 / area1;
    dens_populacional2 = (float) populacao2 / area2;

    /*calculando o PIB per capita de ambas as cartas.*/
    pib_per_capita1 = pib1c / (float) populacao1;
    pib_per_capita2 = pib2c / (float) populacao2;

    // Calculo do super poder
    superPoder1 = populacao1 + area1 + pib1c + pontosturisticos1 + pib_per_capita1 + (1.0/ dens_populacional1);
    superPoder2 = populacao2 + area2 + pib2c + pontosturisticos2 + pib_per_capita2 + (1.0/ dens_populacional2);

    // Comparando e apresentando resultado da comparação
    printf("\n");
    printf("---------------------\n");
    printf("Comparação das Cartas\n");
    printf("\n");
    printf("Atributo: População\n");
    printf("---------------------\n");
    printf("\n");

    if(populacao1 > populacao2){
        printf("Carta 1 é a Vencedora, Parabens!! %s (%lu).", cidade1, populacao1);
    } else {
        printf("Carta 2 é a Vencedora, Parabens!! %s (%lu).A", cidade2, populacao2);
    }

    //encerra o programa.
    return 0;

}