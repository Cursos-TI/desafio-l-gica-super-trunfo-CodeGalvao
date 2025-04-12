#include <stdio.h>

int main(){

    //Definindo a estrutura da primeira carta

    char estado, estado_1;
    char codigo[5], codigo_1[5];// Exemplo: "A01", "B02"
    char nomecidade[50],nomecidade_1[50];
    unsigned long int populacao, populacao_1;
    float area, pib, densidade, capita;
    float area_1, pib_1, densidade_1, capita_1;
    int pontosturisticos,pontosturisticos_1;
    int escolha;
    float poder,poder_1;

    // Dado da Carta 1

    printf("Digite o Estado 1 (A-H): ");
    scanf(" %c", &estado);

    printf("Digite o código da Carta 1 (Ex: A01, B02): ");
    scanf("%s", codigo);

    printf("Digite o nome da Cidade 1: ");
    scanf(" %[^\n]", nomecidade);

    printf("Digite a população 1 : ");
    scanf("%lu", &populacao);

    printf("Digite a área (km²) 1: ");
    scanf("%f", &area);

    printf("Digite o PIB 1 (em bilhões de reais): ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos 1: ");
    scanf("%d", &pontosturisticos);

    // Calculos Carta 1

    densidade = (float)populacao / area; // Cálculo da Densidade populacional
    capita = (pib * 1e9) / populacao; // Converte PIB para reais e divide pela população
    poder = (1/densidade) + populacao + area + pib + pontosturisticos + capita; // Calculo do Poder

    printf("----- Carta 2 ------- \n");

    // Dados da Carta 2
    printf("Digite o Estado 2 (A-H): ");
    scanf(" %c", &estado_1); 
    
    printf("Digite o código da Carta 2 (Ex: A01, B02): ");
    scanf("%s", codigo_1);

    printf("Digite o nome da Cidade 2: ");
    scanf(" %[^\n]", nomecidade_1); 
    
    printf("Digite a população 2: ");
    scanf("%lu", &populacao_1);
    
    printf("Digite a área (km²) 2: ");
    scanf("%f", &area_1);
    
    printf("Digite o PIB 2 (em bilhões de reais): ");
    scanf("%f", &pib_1);
    
    printf("Digite o número de pontos turísticos 2: ");
    scanf("%d", &pontosturisticos_1);
    
    // Calculos Carta 2

    densidade_1 = (float)populacao_1 / area_1; // Cálculo da Densidade populacional
    capita_1 = (pib_1 * 1e9) / populacao_1; // Converte PIB para reais e divide pela população
    poder_1 = (1/densidade_1) + populacao_1 + area_1 + pib_1 + pontosturisticos_1 + capita_1; // Calculo do Poder

    // Exibição das Cartas

    printf("\n----- Carta 1 -----\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", nomecidade);
    printf("População: %lu Habitantes\n",populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f Bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontosturisticos);
    printf ("Densidade Populacional: %.2f hab/km² \n",densidade);
    printf("PIB per Capita: R$ %.2f\n",capita);
    printf("-----------------\n");

    printf("\n----- Carta 2 -----\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Cidade: %s\n", nomecidade_1);
    printf("População: %lu Habitantes\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f Bilhões de reais\n", pib_1);
    printf("Pontos Turísticos: %d\n", pontosturisticos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_1);
    printf("PIB per Capita: R$ %.2f\n", capita_1);
    printf("-------------------\n");

    // Comparativo das Cartas 
    printf("Comparativo de atributo (Escolha apenas 1)\n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Pontos Turísticos \n");
    printf("5. Densidade Populacional\n"); 
    printf("6. PIB per Capita \n");
    printf("7. Super Poder \n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    printf("\n----- Hora Do Duelo! -----\n");

    switch (escolha)
    {
    case 1:
    printf("Carta - 1 %s: %lu \n", nomecidade,populacao);
    printf("Carta - 2 %s: %lu \n", nomecidade_1,populacao_1);

    if (populacao > populacao_1) {
        printf("A Carta 1 (%s) Venceu !\n", nomecidade);
    } else if (populacao < populacao_1) {
        printf("A Carta 2 (%s) Venceu !\n", nomecidade_1);
    } else {
        printf("Empatou !\n");
    }
        break;

    case 2:
    printf("Carta - 1 %s: %.2f \n", nomecidade,area);
    printf("Carta - 2 %s: %.2f \n", nomecidade_1,area_1);
    
    if (area > area_1){
        printf("A Carta 1 (%s) Venceu !\n",nomecidade);
    }else if (area < area_1){
        printf("A Carta 2 (%s) Venceu !\n",nomecidade_1);
    } else {
        printf("Empatou !\n");
    }
        break;

    case 3:
    printf("Carta - 1 %s: %.2f \n", nomecidade, pib);
    printf("Carta - 2 %s: %.2f \n", nomecidade_1, pib_1);
    
    if (pib > pib_1) {
        printf("A Carta 1 (%s) Venceu !\n", nomecidade);
    } else if (pib < pib_1) {
        printf("A Carta 2 (%s) Venceu !\n", nomecidade_1);
    } else {
        printf("Empatou !\n");
    }
    break;

    case 4:
    printf("Carta - 1 %s: %d \n", nomecidade, pontosturisticos);
    printf("Carta - 2 %s: %d \n", nomecidade_1, pontosturisticos_1);
    
    if (pontosturisticos > pontosturisticos_1) {
        printf("A Carta 1 (%s) Venceu !\n", nomecidade);
    } else if (pontosturisticos < pontosturisticos_1) {
        printf("A Carta 2 (%s) Venceu !\n", nomecidade_1);
    } else {
        printf("Empatou !\n");
    }
    break;

    case 5:
    printf("Carta - 1 %s: %.2f \n", nomecidade, densidade);
    printf("Carta - 2 %s: %.2f \n", nomecidade_1, densidade_1);
    
    if (densidade < densidade_1) {
        printf("A Carta 1 (%s) Venceu !\n", nomecidade);
    } else if (densidade > densidade_1) {
        printf("A Carta 2 (%s) Venceu !\n", nomecidade_1);
    } else {
        printf("Empatou !\n");
    }
    break;

    case 6:
    printf("Carta - 1 %s: %.2f \n", nomecidade, capita);
    printf("Carta - 2 %s: %.2f \n", nomecidade_1, capita_1);
    
    if (capita > capita_1) {
        printf("A Carta 1 (%s) Venceu !\n", nomecidade);
    } else if (capita < capita_1) {
        printf("A Carta 2 (%s) Venceu !\n", nomecidade_1);
    } else {
        printf("Empatou !\n");
    }
    break;

    case 7:
    printf("Carta - 1 %s: %.2f \n", nomecidade, poder);
    printf("Carta - 2 %s: %.2f \n", nomecidade_1, poder_1);
    
    if (poder > poder_1) {
        printf("A Carta 1 (%s) Venceu !\n", nomecidade);
    } else if (poder < poder_1) {
        printf("A Carta 2 (%s) Venceu !\n", nomecidade_1);
    } else {
        printf("Empatou !\n");
    }
    break;

    default:
    printf("Opção inválida !\n");
    break;
    }

    return 0;
}