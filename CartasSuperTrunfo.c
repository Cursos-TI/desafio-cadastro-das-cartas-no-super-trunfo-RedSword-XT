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

/*
A primeira parte do código será onde o usuário fará o cadastro das cartas,
um item por vez, sendo na sequência: letra do estado(de A a H), código do estado,
nome da cidade, população, área, PIB e pontos turísticos.
*/

//Texto de introdução

    printf("*** Bem vindo ao Super Trunfo! ***\nPara iniciar, vamos cadastrar duas cartas!\n\n");
    
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
    printf("\n\nPronto! Agora confira as cartas cadastradas:\n\n\n");



/*
A segunda parte do código é onde será feito o cálculo de densidade populacional,
PIB per capita e Super Poder,sendo que o PIB será exibido em bilhões, será necessário
multiplicar o PIB inserido pelo usuário por 1 bilhão (1.000.000.000). 
*/

dens1 = pop1 / area1;
percapita1 = (pib1 * 1000000000) / pop1;

dens2 = pop2 / area2;
percapita2 = (pib2 * 1000000000) / pop2;

superPoder1 = pop1 
            + area1 
            + (pib1 * 1000000000)
            + pontos1
            + percapita1
            + (1 / dens1);

superPoder2 = pop2 
            + area2 
            + (pib2 * 1000000000)
            + pontos2
            + percapita2
            + (1 / dens2);

//A terceira parte do código é a exibição dos dados inseridos antes da comparação entre as cartas.

    //Carta 1
    printf("\n*** Dados da Cidade 1 ***\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%d\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %li\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %i\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", dens1);
    printf("PIB per capita: %.2f bilhões/hab\n", percapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    
    //Carta 2
    printf("\n*** Dados da Cidade 2 ***\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%d\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %li\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %i\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", dens2);
    printf("PIB per capita: %.2f bilhões/hab\n", percapita2);
    printf("Super Poder: %.2f\n\n\n", superPoder2);


//A quarta parte do código é a comparação entre as cartas e exibição do resultado.
//Adicionada a comparação utilizando if e else, e entre parênteses o parâmetro vencedor.

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

/*
//Comparação simples (não utilizada após a adição de if e else)
    printf("\n*** Comparação das Cartas: ***\n");
    printf("População: Carta 1 venceu (%i)\n", pop1 > pop2);
    printf("Área: Carta 1 venceu (%i)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%i)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%i)\n", pontos1 > pontos2);
    printf("Densidade Populacional: Carta 2 venceu (%i)\n", dens1 < dens2);
    printf("PIB per Capita: Carta 1 venceu (%i)\n", percapita1 > percapita2);
    printf("Super Poder: Carta 1 venceu (%i)\n", superPoder1 > superPoder2);
*/
return 0;
}