#include <stdio.h>
#include <string.h> //incluído para possibilitar o uso de strcspn

// Desafio Super Trunfo - Países

int main() {
//Variáveis para armazenar os dados
    char nome1[50] = "São Paulo", nome2[50] = "Rio de Janeiro";
    char estado1 = 'A', estado2 = 'B';
    int codigo1 = 10, codigo2 = 20;
    unsigned long int pop1 = 12325000, pop2 = 6748000;
    int pontos1 = 50, pontos2 = 30;
    float area1 = 1521.11, area2 = 1200.25;
    float pib1 = 699.28, pib2 = 300.50;
    float dens1, dens2;
    float percapita1, percapita2;
    float superPoder1, superPoder2;

// Variáveis para comparação (atributos)
    int atributo1 = 0, atributo2 = 0;
    float valorA1 = 0, valorA2 = 0, valorB1 = 0, valorB2 = 0;
    char nomeAttr1[30], nomeAttr2[30];
    float soma1 = 0, soma2 = 0;

/*
A primeira parte do código será onde o usuário fará o cadastro das cartas,
um item por vez, sendo na sequência: letra do estado(de A a H), código do estado,
nome da cidade, população, área, PIB e pontos turísticos.
*/


    printf("*** Bem vindo ao Super Trunfo! ***\nVamos cadastrar duas cartas:\n\n");

        //Cadastro da primeira carta
        printf("Primeiro, digite o a letra do estado da cidade 1 (A a H): \n");
        scanf("%c", &estado1);

        printf("Digite o código do estado, um número entre 01 e 99\n");
        scanf("%i", &codigo1);
        getchar(); //evita que o programa pule o próximo fgets;

        printf("Agora digite o nome da cidade 1:\n");
        fgets(nome1, 50, stdin); //fgets para que o usuário possa digitar nomes compostos
        nome1[strcspn(nome1, "\n")] = 0; //remove o \n do comando anterior

        printf("Agora digite a população da cidade 1: \n");
        scanf("%li", &pop1);

        printf("Agora digite a área da cidade 1 em km²: \n");
        scanf("%f", &area1);

        printf("Agora digite o PIB da cidade 1 em bilhões: \n");
        scanf("%f", &pib1);

        printf("Agora digite os pontos turísticos da cidade 1: \n");
        scanf("%i", &pontos1);
        getchar(); //Evita que o programa pule o scanf("%c", &estado2);
    
        dens1 = pop1 / area1; //Cálculo da densidade populacional
        percapita1 = (pib1 * 1000000000) / pop1; //Cálculo do PIB per capita (exibido em bilhões/hab)

        superPoder1 = pop1 //Cálculo do Super Poder
            + area1 
            + (pib1 * 1000000000)
            + pontos1
            + percapita1
            + (1 / dens1);

        printf("\n\nPronto! Agora vamos cadastrar a segunda carta:\n\n\n");

        //Cadastro da segunda carta

        printf("Primeiro, digite o a letra do estado da cidade 2 (A a H): \n");
        scanf("%c", &estado2);

        printf("Digite o código do estado, um número entre 01 e 99\n");
        scanf("%i", &codigo2);
        getchar(); //evita que o programa pule o próximo fgets;
    
        printf("Agora digite o nome da cidade 2:\n");
        fgets(nome2, 50, stdin); //fgets para que o usuário possa digitar nomes compostos
        nome2[strcspn(nome2, "\n")] = 0; //remove o \n do comando anterior

        printf("Agora digite a população da cidade 2: \n");
        scanf("%li", &pop2);

        printf("Agora digite a área da cidade 2 em km²: \n");
        scanf("%f", &area2);

        printf("Agora digite o PIB da cidade 2 em bilhões: \n");
        scanf("%f", &pib2);

        printf("Agora digite os pontos turísticos da cidade 2: \n");
        scanf("%i", &pontos2);

        dens2 = pop2 / area2; //Cálculo da densidade populacional
        percapita2 = (pib2 * 1000000000) / pop2; //Cálculo do PIB per capita (exibido em bilhões/hab)

        superPoder2 = pop2 //Cálculo do Super Poder
            + area2 
            + (pib2 * 1000000000)
            + pontos2
            + percapita2
            + (1 / dens2);

//Visualização das cartas cadastradas
            printf("\nConfira as cartas cadastradas:\n");
            //Carta 1
            printf("\n*** Carta 1 ***\n");
            printf("Estado: %c\n", estado1);
            printf("Código: %c%d\n", estado1, codigo1);
            printf("Nome da Cidade: %s\n", nome1);
            printf("População: %li\n", pop1);
            printf("Área: %.2f km²\n", area1);
            printf("PIB: R$ %.2f bilhões\n", pib1);
            printf("Pontos Turísticos: %i\n", pontos1);
            printf("Densidade Populacional: %.2f hab/km²\n", dens1);
            printf("PIB per capita: R$ %.2f/hab\n", percapita1);
            printf("Super Poder: %.2f\n", superPoder1);
    
            //Carta 2
            printf("\n*** Carta 2 ***\n");
            printf("Estado: %c\n", estado2);
            printf("Código: %c%d\n", estado2, codigo2);
            printf("Nome da Cidade: %s\n", nome2);
            printf("População: %li\n", pop2);
            printf("Área: %.2f km²\n", area2);
            printf("PIB: R$ %.2f bilhões\n", pib2);
            printf("Pontos Turísticos: %i\n", pontos2);
            printf("Densidade Populacional: %.2f hab/km²\n", dens2);
            printf("PIB per capita: R$ %.2f/hab\n", percapita2);
            printf("Super Poder: %.2f\n\n\n", superPoder2);

// Menu e lógica de comparação de atributos
            printf("Escolha o primeiro atributo para comparar:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB per capita\n");
            printf("7. Super Poder\n");
            scanf("%i", &atributo1);
            getchar();

        // Menu para seleção do segundo atributo, excluindo o primeiro escolhido
            printf("Escolha o segundo atributo para comparar (diferente do primeiro):\n");
            if (atributo1 != 1) printf("1. População\n");
            if (atributo1 != 2) printf("2. Área\n");
            if (atributo1 != 3) printf("3. PIB\n");
            if (atributo1 != 4) printf("4. Pontos Turísticos\n");
            if (atributo1 != 5) printf("5. Densidade Populacional\n");
            if (atributo1 != 6) printf("6. PIB per capita\n");
            if (atributo1 != 7) printf("7. Super Poder\n");
            scanf("%i", &atributo2);
            getchar();

        // Corrige atributo2 caso seja igual a atributo1 (forçando a escolher outro)
            if (atributo2 == atributo1) {
                printf("Você escolheu o mesmo atributo duas vezes. Escolha outro atributo diferente.\n");
            return 0;
        }

        // Obter valores do primeiro atributo para cada carta
        // Utilizado o strcpy para copiar o nome do atributo para as variáveis nomeAttr1 e nomeAttr2, para depois exibir
        switch (atributo1) {
            case 1: valorA1 = (float)pop1; valorB1 = (float)pop2; strcpy(nomeAttr1, "População"); break;
            case 2: valorA1 = area1; valorB1 = area2; strcpy(nomeAttr1, "Área"); break;
            case 3: valorA1 = pib1; valorB1 = pib2; strcpy(nomeAttr1, "PIB"); break;
            case 4: valorA1 = (float)pontos1; valorB1 = (float)pontos2; strcpy(nomeAttr1, "Pontos Turísticos"); break;
            case 5: valorA1 = dens1; valorB1 = dens2; strcpy(nomeAttr1, "Densidade Populacional"); break;
            case 6: valorA1 = percapita1; valorB1 = percapita2; strcpy(nomeAttr1, "PIB per capita"); break;
            case 7: valorA1 = superPoder1; valorB1 = superPoder2; strcpy(nomeAttr1, "Super Poder"); break;
        }

        // Obter valores do segundo atributo para cada carta
        switch (atributo2) {
            case 1: valorA2 = (float)pop1; valorB2 = (float)pop2; strcpy(nomeAttr2, "População"); break;
            case 2: valorA2 = area1; valorB2 = area2; strcpy(nomeAttr2, "Área"); break;
            case 3: valorA2 = pib1; valorB2 = pib2; strcpy(nomeAttr2, "PIB"); break;
            case 4: valorA2 = (float)pontos1; valorB2 = (float)pontos2; strcpy(nomeAttr2, "Pontos Turísticos"); break;
            case 5: valorA2 = dens1; valorB2 = dens2; strcpy(nomeAttr2, "Densidade Populacional"); break;
            case 6: valorA2 = percapita1; valorB2 = percapita2; strcpy(nomeAttr2, "PIB per capita"); break;
            case 7: valorA2 = superPoder1; valorB2 = superPoder2; strcpy(nomeAttr2, "Super Poder"); break;
        }

        // Comparação do primeiro atributo (densidade populacional vence quem tiver menor valor)
        int carta1VenceAttr1 = (atributo1 == 5) ? (valorA1 < valorB1) : (valorA1 > valorB1);
        // Comparação do segundo atributo
        int carta1VenceAttr2 = (atributo2 == 5) ? (valorA2 < valorB2) : (valorA2 > valorB2);

        // Soma dos valores dos atributos para cada carta
        soma1 = valorA1 + valorA2;
        soma2 = valorB1 + valorB2;

        // Exibir resultados da comparação
        printf("\n %s Versus %s:\n", nome1, nome2);

        // Atributo 1
        printf("Atributo 1: %s\n", nomeAttr1);
        if (atributo1 == 1 || atributo2 == 4) {
            // População: unsigned long int
            printf("  Carta 1: %lu\n", (unsigned long int)valorA1);
            printf("  Carta 2: %lu\n", (unsigned long int)valorB1);
        } else {
            // Outros atributos: float
            printf("  Carta 1: %.2f\n", valorA1);
            printf("  Carta 2: %.2f\n", valorB1);
        }
        printf("Resultado: %s\n", (valorA1 == valorB1) ? "Empate!" : (carta1VenceAttr1 ? "Carta 1 venceu" : "Carta 2 venceu"));

        // Atributo 2
        printf("\nAtributo 2: %s\n", nomeAttr2);
        if (atributo2 == 1 || atributo2 == 4) {
            // População: unsigned long int
            printf("  Carta 1: %lu\n", (unsigned long int)valorA2);
            printf("  Carta 2: %lu\n", (unsigned long int)valorB2);
        } else {
            // Outros atributos: float
            printf("  Carta 1: %.2f\n", valorA2);
            printf("  Carta 2: %.2f\n", valorB2);
        }
        printf("Resultado: %s\n", (valorA2 == valorB2) ? "Empate!" : (carta1VenceAttr2 ? "Carta 1 venceu" : "Carta 2 venceu"));

        // Soma dos atributos (sempre float)
        printf("\nSoma dos atributos:\n");
        printf("  Carta 1: %.2f\n", soma1);
        printf("  Carta 2: %.2f\n", soma2);
        printf("\nResultado final: %s\n\n", (soma1 == soma2) ? "Empate!" : ((soma1 > soma2) ? "Carta 1 venceu" : "Carta 2 venceu"));

return 0;
}


