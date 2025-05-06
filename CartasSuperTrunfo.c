#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {

    int populacao1 = 1, populacao2 = 1, pontos1 = 1, pontos2 = 1, codigocidade1 = 10, codigocidade2 = 10;
    float area1 = 1, area2 = 1, pib1 = 1, pib2 = 1;
    char codigoestado1 = 'A', codigoestado2 = 'A', estado1[30] = "Paraná", estado2[30] = "Paraná", cidade1[30] = "Macapá", cidade2[30] = "Macapá";

    /*
    A primeira parte do código será onde o usuário fará o cadastro das cartas,
    um item por vez, sendo na sequência: nome do estado(código de A à H), código do estado, código da cidade,
    nome da cidade, população, área, PIB e pontos turísticos.
    */

//Texto de introdução
        printf("Bem vindo ao Super Trunfo!\nPara iniciar, vamos cadastrar duas cartas!\n\n");
    
//Cadastro da primeira carta

     printf("Primeiro, digite o nome do estado: \n");
     scanf("%s", estado1);

     printf("Digite o código desse estado, uma letra de A à H: \n");
     scanf("%s", &codigoestado1);

     printf("Digite o código da cidade, um número entre 01 e 99\n");
     scanf("%i", &codigocidade1);

     printf("Agora digite o nome da cidade:\n");
     scanf("%s", cidade1);

     printf("Agora digite a população: \n");
     scanf("%i", &populacao1);

     printf("Agora digite a área da cidade: \n");
     scanf("%f", &area1);

     printf("Agora digite o PIB da cidade: \n");
     scanf("%f", &pib1);

     printf("Agora digite os pontos turísticos: \n");
     scanf("%i", &pontos1);

     printf("\n\nPronto! Agora vamos cadastrar a segunda carta:\n\n\n");

//Cadastro da segunda carta

     printf("Digite o nome do estado: \n");
     scanf("%s", estado2);

     printf("Digite o código do estado, uma letra de A à H: \n");
     scanf("%s", &codigoestado2);

     printf("Digite o código da cidade, um número entre 01 e 99\n");
     scanf("%i", &codigocidade2);

     printf("Agora digite o nome da cidade:\n");
     scanf("%s", cidade2);

     printf("Agora digite a população: \n");
     scanf("%i", &populacao2);

     printf("Agora digite a área da cidade: \n");
     scanf("%f", &area2);

     printf("Agora digite o PIB da cidade: \n");
     scanf("%f", &pib2);

     printf("Agora digite os pontos turísticos: \n");
     scanf("%i", &pontos2);

    printf("\n\nPronto! Agora confira as cartas cadastradas:\n\n\n");

//Exibição das informações inseridas pelo usuário, cada comando Printf representando uma carta

        printf("Carta 01:\n\n Código: %c%i \n Estado: %s \n Cidade: %s \n Área: %.2f Km \n População: %i \n PIB: R$ %.2f \n Pontos Turísticos: %i\n\n", codigoestado1, codigocidade1, estado1, cidade1, area1, populacao1, pib1, pontos1);
        printf("Carta 02:\n\n Código: %c%i \n Estado: %s \n Cidade: %s \n Área: %.2f Km \n População: %i \n PIB: R$ %.2f \n Pontos Turísticos: %i\n\n", codigoestado2, codigocidade2, estado2, cidade2, area2, populacao2, pib2, pontos2);

    return 0;
}
