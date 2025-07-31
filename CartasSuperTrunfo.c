#include <stdio.h>


int main() {
    printf("Super Trunfo\n");
    
    // Valores variasveis Carta 1 e Carta 2

        char código1[A01], código2[B02];
        int populacao1, populacao2;
        float área1, área2;
        float pib1, pib2;
        int pontos1, pontos2;   
        
    //Cadastro Carta 1


    printf ("Carta A01:\n");

    printf("Digite o código da Carta EX, X00: \n");
    scanf ("%s", &código1);

    printf("Digite a população: \n");
    scanf ("%d", &populacao1);

    printf ("Digite a área em KM: \n");
    scanf ("%f", &área1);

    printf("Digite o PIB: \n");
    scanf ("%f", &pib1);

    printf ("Digite quantos pontos turísticos: \n");
    scanf ("%d", &pontos1);



        //Cadastro Carta 2


   
    printf ("Carta B02:\n");

    printf("Digite o código da Carta EX, X00: \n");
    scanf ("%s", &código2);

    printf("Digite a população: \n");
    scanf ("%d", &populacao2);

    printf ("Digite a área em KM: \n");
    scanf ("%f", &área2);

    printf("Digite o PIB: \n");
    scanf ("%f", &pib2);

    printf ("Digite quantos pontos turísticos: \n");
    scanf ("%d", &pontos2);

     //Dados de saída Carta 1

     printf ("Carta 1\n");
     printf ("Seu Código é: %s\n");
     printf ("Sua população é: %d\n");
     printf ("Sua área em milhões é %f:\n");
     printf ("Seu Pib é:%d\n");

          //Dados de saída Carta 2

     printf ("Carta 1\n");
     printf ("Seu Código é: %s\n");
     printf ("Sua população é: %d\n");
     printf ("Sua área em milhões é: %f\n");
     printf ("Seu Pib é:%d\n");

     
     



   






    

    return 0;
}
 