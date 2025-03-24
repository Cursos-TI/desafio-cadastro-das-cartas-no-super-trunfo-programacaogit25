#include <stdio.h>
#include <string.h>

// Estrutura para armazenar informações de um país
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica;
} Pais;

// Função para comparar os atributos e exibir o resultado
void comparar_atributos(Pais p1, Pais p2, int opcao) {
    printf("\nComparando os países: %s vs %s\n", p1.nome, p2.nome);
    
    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", p1.nome, p1.populacao);
            printf("%s: %d habitantes\n", p2.nome, p2.populacao);
            if (p1.populacao > p2.populacao) printf("Vencedor: %s\n", p1.nome);
            else if (p1.populacao < p2.populacao) printf("Vencedor: %s\n", p2.nome);
            else printf("Empate!\n");
            break;
        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", p1.nome, p1.area);
            printf("%s: %.2f km²\n", p2.nome, p2.area);
            if (p1.area > p2.area) printf("Vencedor: %s\n", p1.nome);
            else if (p1.area < p2.area) printf("Vencedor: %s\n", p2.nome);
            else printf("Empate!\n");
            break;
        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f trilhões\n", p1.nome, p1.pib);
            printf("%s: %.2f trilhões\n", p2.nome, p2.pib);
            if (p1.pib > p2.pib) printf("Vencedor: %s\n", p1.nome);
            else if (p1.pib < p2.pib) printf("Vencedor: %s\n", p2.nome);
            else printf("Empate!\n");
            break;
        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos turísticos\n", p1.nome, p1.pontos_turisticos);
            printf("%s: %d pontos turísticos\n", p2.nome, p2.pontos_turisticos);
            if (p1.pontos_turisticos > p2.pontos_turisticos) printf("Vencedor: %s\n", p1.nome);
            else if (p1.pontos_turisticos < p2.pontos_turisticos) printf("Vencedor: %s\n", p2.nome);
            else printf("Empate!\n");
            break;
        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", p1.nome, p1.densidade_demografica);
            printf("%s: %.2f hab/km²\n", p2.nome, p2.densidade_demografica);
            if (p1.densidade_demografica < p2.densidade_demografica) printf("Vencedor: %s\n", p1.nome);
            else if (p1.densidade_demografica > p2.densidade_demografica) printf("Vencedor: %s\n", p2.nome);
            else printf("Empate!\n");
            break;
        default:
            printf("Opção inválida!\n");
    }
}

int main() {
    // Definição de dois países para comparação
    Pais pais1 = {"Brasil", 214000000, 8515767, 2.05, 50, 25.1};
    Pais pais2 = {"França", 67500000, 551695, 2.78, 40, 122.3};

    int opcao;
    
    do {
        printf("\nEscolha um atributo para comparar:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("0 - Sair\n");
        printf("Digite sua opção: ");
        scanf("%d", &opcao);

        if (opcao > 0 && opcao <= 5) {
            comparar_atributos(pais1, pais2, opcao);
        }
        else if (opcao != 0) {
            printf("Opção inválida! Tente novamente.\n");
        }

    } while (opcao != 0);
    
    printf("Programa encerrado.\n");
    return 0;
}