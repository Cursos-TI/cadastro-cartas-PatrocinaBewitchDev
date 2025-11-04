#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    int populacao = 12325000; //numero de população
    int turistico = 50; // ponto turistico
    float area = 1521.11; // metros quadrado da area
    float pib = 699.28; // Produto interno bruto
    char estado = "Sul"; //Localidade
    char carta[20] = "A01"; // código da carta
    char cidade[20] = "Brasil"; // nome da cidade

  // Área para entrada de dados

    scanf(" %c\n", &estado);
    scanf(" %s\n", carta);
    scanf(" %s\n", cidade);
    scanf(" %d\n", &populacao);
    scanf(" %f\n", &area);
    scanf(" %f\n", &pib);
    scanf(" %d\n", &turistico);

  // Área para exibição dos dados da cidade

    printf("Localidade: %s\n", estado);
    printf("Codigo da carta: %s\n", carta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacaoo: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", turistico);

return 0;
} 
