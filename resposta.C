#include <stdio.h>
int main(){
printf("Olá, seja bem vindo ao jogo super trunfo\n\n");
printf("Vamos começar cadrastrando as duas cartas das cidades\n\n");

printf("Por favor, digite as informacões sem dar espaço entre as palavras!\n\n");
  
printf("Primeira carta;\n");

char estado1[50];
char codigodacarta1[50];
char nomedacidade1[50];
int populacao1;
float areaemkm1;
float pib1;
int numeropontosturisticos1;

printf("Digite o estado da cidade:");
scanf("%S", &estado1,"\n");
printf("Digite o codigo da carta:");
scanf("%S", &codigodacarta1,"\n");
printf("Digite o nome da cidade:");
scanf("%S", &nomedacidade1,"\n");
printf("Digite a populacao:");
scanf("%i", &populacao1,"\n");
printf("Digite a area em km2:");
scanf("%F", &areaemkm1,"\n");
printf("Digite o PIB:");
scanf("%F", &pib1,"\n");
printf("Digite o numero de pontos turisticos:");
scanf("%i", &numeropontosturisticos1,"\n");

printf("\n");

printf("carta 1:\n\n");

printf("estado:%S\n", estado1);
printf("codigo da carta:%S\n", codigodacarta1);
printf("nome da cidade:%S\n", nomedacidade1);
printf("populacao:%i\n", populacao1);
printf("area em km2:%F\n", areaemkm1);
printf("PIB:%F\n", pib1);
printf("numero de pontos turisticos:%i\n", numeropontosturisticos1);

printf("\n\n");

printf("agora vamos cadastrar a segunda carta\n\n");

char estado2[50];
char codigodacarta2[50];
char nomedacidade2[50];
int populacao2;
float areaemkm2;
float pib2;
int numeropontosturisticos2;

printf("Digite o estado da cidade:");
scanf("%S", &estado2,"\n");
printf("Digite o codigo da carta:");
scanf("%S", &codigodacarta2,"\n");
printf("Digite o nome da cidade:");
scanf("%S", &nomedacidade2,"\n");
printf("Digite a populacao:");
scanf("%i", &populacao2,"\n");
printf("Digite a area em km2:");
scanf("%F", &areaemkm2,"\n");
printf("Digite o PIB:");
scanf("%F", &pib2,"\n");
printf("Digite o numero de pontos turisticos:");
scanf("%i", &numeropontosturisticos2,"\n");

printf("\n");

printf("carta 2:\n\n");

printf("estado:%S\n", estado2);
printf("codigo da carta:%S\n", codigodacarta2);
printf("nome da cidade:%S\n", nomedacidade2);
printf("populacao:%i\n", populacao2);
printf("area em km2:%F\n", areaemkm2);
printf("PIB:%F\n", pib2);
printf("numero de pontos turisticos:%i\n", numeropontosturisticos2);

printf("\n\n");

printf("Muito bem, as duas cartas foram cadastradas com sucesso!\n\n");

return 0;
}