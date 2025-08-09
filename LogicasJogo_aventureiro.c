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

    // Contas para variaveis Densidade Populacional, Per Capita e Super poder.

    populacional1 = populacao1 / area1;
    populacional2 = populacao2 / area2;


    // Menu do Jogo

    printf ("Agora escolha qual Opção você deseja comparar:\n");
    printf ("1. População.\n");
    printf ("2. Área:\n");
    printf ("3.PIB.\n");
    printf ("4. Pontos Turitícos.\n");
    printf ("5. Densidade Populaciona.\n");
    printf ("Opção.\n");
    
    scanf("%d",  &opcao);

   // Jogador escolha qual opção deseja comparar.

switch(opcao){
    case 1:
    printf ("Opção escolhida foi População.\n");
    break;
    case 2: 
    printf ("Opção escolhida foi Área:\n");
    break;
    case 3:
    printf ("Opção escolhida foi PIB.\n");
    break;
    case 4:
    printf ("Opção escolhida foi Pontos Turitícos.\n");
    break;
    case 5:
    printf ("Opção escolhida foi Densidade Populaciona.\n");
    break;
    default:
    printf("Opção Inválida\n");
    break;
}


   //Comparações usando Switch
   //População




    

    return 0;






}
