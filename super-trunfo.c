#include <stdio.h>;

int main(){

    //DECLARANDO VARIÁVEIS
    char estado1, estado2, cod1[20], cod2[20], cidade1[20], cidade2[20];
    int pop1, pop2, pontosTur1, pontosTur2;
    float area1, pib1, area2, pib2, densidade1, densidade2, pibPerCapita1, pibPerCapita2;
    

    //BOAS VINDAS AO PROGRAMA
    printf("Bem vindo(a) ao Super Trunfo!\n\n");
    printf("Preencha os requisitos abaixo\n\n\n");

    //SALVANDO DADOS DA CARTA 01
    printf("----------------- PREENCHA COM OS DADOS DA CARTA 01 -----------------\n");

    printf("Digite a o NOME: ");
    scanf("%s", cidade1);

    printf("Digite o ESTADO: ");
    scanf(" %c", &estado1);

    printf("Digite o CÓDIGO: ");
    scanf("%s", cod1);

    printf("Digite o POPULAÇÃO: ");
    scanf("%i", &pop1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite a QUANTIDADE de pontos turísticos: ");
    scanf("%i", &pontosTur1);

    printf("Digite a ÁREA: ");
    scanf("%f", &area1);

    // CÁLCULO DE DENSIDADE E PIB PER CAPITA DA CARTA 01
    densidade1 = (float) pop1 / area1;
    pibPerCapita1 = (float) pib1 / pop1 * 1000000000;
    
    printf("\n\n\n");

    

    //SALVANDO DADOS DA CARTA 02
    printf("----------------- PREENCHA COM OS DADOS DA CARTA 02 -----------------\n");

    printf("Digite o NOME: ");
    scanf("%s", cidade2);

    printf("Digite o ESTADO: ");
    scanf(" %c", &estado2);

    printf("Digite o CÓDIGO: ");
    scanf("%s", cod2);

    printf("Digite o POPULAÇÃO: ");
    scanf("%i", &pop2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a QUANTIDADE de pontos turísticos: ");
    scanf("%i", &pontosTur2);

    printf("Digite a ÁREA: ");
    scanf("%f", &area2);

    // CÁLCULO DE DENSIDADE E PIB PER CAPITA DA CARTA 02
    densidade2 = (float) pop2 / area2;
    pibPerCapita2 = (float) pib2 / pop2 * 1000000000;

    printf("\n\n\n");



    // MOSTRANDO DADOS DA CARTA 01
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", cod1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %i\n", pop1);
    printf("Área: %.2fkm²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %i\n", pontosTur1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n\n\n");


    // MOSTRANDO DADOS DA CARTA 02
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", cod2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %i\n", pop2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %i\n", pontosTur2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

}