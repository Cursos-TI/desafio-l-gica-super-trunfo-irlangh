#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){ 
    
    // Declaração das variáveis
    char estado1, estado2, codigo1[5], codigo2[5], cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2; 
    float area1, area2, pib1, pib2; 

    // Variáveis para cálculos
    float dens_populacional1, dens_populacional2, pib1c, pib2c;
    float soma1, soma2, valor1_a = 0, valor2_a = 0, valor1_b = 0, valor2_b = 0;

    // Entrada de dados
    printf("Bem vindo ao Super Trunfo: Cidades!\n");
    printf("_\n");

    printf("------------\nCARTA n° 1:\n------------\n");
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

    printf("------------\nCARTA n° 2:\n------------\n");
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

    // Arrays com os valores dos atributos
    float atributos1[5] = {populacao1, area1, pib1, pontosturisticos1, dens_populacional1};
    float atributos2[5] = {populacao2, area2, pib2, pontosturisticos2, dens_populacional2};

    // Nomes dos atributos
    char* nomes_atributos[5] = {"População", "Área", "PIB", "Pontos Turísticos", "Densidade Demográfica"};

    // Escolha dos atributos
    int opcao1, opcao2;

    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
    printf("Digite o número da primeira opção: ");
    scanf("%d", &opcao1);

    printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
    for(int i = 1; i <= 5; i++){
        if(i != opcao1){
            printf("%d - %s\n", i, nomes_atributos[i - 1]);
        }
    }
    printf("Digite o número da segunda opção: ");
    scanf("%d", &opcao2);

    // Atribuindo os valores de acordo com as opções usando switch e operador ternário
    switch(opcao1) {
        case 1:
         valor1_a = atributos1[0]; valor1_b = atributos2[0]; 
        break;
        case 2:
         valor1_a = atributos1[1]; valor1_b = atributos2[1]; 
        break;
        case 3:
         valor1_a = atributos1[2]; valor1_b = atributos2[2]; 
        break;
        case 4: 
         valor1_a = atributos1[3]; valor1_b = atributos2[3]; 
        break;
        case 5:
         valor1_a = atributos1[4]; valor1_b = atributos2[4];
        break;
        default:
         printf("Opção inválida!\n");
        break;
    }

    switch(opcao2) {
        case 1:
         valor2_a = atributos1[0]; valor2_b = atributos2[0];
        break;
        case 2:
         valor2_a = atributos1[1]; valor2_b = atributos2[1]; 
        break;
        case 3:
         valor2_a = atributos1[2]; valor2_b = atributos2[2]; 
        break;
        case 4: 
         valor2_a = atributos1[3]; valor2_b = atributos2[3]; 
        break;
        case 5: 
         valor2_a = atributos1[4]; valor2_b = atributos2[4]; 
        break;
        default:
         printf("Opção inválida!\n");
        break;
    }

    soma1 = valor1_a + valor2_a;
    soma2 = valor1_b + valor2_b;

    // Impressão
    printf("\n===== RESULTADO DA COMPARAÇÃO =====\n");
    printf("Cidade 1: %s\n", cidade1);
    printf("Cidade 2: %s\n", cidade2);

    printf("\nValores da Cidade 1:\n");
    printf("Atributo %d (%s): %.2f\n", opcao1, nomes_atributos[opcao1 - 1], valor1_a);
    printf("Atributo %d (%s): %.2f\n", opcao2, nomes_atributos[opcao2 - 1], valor2_a);

    printf("\nValores da Cidade 2:\n");
    printf("Atributo %d (%s): %.2f\n", opcao1, nomes_atributos[opcao1 - 1], valor1_b);
    printf("Atributo %d (%s): %.2f\n", opcao2, nomes_atributos[opcao2 - 1], valor2_b);

    printf("\nSoma dos Atributos:\n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    // Resultado final
    if (soma1 > soma2) {
        printf("\nVencedora: %s\n", cidade1);
    } else if (soma2 > soma1) {
        printf("\nVencedora: %s\n", cidade2);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}