#include <stdio.h>

// Para executar: gcc CartasSuperTrunfo.c -o CartasSuperTrunfo.exe
// ./CartasSuperTrunfo.exe
// Estrutura para armazenar os dados da cidade
struct Cidade {
    int codigo;               // Código da cidade
    char nome[100];           // Nome da cidade
    int populacao;            // População da cidade
    float area;               // Área da cidade (em km²)
    float pib;                // PIB da cidade (em bilhões)
    int pontosTuristicos;     // Número de pontos turísticos
};

int main() {
    // Definir uma variável do tipo 'Cidade' para armazenar os dados
    struct Cidade cidade;

    // Cadastro das Cartas:
    printf("Digite o código da cidade: ");
    scanf("%d", &cidade.codigo);
    
    printf("Digite o nome da cidade: ");
    getchar(); // Para consumir o caractere de nova linha que fica na memória após o scanf anterior
    fgets(cidade.nome, sizeof(cidade.nome), stdin);  // Utilizamos fgets para permitir espaços no nome

    printf("Digite a população da cidade: ");
    scanf("%d", &cidade.populacao);
    
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &cidade.area);
    
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &cidade.pib);
    
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &cidade.pontosTuristicos);

    // Exibição dos Dados das Cartas:
    printf("\nInformações cadastradas sobre a cidade:\n");
    printf("Código: %d\n", cidade.codigo);
    printf("Nome: %s", cidade.nome);  // fgets inclui a nova linha, então não precisamos de \n aqui
    printf("População: %d\n", cidade.populacao);
    printf("Área: %.2f km²\n", cidade.area);
    printf("PIB: %.2f bilhões\n", cidade.pib);
    printf("Pontos turísticos: %d\n", cidade.pontosTuristicos);

    return 0;
}
