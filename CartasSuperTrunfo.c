#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codigo_cidade;
    char nome_cidade[50];
    int Populacao;
    double Area;
    double Pib;
    int Numero_pontos_turisticos;
 
    // Cadastro das Cartas:  
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
printf("Digite o código da cidade: \n");
scanf("%d", &codigo_cidade);

printf("Digite o nome da cidade: \n");
scanf("%s", &nome_cidade);

printf("Digite a População da cidade: \n");
scanf("%d", &Populacao);

printf("Digite a área da cidade: \n");
scanf("%lf", &Area);

printf("Qual o PIB da cidade: \n");
scanf("%lf", &Pib);

printf("Qual a quantidade de pontos turisticos: \n");
scanf("%d", &Numero_pontos_turisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
       printf(" \nCódigo da cidade: %d\n", codigo_cidade);
       printf(" Nome da cidade: %s\n", nome_cidade);
       printf(" População: %d\n", Populacao);
       printf(" Área: %.2lf\n", Area);
       printf(" PIB: %2lf\n", Pib);
       printf(" Número de pontos turisticos: %d\n", Numero_pontos_turisticos); 
       

    return 0;
}