/* Comparação avançada com o uso de menu interativo com switch

printf("\n*** MENU DE COMPARAÇÃO ***\n");
            printf("Escolha o atributo para comparar:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB per capita\n");
            printf("7. Super Poder\n");

            int opcaoComparar;
            scanf("%d", &opcaoComparar);

            printf("\nComparando: %s vs %s\n", nome1, nome2);

            switch (opcaoComparar)
            {
                case 1:
                    printf("Atributo: População\n");
                    printf("%s: %lu habitantes\n", nome1, pop1);
                    printf("%s: %lu habitantes\n", nome2, pop2);
                    if (pop1 > pop2)
                        printf("Vencedor: %s\n", nome1);
                    else if (pop2 > pop1)
                        printf("Vencedor: %s\n", nome2);
                    else
                        printf("Empate!\n");
                    break;

                case 2:
                    printf("Atributo: Área (km²)\n");
                    printf("%s: %.2f km²\n", nome1, area1);
                    printf("%s: %.2f km²\n", nome2, area2);
                    if (area1 > area2)
                        printf("Vencedor: %s\n", nome1);
                    else if (area2 > area1)
                        printf("Vencedor: %s\n", nome2);
                    else
                        printf("Empate!\n");
                    break;

                case 3:
                    printf("Atributo: PIB (R$ bilhões)\n");
                    printf("%s: R$ %.2f bilhões\n", nome1, pib1);
                    printf("%s: R$ %.2f bilhões\n", nome2, pib2);
                    if (pib1 > pib2)
                        printf("Vencedor: %s\n", nome1);
                    else if (pib2 > pib1)
                        printf("Vencedor: %s\n", nome2);
                    else
                        printf("Empate!\n");
                    break;

                case 4:
                    printf("Atributo: Pontos Turísticos\n");
                    printf("%s: %d pontos\n", nome1, pontos1);
                    printf("%s: %d pontos\n", nome2, pontos2);
                    if (pontos1 > pontos2)
                        printf("Vencedor: %s\n", nome1);
                    else if (pontos2 > pontos1)
                        printf("Vencedor: %s\n", nome2);
                    else
                        printf("Empate!\n");
                    break;

                case 5:
                    printf("Atributo: Densidade Populacional (menor é melhor)\n");
                    printf("%s: %.2f hab/km²\n", nome1, dens1);
                    printf("%s: %.2f hab/km²\n", nome2, dens2);
                    if (dens1 < dens2)
                        printf("Vencedor: %s\n", nome1);
                    else if (dens2 < dens1)
                        printf("Vencedor: %s\n", nome2);
                    else
                        printf("Empate!\n");
                    break;

                case 6:
                    printf("Atributo: PIB per capita (R$ por habitante)\n");
                    printf("%s: R$ %.2f/hab\n", nome1, percapita1);
                    printf("%s: R$ %.2f/hab\n", nome2, percapita2);
                    if (percapita1 > percapita2)
                        printf("Vencedor: %s\n", nome1);
                    else if (percapita2 > percapita1)
                        printf("Vencedor: %s\n", nome2);
                    else
                        printf("Empate!\n");
                    break;

                case 7:
                    printf("Atributo: Super Poder\n");
                    printf("%s: %.2f\n", nome1, superPoder1);
                    printf("%s: %.2f\n", nome2, superPoder2);
                    if (superPoder1 > superPoder2)
                        printf("Vencedor: %s\n", nome1);
                    else if (superPoder2 > superPoder1)
                        printf("Vencedor: %s\n", nome2);
                    else
                        printf("Empate!\n");
                    break;

                default:
                    printf("Opção inválida de comparação.\n");
            }
*/




