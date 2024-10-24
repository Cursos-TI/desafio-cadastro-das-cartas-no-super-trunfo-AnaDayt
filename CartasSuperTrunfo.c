#include <stdio.h>

int main() {
    // Variáveis separadas para cada atributo da cidade.
    int codigo_cidade;
    char nome_cidade[100]; 
    int Populacao;
    double Area;
    double Pib;
    int Numero_pontos_turisticos;

    // Cadastro das Cartas:
    printf("Digite o código da cidade: \n");
    scanf(" %d", &codigo_cidade);

// Não retorna nome composto
    printf("Digite o nome da cidade sem espaços: \n");
    scanf("%s", nome_cidade);

    printf("Digite a População da cidade: \n");
    scanf(" %d", &Populacao);

    printf("Digite a área da cidade: \n");
    scanf(" %lf", &Area);

    printf("Qual o PIB da cidade: \n");
    scanf(" %lf", &Pib);

    printf("Qual a quantidade de pontos turisticos: \n");
    scanf(" %d", &Numero_pontos_turisticos);

    // Exibição dos Dados das Cartas:
    printf("\nCódigo da cidade: %d\n", codigo_cidade);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2lf\n", Area);
    printf("PIB: %.2lf\n", Pib);  
    printf("Número de pontos turísticos: %d\n", Numero_pontos_turisticos);

    return 0;
}

