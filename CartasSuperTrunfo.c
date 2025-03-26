#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char inicial = 'A';
    char codigo[] = "A01";
    char nome_da_cidade[20]= "Sao Paulo";
    int populacao = 12325000;
    float area = 1521.11;
    float PIB =  699.28;
    int numero_de_pontos_turisticos = 50;
    float densidade_populacional = (float) (populacao / area);
    float PIB_per_capta = (float) (PIB / populacao)* (1000000000);
    float superPoder = (float) (populacao + area + PIB + PIB_per_capta + (1 / densidade_populacional) + numero_de_pontos_turisticos);

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Carta 01 \n");

    printf("Estado: %c \n", inicial);

    printf("Código: %s \n", codigo);
    
    printf("Nome da cidade: %s\n", nome_da_cidade);

    printf("População: %d \n", populacao);

    printf("Área: %.2f km² \n", area);

    printf("PIB: %.2f  bilhões de reais \n", PIB);

    printf("Números de pontos turísticos: %d \n", numero_de_pontos_turisticos);

    printf("Densidade populacional: %.2f  hab/km² \n", densidade_populacional);

    printf("PIB per capta: %.2f reais \n", PIB_per_capta);

    printf("Super Poder: %.2f \n \n", superPoder);

    char inicial2 = 'B';
    char codigo2[] = "B02";
    char nome_da_cidade2[20]= "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float PIB2 = 300.50;
    int numero_de_pontos_turisticos2 = 30;
    float densidade_populacional2 = (float) (populacao2 / area2);
    float PIB_per_capta2 = (float) (PIB2 / populacao2)* (1000000000);
    float superPoder2 = (float) (populacao2 + area2 + PIB2 + PIB_per_capta2 + (1 / densidade_populacional2) + numero_de_pontos_turisticos2);

    int resultado;

    printf("Carta 02 \n");

    printf("Estado: %c \n", inicial2);

    printf("Código: %s \n", codigo2);
    
    printf("Nome da cidade: %s\n", nome_da_cidade2);

    printf("População: %d \n", populacao2);

    printf("Área: %.2f km² \n", area2);

    printf("PIB: %.2f  bilhões de reais \n", PIB2);

    printf("Números de pontos turísticos: %d \n", numero_de_pontos_turisticos2);

    printf("Densidade populacional: %.2f  hab/km² \n", densidade_populacional2);

    printf("PIB per capta: %.2f reais \n", PIB_per_capta2);

    printf("Super Poder: %.2f \n \n", superPoder2);

    resultado = superPoder > superPoder2;
    printf("O resultado total da Carta 01 (%.2f) é maior do que o valor total da Carta 02 (%.2f): %d \n", 
                                superPoder,
                                superPoder2,
                                superPoder > superPoder2);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}