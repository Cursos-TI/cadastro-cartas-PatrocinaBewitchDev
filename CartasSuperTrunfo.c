#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    float populacao = 212.6; //numero de população
    int turistico = 934; // ponto turistico
    float area = 8515.767; // metros quadrado da area
    float pib = 11.7; // Produto interno bruto
    char estado[20] = "Sul"; //Localidade
    char carta[20] = "A01"; // código da carta
    char cidade[20] = "Brasil"; // nome da cidade

  // Área para entrada de dados

    printf("Localidade: %s\n", estado);
    printf("Codigo da carta: %s\n", carta);
    printf("Nome do Pais: %s\n", cidade);
    printf("Populacao: %.1f Milhoes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.1f Trilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", turistico);


  // Área para exibição dos dados da cidade

    scanf(" %s\n", estado);
    scanf(" %s\n", carta);
    scanf(" %s\n", cidade);
    scanf(" %d\n", &populacao);
    scanf(" %f\n", &area);
    scanf(" %f\n", &pib);
    scanf(" %d\n", &turistico);



return 0;
} 
