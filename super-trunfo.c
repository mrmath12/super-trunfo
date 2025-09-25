#include <stdio.h>;

int main(){

    //DECLARANDO VARIÁVEIS
    char estado1 = 'A', estado2 = 'B', cod1[20] = "A01", cod2[20] = "B02", cidade1[20] = "São Paulo", cidade2[20] = "Rio de Janeiro";
    unsigned long int pop1, pop2;
    float area1, pib1, area2, pib2, densidade1, densidade2, pibPerCapita1, pibPerCapita2, super1, super2;
    int pontosTur1, pontosTur2, itemComparado;
    
    
    //BOAS VINDAS AO PROGRAMA
    printf("Bem vindo(a) ao Super Trunfo!\n\n");
    printf("Preencha os requisitos abaixo\n\n\n");

    // SALVANDO DADOS DA CARTA 01
    printf("----------------- PREENCHA COM OS DADOS DA CARTA 01 -----------------\n");
/*
    printf("Digite a o NOME: ");
    scanf("%s", cidade1);

    printf("Digite o ESTADO: ");
    scanf(" %c", &estado1);

    printf("Digite o CÓDIGO: ");
    scanf("%s", cod1);
*/
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
    // pibPerCapita1 = (float) pib1 / pop1 * 1000000000;
    // super1 = (float) pop1 + area1 + pib1 + pontosTur1 + pibPerCapita1 + (1 / densidade1);
    
    printf("\n\n\n");

    

    // SALVANDO DADOS DA CARTA 02
    printf("----------------- PREENCHA COM OS DADOS DA CARTA 02 -----------------\n");

/*
    printf("Digite o NOME: ");
    scanf("%s", cidade2);

    printf("Digite o ESTADO: ");
    scanf(" %c", &estado2);

    printf("Digite o CÓDIGO: ");
    scanf("%s", cod2);
*/
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
    // pibPerCapita2 = (float) pib2 / pop2 * 1000000000;
    // super2 = (float) pop2 + area2 + pib2 + pontosTur2 + pibPerCapita2 + (1 / densidade2);


    printf("\n\n\n");



    // MOSTRANDO DADOS DA CARTA 01
/*
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", cod1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %li\n", pop1);
    printf("Área: %.2fkm²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %i\n", pontosTur1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
*/

    printf("\n\n\n");

    
    // MOSTRANDO DADOS DA CARTA 02
    
/*
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", cod2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %li\n", pop2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %i\n", pontosTur2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n\n\n", pibPerCapita2);
*/
    
    
   // Comparando as Cartas
/*
   printf("Comparação de Cartas:\n");
   printf("População: Carta 1 venceu (%i)\n", pop1 > pop2);
   printf("Área: Carta 1 venceu (%i)\n", area1 > area2);
   printf("PIB: Carta 1 venceu (%i)\n", pib1 > pib2);
   printf("Pontos Turísticos: Carta 1 venceu (%i)\n", pontosTur1 > pontosTur2);
   printf("Densidade Populacional: Carta 2 venceu (%i)\n", densidade1 < densidade2);
   printf("PIB per Capita: Carta 1 venceu (%i)\n", pibPerCapita1 > pibPerCapita2);
   printf("SUPER PODER: Carta 1 venceu (%i)\n\n", super1 > pop2 + area2 + pib2 + pontosTur2 + pibPerCapita2 + (1 / densidade2));
*/
   
  /*
        if (pop1 == 0 & pop2 == 0) {
        printf("Nenhuma das cidades têm habitantes!\n\n\n");
    } else if (pop1 < pop2) {
        printf("A carta 2 tem a população maior\n");
        printf("A carta 2 tem %li de população e a carta 1 tem %li.\n\n\n", pop2, pop1);

    } else if (pop1 == pop2) {
        printf("As cartas têm a mesma população!\n");
        printf("A carta 1 tem %li de população e a carta 2 tem %li.\n\n\n", pop1, pop2);
    } else if (pop1 > pop2) {
        printf("A carta 1 tem a população maior\n");
        printf("A carta 1 tem %li de população e a carta 2 tem %li.\n\n\n", pop1, pop2);
    }
    
    printf("Se quiser, pode testar todos os cenários!\n\n\n");
    */

    // COMPARAÇÃO INTERATIVA
    printf("----------- SELECIONAR COMPARAÇÂO -----------\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("--------------------------------------------\n");
    printf("Escolha qual item: ");
    scanf("%d", &itemComparado);

    switch (itemComparado) {
        case 1:
            if (pop1 > pop2) {
                printf("%s tem a população maior: %d x %d", cidade1, pop1, pop2);
            } else if (pop1 < pop2) {
                printf("%s tem a população maior: %d x %d", cidade2, pop2, pop1);
            } else if (pop1 == pop2) {
                printf("EMPATE! %s e %s tem a população igual: %d", cidade2, cidade1, pop1);                
            }
            break;
        case 2:
            if (area1 > area2) {
                printf("%s tem a área maior: %.2f x %.2f", cidade1, area1, area2);
            } else if (area1 < area2) {
                printf("%s tem a área maior: %.2f x %.2f", cidade2, area2, area1);
            } else if (area1 == area2) {
                printf("EMPATE! %s e %s tem a área igual: %.2f", cidade2, cidade1, area1);
            }
            break;
        case 3:
            if (pib1 > pib2) {
                printf("%s tem o PIB maior: %.2f x %.2f", cidade1, pib1, pib2);
            } else if (pib1 < pib2) {
                printf("%s tem o PIB maior: %.2f x %.2f", cidade2, pib2, pib1);
            } else if (pib1 == pib2) {
                printf("EMPATE! %s e %s tem o PIB igual: %.2f", cidade2, cidade1, pib1);
            }
            break;
        case 4:
            if (pontosTur1 > pontosTur2) {
                printf("%s tem mais pontos turísticos: %i x %i", cidade1, pontosTur1, pontosTur2);
            } else if (pontosTur1 < pontosTur2) {
                printf("%s tem mais pontos turísticos: %i x %i", cidade2, pontosTur2, pontosTur1);
            } else if (pontosTur1 == pontosTur2) {
                printf("EMPATE! %s e %s tem a mesma quantidade de pontos turísticos: %.2f", cidade2, cidade1, pontosTur1);
            }
            break;
        case 5:
            if (densidade1 < densidade2) {
                printf("%s tem a densidade demográfica menor: %.2f x %.2f", cidade1, densidade1, densidade2);
            } else if (densidade1 > densidade2) {
                printf("%s tem a densidade demográfica menor: %.2f x %.2f", cidade2, densidade2, densidade1);
            } else if (densidade1 == densidade2) {
                printf("EMPATE! %s e %s tem a densidade demográfica igual: %.2f", cidade2, cidade1, densidade1);
            }
            break;
        default:
            printf("Opção inválida\n");
            break;
    }

    return 0;

};

