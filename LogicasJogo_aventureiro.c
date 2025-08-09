#include <stdio.h>

int main() {
    printf("Super Trunfo\n");

    // Variáveis Carta 1 e Carta 2
    char estado1[30], estado2[30];
    char cidade1[30], cidade2[30];
    char codigo1[5], codigo2[5];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float populacional1, populacional2;
    int opcao;


    // Cadastro Para Jogador Carta 1
    printf("Carta 1:\n");
    printf("Digite o código da Carta EX, X00: \n");
    scanf("%s", codigo1);

    printf("Digite o Nome do Estado: \n");
    scanf(" %[^\n]", estado1);

    printf("Digite o Nome da cidade: \n");
    scanf(" %[^\n]", cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em KM: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turísticos: \n");
    scanf("%d", &pontos1);


    // Cadastro Para jogador Carta 2
    printf("Carta 2:\n");
    printf("Digite o código da Carta EX, X00: \n");
    scanf("%s", codigo2);

    printf("Digite o Nome do Estado: \n");
    scanf(" %[^\n]", estado2);

    printf("Digite o Nome da cidade: \n");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em KM: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos: \n");
    scanf("%d", &pontos2);

    // Contas para variaveis Densidade Populacional.

    populacional1 = (float) populacao1 / area1;
    populacional2 = (float)populacao2 / area2;



    //Exibição dos valores das cartas
    //Dados de saída Carta 1

     printf ("Carta 1\n");
     printf ("Seu Código é: %s\n", codigo1);
     printf ("Seu Estado é: %s\n", estado1);
     printf ("Sua Cidade é: %s\n", cidade1);
     printf ("Sua população é: %d\n", populacao1);
     printf ("Sua área é: %.2f\n", area1);
     printf ("Seu Pib é:%.2f\n", pib1);
     printf ("numeros de pontos turisticos:%d\n", pontos1);
     printf ("Densidade Populacional:%.2f\n", populacional1);
    


     //Dados de saída Carta 2

     printf ("Carta 2\n");
     printf ("Seu Código é: %s\n", codigo2);
     printf ("Seu Estado é: %s\n", estado2);
     printf ("Sua Cidade é: %s\n", cidade2);
     printf ("Sua população é: %d\n", populacao2);
     printf ("Sua área é: %.2f\n", area2);
     printf ("Seu Pib é:%.2f\n", pib2);
     printf ("numeros de pontos turisticos:%d\n", pontos2);
     printf ("Densidade Populacional:%.2f\n", populacional2);




    // Menu do Jogo

    printf ("Agora escolha qual Opção você deseja comparar:\n");
    printf ("1. População.\n");
    printf ("2. Área.\n");
    printf ("3. PIB.\n");
    printf ("4. Pontos Turísticos.\n");
    printf ("5. Densidade Populacional.\n");
    printf ("Digite sua Opção.\n");
    
    scanf("%d",  &opcao);



   // Jogador escolha qual opção deseja comparar.

switch(opcao){
    case 1: //caso escolher População
    printf ("Opção escolhida foi População.\n");
    if (populacao1 > populacao2){
    printf(" Carta 1 venceu ( População %d vs %d)!\n", populacao1, populacao2);
    }
    else if (populacao2 > populacao1){
    printf(" Carta 2 venceu (População %d vs %d)!\n", populacao2, populacao1);
    }
    else {
    printf("Empate (%d)!\n", populacao1);
    }
    break;


    case 2://caso escolher Área 
    printf ("Opção escolhida foi Área.\n");
    if (area1 > area2){
    printf(" Carta 1 venceu ( Área %.2f KM2 vs %.2f KM2)!\n", area1, area2);
        }
    else if (area2 > area1){
    printf(" Carta 2 venceu ( Área %.2f KM2 vs %.2f KM2)!\n", area2, area1);
    }
    else {
    printf("Empate (%.2f)!\n", area1);
    }
    break;


    case 3://caso escolher PIB
    printf ("Opção escolhida foi PIB.\n");
    if (pib1 > pib2){
    printf(" Carta 1 venceu ( PIB %.2f vs %.2f)!\n", pib1, pib2);
    }
    else if (pib2 > pib1){
    printf(" Carta 2 venceu ( PIB %.2f vs %.2f)!\n", pib2, pib1);
    }
    else {
    printf("Empate (%.2f)!\n", pib1);
    }
    break;
    

    case 4://caso escolher Pontos Turísticos.
    printf ("Opção escolhida foi Pontos Turísticos.\n");
    if (pontos1 > pontos2){
    printf(" Carta 1 venceu ( Pontos %d vs %d)!\n", pontos1, pontos2);
    }
    else if (pontos2 > pontos1){
    printf(" Carta 2 venceu (Pontos %d vs %d)!\n", pontos2, pontos1);
    }
    else {
    printf("Empate (%d)!\n", pontos1);
    }
    break;


    case 5://caso escolher Densidade Populacional.
    printf ("Opção escolhida foi Densidade Populacional.\n");
    if (populacional1 < populacional2){
    printf(" Carta 1 venceu ( Populacional %.2f vs %.2f)!\n", populacional1, populacional2);
    }
    else if (populacional2 < populacional1){
    printf(" Carta 2 venceu (Populacional %.2f vs %.2f)!\n", populacional2, populacional1);
    }
    else {
    printf("Empate (%.2f)!\n", populacional1);
    }
    break;


    default://caso apertar tecla errada
    printf("Opção Inválida\n");
    break;
}


   //Comparações usando Switch
   //População




    

    return 0;






}
