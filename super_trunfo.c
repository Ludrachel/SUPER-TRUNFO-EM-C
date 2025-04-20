#include <stdio.h>

int main() {
    // Declarando as variáveis para armazenar os dados da primeira carta

    char estado1, nomeCidade1[100];       // Variáveis para o estado e nome da cidade da primeira carta
    char codigoCarta1[5], tipoCarta1;     // Variáveis para o código da carta e tipo de carta
    int populacao1, pontosTuristicos1;    // Variáveis para a população e pontos turísticos da cidade
    float area1, pib1;                    // Variáveis para a área e PIB da cidade


    // Solicitando e lendo as informações para a primeira carta
    printf("Informe o estado da primeira carta (A a H): ");      // Solicita o estado
    scanf(" %c", &estado1);                                      // Lê o estado, com o espaço antes do %c para ignorar qualquer caractere de nova linha pendente

    printf("Informe o código da carta da primeira cidade (ex: A01, B03): ");        // Solicita o código da carta
    scanf("%s", codigoCarta1);                                                      // Lê o código da carta como uma string (ex: A01, B03)

    // Usando fgets para ler o nome da cidade, permitindo espaços
    printf("Informe o nome da cidade da primeira carta: ");      // Solicita o nome da cidade
    getchar();                                                   // Consome o '\n' que ficou no buffer após o scanf anterior
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);              // Lê o nome da cidade (com espaços) até o limite do buffer

    // Remover o '\n' que pode ser lido pelo fgets ao pressionar Enter
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;                     // Substitui o '\n' que foi lido pelo fgets por '\0'

    printf("Informe a população da cidade da primeira carta: ");     // Solicita a população
    scanf("%d", &populacao1);                                        // Lê o número de habitantes da cidade

    printf("Informe a área da cidade em km² (primeira carta): ");    // Solicita a área em km²
    scanf("%f", &area1);                                             // Lê a área da cidade

    printf("Informe o PIB da cidade da primeira carta: ");           // Solicita o PIB da cidade
    scanf("%f", &pib1);                                              // Lê o PIB da cidade

    printf("Informe o número de pontos turísticos da cidade da primeira carta: ");  // Solicita os pontos turísticos
    scanf("%d", &pontosTuristicos1);                                               // Lê o número de pontos turísticos

    // Exibindo os dados da primeira carta
    printf("\nCARTA 1:\n");                           // Exibe uma linha para separar os dados
    printf("Estado: %c\n", estado1);                  // Exibe o estado da cidade
    printf("Código: %s\n", codigoCarta1);             // Exibe o código da carta
    printf("Nome da Cidade: %s\n", nomeCidade1);      // Exibe o nome da cidade
    printf("População: %d\n", populacao1);            // Exibe a população da cidade
    printf("Área: %.2f\n", area1);                    // Exibe a área da cidade com duas casas decimais
    printf("PIB: %.2f\n", pib1);                      // Exibe o PIB da cidade com duas casas decimais
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);  // Exibe o número de pontos turísticos

    // Declarando as variáveis para armazenar os dados da segunda carta
    char estado2, nomeCidade2[100];  
    char codigoCarta2[5], tipoCarta2;  
    int populacao2, pontosTuristicos2;  
    float area2, pib2;  

    // Solicitando e lendo as informações para a segunda carta
    printf("\nInforme o estado da segunda carta (A a H): ");  
    scanf(" %c", &estado2);  

    printf("Informe o código da carta da segunda cidade (ex: A01, B03): ");  
    scanf("%s", codigoCarta2);  

    // Usando fgets para ler o nome da cidade, permitindo espaços
    printf("Informe o nome da cidade da segunda carta: ");  
    getchar();  
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);  

    // Removendo o '\n' que pode ser lido pelo fgets ao pressionar Enter
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0; 

    printf("Informe a população da cidade da segunda carta: ");  
    scanf("%d", &populacao2);  

    printf("Informe a área da cidade em km² (segunda carta): ");  
    scanf("%f", &area2);  

    printf("Informe o PIB da cidade da segunda carta: ");  
    scanf("%f", &pib2);  

    printf("Informe o número de pontos turísticos da cidade da segunda carta: ");  
    scanf("%d", &pontosTuristicos2);  

    // Exibindo os dados da segunda carta
    printf("\nCARTA 2\n");  
    printf("Estado: %c\n", estado2);  
    printf("Código: %s\n", codigoCarta2);  
    printf("Nome da Cidade: %s\n", nomeCidade2);  
    printf("População: %d\n", populacao2);  
    printf("Área: %.2f\n", area2);  
    printf("PIB: %.2f\n", pib2);  
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);  

    return 0;  // Retorna 0, indicando que o programa terminou com sucesso
}