/* Comparação simples com o uso de if/else

    printf("O vencedor da rodada em cada atributo foi: \n");

    printf("População: ");
        if (pop1 > pop2) {
            printf("Carta 1 (%lu habitantes)\n", pop1);}
        else { printf("Carta 2 (%lu habitantes)\n", pop2);
        }
    printf("Área: ");
        if (area1 > area2) {
            printf("Carta 1 (%.2f km²)\n", area1);}
        else { printf("Carta 2 (%.2f km²)\n", area2);
        }
    printf("PIB: ");
        if (pib1 > pib2) {
            printf("Carta 1 (R$ %.2f bilhões)\n", pib1);}
        else {printf("Carta 2 (R$ %.2f bilhões)\n", pib2);
        }
    printf("Pontos Turísticos: ");
        if (pontos1 > pontos2) {
            printf("Carta 1 (%i pontos)\n", pontos1);}
        else { printf("Carta 2 (%i pontos)\n", pontos2);
        }
    printf("Densidade Populacional: ");
        if (dens1 < dens2) {
            printf("Carta 1 (%.2f hab/km²)\n", dens1);}
        else { printf("Carta 2 (%.2f hab/km²)\n", dens2);
        }
    printf("PIB per Capita: ");
        if (percapita1 > percapita2) {
            printf("Carta 1 (R$ %.2f/hab)\n", percapita1);}
        else { printf("Carta 2 (R$ %.2f/hab)\n", percapita2);
        }
    printf("Super Poder: ");
        if (superPoder1 > superPoder2) {
            printf("Carta 1 (%.2f)\n", superPoder1);}
        else { printf("Carta 2 (%.2f)\n", superPoder2);
        }
*/



/*
Comparação simples sem o uso de if/else

    printf("\n*** Comparação das Cartas: ***\n");
    printf("População: Carta 1 venceu (%i)\n", pop1 > pop2);
    printf("Área: Carta 1 venceu (%i)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%i)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%i)\n", pontos1 > pontos2);
    printf("Densidade Populacional: Carta 2 venceu (%i)\n", dens1 < dens2);
    printf("PIB per Capita: Carta 1 venceu (%i)\n", percapita1 > percapita2);
    printf("Super Poder: Carta 1 venceu (%i)\n", superPoder1 > superPoder2);

*/