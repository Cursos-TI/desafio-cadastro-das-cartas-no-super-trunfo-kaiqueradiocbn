#include <stdio.h>


int main() {
    printf("Super Trunfo\n");
    
    // Valores variasveis Carta 1 e Carta 2

        char estado1[30], estado2[30];
        char cidade1[30],cidade2[30];   
        char código1[5], código2[5];
        unsigned long int populacao1, populacao2;
        float área1, área2;
        float pib1, pib2;
        int pontos1, pontos2;   
        float populacional1, populacional2;
        float capita1, capita2;
        float superpoder1;
        float superpoder2;

        
    //Cadastro Carta 1


    printf ("Carta 1:\n");

    printf("Digite o código da Carta EX, X00: \n");
    scanf ("%s", código1);
    
    printf("Digite o Nome do Estado: \n");
    scanf (" %[^\n]", estado1);

    printf("Digite o Nome da cidade: \n");
    scanf (" %[^\n]", cidade1);

    printf("Digite a população: \n");
    scanf ("%lu", &populacao1);

    printf ("Digite a área em KM: \n");
    scanf ("%f", &área1);

    printf("Digite o PIB: \n");
    scanf ("%f", &pib1);

    printf ("Digite quantos pontos turísticos: \n");
    scanf ("%d", &pontos1);




    //Cadastro Carta 2


   
    printf ("Carta 2:\n");

    printf("Digite o código da Carta EX, X00: \n");
    scanf ("%s", código2);

    printf("Digite o Nome do Estado: \n");
    scanf (" %[^\n]", estado2);

    printf("Digite o Nome da cidade: \n");
    scanf (" %[^\n]", cidade2);

    printf("Digite a população: \n");
    scanf ("%lu", &populacao2);

    printf ("Digite a área em KM: \n");
    scanf ("%f", &área2);

    printf("Digite o PIB: \n");
    scanf ("%f", &pib2);

    printf ("Digite quantos pontos turísticos: \n");
    scanf ("%d", &pontos2);



     //contas para dar o Populacional e Capita

     populacional1 = (float)(populacao1 / área1);
     populacional2 = (float)(populacao2 / área2);
     capita1 = (float)(pib1 * 1000000000.0f) / populacao1;
     capita2 = (float)(pib2 * 1000000000.0f) / populacao2;

     // Soma Super poder
    superpoder1 = (float)(populacao1 + área1 + capita1);
    superpoder2 = (float)(populacao2 + área2 + capita2);


    
    
     //Dados de saída Carta 1
     

     printf ("Carta 1\n");
     printf ("Seu Código é: %s\n", código1);
     printf ("Seu Estado é: %s\n", estado1);
     printf ("Sua Cidade é: %s\n", cidade1);
     printf ("Sua população é: %lu\n", populacao1);
     printf ("Sua área é: %.2f\n", área1);
     printf ("Seu Pib é:%.2f\n", pib1);
     printf ("numeros de pontos turisticos:%d\n", pontos1);
     printf ("Densidade Populacional:%.2f\n", populacional1);
     printf("PIB per Capita:%.2f\n", capita1);


          //Dados de saída Carta 2

     printf ("Carta 2\n");
     printf ("Seu Código é: %s\n", código2);
     printf ("Seu Estado é: %s\n", estado2);
     printf ("Sua Cidade é: %s\n", cidade2);
     printf ("Sua população é: %d\n", populacao2);
     printf ("Sua área é: %.2f\n", área2);
     printf ("Seu Pib é:%.2f\n", pib2);
     printf ("numeros de pontos turisticos:%d\n", pontos2);
     printf ("Densidade Populacional:%.2f\n", populacional2);
     printf("PIB per Capita:%.2f\n", capita2);
     
     



   






    

    return 0;
}
 
