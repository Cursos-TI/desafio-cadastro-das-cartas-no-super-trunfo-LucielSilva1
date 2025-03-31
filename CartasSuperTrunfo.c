#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

      //variáveis da primeira carta
   char estado1[2],nome1[50], codigo1[3];
   int pop1,tur1;
   float area1,pib1;
   
   
   //variáveis da segunda carta
   char estado2[2],nome2[50], codigo2[3];
   int pop2,tur2;
   float area2,pib2;

   
   //dados da primeira carta
   printf("Informe o estado cidade da primeira carta:");
   scanf("%s",estado1);

   printf("Informe o código da cidade da primeira carta:");
   scanf("%s",codigo1);

   printf("Informe o nome da cidade da primeira carta:");
   scanf("%s", nome1);
   //gets(nome1);

   printf("Informe a população da cidade da primeira carta:");
   scanf("%d",&pop1);

   printf("Informe a área da cidade da primeira carta:");
   scanf("%f",&area1);

   printf("Informe o PIB da cidade da primeira carta:");
   scanf("%f",&pib1);

   printf("Informe a quantidade de pontos turísticos da cidade da primeira carta:");
   scanf("%d",&tur1);
   
   printf("\n\n");
   
   //dados da segunda carta
   printf("Informe o estado cidade da segunda carta:");
   scanf("%s",estado2);

   printf("Informe o código da cidade da segunda carta:");
   scanf("%s",codigo2);

   printf("Informe o nome da cidade da segunda carta:");
   scanf("%s",nome2);

   printf("Informe a população da cidade da segunda carta:");
   scanf("%d",&pop2);

   printf("Informe a área da cidade da segunda carta:");
   scanf("%f",&area2);

   printf("Informe o PIB da cidade da segunda carta:");
   scanf("%f",&pib2);

   printf("Informe a quantidade de pontos turísticos da cidade da segunda carta:");
   scanf("%d",&tur2);
   
   
  //Nesta parte, serão adicionados cálculo sobre densidade populacional
   //e PIB per capita
   float pibCid1, pibCid2;
   float densidadeCid1, densidadeCid2;
   
   densidadeCid1 = pop1 / area1;
   densidadeCid2 = pop2 / area2;
   
   pibCid1 = pib1 / pop1;
   pibCid2 = pib2 /pop2;
   
   
   //------------------------------------------------------------------
   
    //exibir informações cadastradas
   printf("------DADOS DE CARTAS DIGITADAS-------\n");
   printf("Primeira carta:\n");
   printf("Carta: 1\n");
   printf("Estado: %s",estado1);
   printf("\nCódigo: %s",codigo1);
   printf("\nNome da cidade: %s",nome1);
   printf("\nPopulação: %d",pop1);
   printf("\nÁrea: %.2f",area1);
   printf("\nPIB: %.2f",pib1);
   printf("\nNúmero de pontos turísticos: %d\n",tur1);
   printf("\nDENSIDADE POPULACIONAL:.......%.2f",densidadeCid1);
   printf("\nPIB PER CAPITA:.......%.2f",pibCid1);
   
   printf("\n.......................................\n");
   
   printf("\n\nSegunda carta:\n");
   printf("Carta: 2\n");
   printf("Estado: %s",estado2);
   printf("\nCódigo: %s",codigo2);
   printf("\nNome da cidade: %s",nome2);
   printf("\nPopulação: %d",pop2);
   printf("\nÁrea: %.2f",area2);
   printf("\nPIB: %.2f",pib2);
   printf("\nNúmero de pontos turísticos: %d",tur2);
   printf("\nDENSIDADE POPULACIONAL:.......%.2f",densidadeCid2);
   printf("\nPIB PER CAPITA:.......%.2f",pibCid2);

   printf("\n.......................................\n");

    return 0;
}
