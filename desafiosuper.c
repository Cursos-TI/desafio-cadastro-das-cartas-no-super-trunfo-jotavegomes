#include <stdio.h>
int main(){

    //Uma letra de A a H  
    char estado1, estado2;
    //A letra do estado seguida de um número de 01 a 04
    char codigo1[4], codigo2[4];
    //nome da cidade
    char cidade1[20], cidade2[20];
    // O número de habitantes da cidade
    int populacao1, populacao2;
    //A área da cidade em quilômetros quadrados
    float area1, area2;
    //O Produto Interno Bruto da cidade
    float pib1, pib2;
    //A quantidade de pontos turísticos na cidade
    int pturistico1, pturistico2;
   
    printf("Primeira carta! \n");

    printf("Digite o estado : \n");
    scanf("%c", &estado1);

    printf("Digite o código da carta : \n");
    scanf("%s", &codigo1);

    printf("Digite a cidade : \n");
    scanf("%s", &cidade1);

    printf("Digite a população : \n");
    scanf("%d", &populacao1);

    printf("Digite a area em km2 : \n");
    scanf("%f", &area1);

    printf("Digite o pib : \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos : \n");
    scanf("%i", &pturistico1);

    printf("Segunda carta! \n");

    printf("Digite o estado : \n");
    scanf("%c", &estado2);

    printf("Digite o código da carta : \n");
    scanf("%s", &codigo2);

    printf("Digite a cidade : \n");
    scanf("%s", &cidade2);

    printf("Digite a população : \n");
    scanf("%d", &populacao2);

    printf("Digite a area em km2 : \n");
    scanf("%f", &area2);

    printf("Digite o pib : \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos : \n");
    scanf("%i", &pturistico2);

    printf("Carta1 \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("N. pontos turisticos: %i\n", pturistico1);

    printf("Carta2 \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("N. pontos turisticos: %i\n", pturistico2);


    return 0;


}