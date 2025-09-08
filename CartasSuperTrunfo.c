

#include <stdio.h>   
#include <string.h>  

int main() {

    char estado1;                        
    char codigoCarta1[12];                 
    char nomeCidade1[18];                
    int populacao1;                   
    float area1;                       
    float pib1;                       
    int pontosTuristicos1;               
    float densidadePopulacional1;
    float pibPerCapita1;


    char estado2;
    char codigoCarta2[12];
    char nomeCidade2[18];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;


    printf("--- Cadastro da Carta 1 ---\n");

    
    printf("Digite o Estado: \n");
    scanf(" %c", &estado1); 

    printf("Digite o Código da Carta: \n");
    scanf("%s", codigoCarta1); 
    
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", nomeCidade1);
    
    printf("Digite a População: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área em km²:\n");
    scanf("%f", &area1); // 

    printf("Digite o PIB em bilhões de reais: \n");
    scanf("%f", &pib1); 

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);

   densidadePopulacional1 = (float)populacao1 / area1; 
   pibPerCapita1 = pib1 / (float)populacao1;


    printf("\n--- Cadastro da Carta 2 ---\n");
 
    printf("Digite o Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta: \n");
    scanf("%s", codigoCarta2);
     
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", nomeCidade2);
    
    printf("Digite a População: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões de reais: \n");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;



    printf("\n--- Informações das Cartas Cadastradas ---\n\n");

    
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1); 
    printf("Código: %s\n", codigoCarta1); 
    printf("Nome da Cidade: %s\n", nomeCidade1); 
    printf("População: %d\n", populacao1); 
    printf("Área: %.2f km²\n", area1); 
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1); 
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);


    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);


    return 0; 
    
}


