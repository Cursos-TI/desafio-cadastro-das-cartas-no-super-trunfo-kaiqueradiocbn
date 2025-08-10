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
    int opcao1, opcao2;
    int resultado1, resultado2;


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

    printf ("Agora escolha qual *A Primeira Opção* você deseja comparar:\n");
    printf ("1. População.\n");
    printf ("2. Área.\n");
    printf ("3. PIB.\n");
    printf ("4. Pontos Turísticos.\n");
    printf ("5. Densidade Populacional.\n");
    printf ("Digite sua Opção.\n");
    
    scanf("%d",  &opcao1);



   // Jogador escolha qual opção deseja comparar Primeiro.

switch(opcao1){
case 1: //caso escolher População
    printf ("Opção escolhida foi População.\n");
    resultado1 = populacao1 > populacao2 ? 1 : 0;
break;


case 2://caso escolher Área 
    printf ("Opção escolhida foi Área.\n");
    resultado1 = area1 > area2 ? 1 : 0;
break;


case 3://caso escolher PIB
    printf ("Opção escolhida foi PIB.\n");
    resultado1 = pib1 > pib2 ? 1 : 0;
break;
    

case 4://caso escolher Pontos Turísticos.
    printf ("Opção escolhida foi Pontos Turísticos.\n");
    resultado1 = pontos1 > pontos2 ? 1 : 0;
    
break;


case 5://caso escolher Densidade Populacional.
    printf ("Opção escolhida foi Densidade Populacional.\n");
    resultado1 = populacional1 < populacional2 ? 1 : 0;
break;


default://caso apertar tecla errada
    printf("Opção Inválida\n");
break;
}

    printf ("Agora escolha qual *A Segunda Opção* você deseja comparar, diferente da primeira:\n");
    printf ("1. População.\n");
    printf ("2. Área.\n");
    printf ("3. PIB.\n");
    printf ("4. Pontos Turísticos.\n");
    printf ("5. Densidade Populacional.\n");
    printf ("Digite sua Opção.\n");
    
    scanf("%d",  &opcao2);


    if (opcao1 == opcao2) // IF para ver se o jogador não selecionou a mesmo opção repetido
    {
        printf("Você escolheu já escolheu essa opção por favor escolha outra opção.\n");// senão segue com else
    } else {
    
        // Jogador escolha qual opção deseja comparar Segundo.

switch(opcao2)
{
case 1: //caso escolher População
    printf ("Opção escolhida foi População.\n");
    resultado2 = populacao2 > populacao1 ? 1 : 0;
break;


case 2://caso escolher Área 
    printf ("Opção escolhida foi Área.\n");
    resultado2 = area2 > area1 ? 1 : 0;
break;


case 3://caso escolher PIB
    printf ("Opção escolhida foi PIB.\n");
    resultado2 = pib2 > pib1 ? 1 : 0;
break;
    

case 4://caso escolher Pontos Turísticos.
    printf ("Opção escolhida foi Pontos Turísticos.\n");
    resultado2 = pontos2 > pontos1 ? 1 : 0;
    
break;


case 5://caso escolher Densidade Populacional.
    printf ("Opção escolhida foi Densidade Populacional.\n");
    resultado2 = populacional2 < populacional1 ? 1 : 0;
break;


default://caso apertar tecla errada
    printf("Opção Inválida\n");
break;
}

// Lógica de resultado para ver quem ganhou nas comparações.
if (resultado1 && resultado2)
{
    printf ("Parabéns, você venceu!\n");
    
}else if (resultado1 != resultado2){
    printf("Empatou'\n");

}else{
    printf ("Infelizmente, você perdeu!\n");
}
    


    

    return 0;






}