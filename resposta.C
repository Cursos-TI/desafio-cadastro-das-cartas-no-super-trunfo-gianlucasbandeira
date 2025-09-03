#include <stdio.h>
int main(){
printf("Olá, seja bem vindo ao jogo super trunfo\n\n");
printf("Vamos começar cadrastrando as duas cartas das cidades\n\n");
printf("Primeira carta;\n");

char estado1[50];
char codigodacarta1[50];
char nomedacidade1[50];
char populacao1[50];
char areaemkm1[50];
char pib1[50];
char numeropontosturisticos1[50];
  
printf("Digite o estado da cidade:");
scanf("%S", &estado1);
printf("Digite o codigo da carta:");
scanf("%S", &codigodacarta1);
printf("Digite o nome da cidade:");
scanf("%S", &nomedacidade1);
printf("Digite a populacao:");
scanf("%S", &populacao1);
printf("Digite a area em km2:");
scanf("%S", &areaemkm1);
printf("Digite o pib:");
scanf("%S", &pib1);
printf("Digite o numero de pontos turisticos:");
scanf("%S", &numeropontosturisticos1,"\n");

printf("\n");

printf("carta 1:\n\n");

printf("estado:%S\n", estado1);
printf("codigo da carta:%S\n", codigodacarta1);
printf("nome da cidade:%S\n", nomedacidade1);
printf("populacao:%S\n", populacao1);
printf("area em km2:%S\n", areaemkm1);
printf("pib:%S\n", pib1);
printf("numero de pontos turisticos:%S\n", numeropontosturisticos1);
  
printf("\n\n");

printf("agora vamos cadastrar a segunda carta\n\n");

char estado2[50];
char codigodacarta2[50];
char nomedacidade2[50];
char populacao2[50];
char areaemkm2[50];
char pib2[50];
char numeropontosturisticos2[50];

printf("Digite o estado da cidade:");
scanf("%S", &estado2);
printf("Digite o codigo da carta:");
scanf("%S", &codigodacarta2);
printf("Digite o nome da cidade:");
scanf("%S", &nomedacidade2);
printf("Digite a populacao:");
scanf("%S", &populacao2);
printf("Digite a area em km2:");
scanf("%S", &areaemkm2);
printf("Digite o pib:");
scanf("%S", &pib2);
printf("Digite o numero de pontos turisticos:");
scanf("%S", &numeropontosturisticos2,"\n");

printf("\n");

printf("carta 2:\n\n");

printf("estado:%S\n", estado2);
printf("codigo da carta:%S\n", codigodacarta2);
printf("nome da cidade:%S\n", nomedacidade2);
printf("populacao:%S\n", populacao2);
printf("area em km2:%S\n", areaemkm2);
printf("pib:%S\n", pib2);
printf("numero de pontos turisticos:%S\n", numeropontosturisticos2);

printf("\n\n\n");
  
return 0;
}