

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


    
    int populacao1 = 15326000UL;
    float area1 = 1921.22f;
    float pib1 = 889.26f;
    int pontosTuristicos1 = 30;
    float densidadePopulacional1 = 91202.38f; 
    float pibPerCapita1 = 75725.35f;         
    float superPoder1;                       

    
    int populacao2 = 6946000UL;
    float area2 = 1500.35f;
    float pib2 = 400.50f;
    int pontosTuristicos2 = 40;
    float densidadePopulacional2 = 6540.22f; 
    float pibPerCapita2 = 545522.81f;         
    float superPoder2;                       

    
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidadePopulacional1);
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);

    
   superPoder1 = 123890.75f; 
   superPoder2 = 78950.22f; 



    printf("Comparação de Cartas:\n");


    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2); 


    printf("Área: Carta 1 venceu (%d)\n", area1 > area2); 


    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2); 


    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2); 


    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2); 
                                                                                                    
                                                                                                    
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);

    
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2); 



    return 0; 
    
}


