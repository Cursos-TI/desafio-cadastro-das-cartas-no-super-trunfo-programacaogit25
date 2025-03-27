#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta de país
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float densidade;
    int pib;
} Carta;

// Função para exibir o menu e obter a escolha do usuário
int escolherAtributo(int escolhido) {
    int opcao;
    printf("\nEscolha um atributo para comparar:\n");
    if (escolhido != 1) printf("1 - População\n");
    if (escolhido != 2) printf("2 - Área\n");
    if (escolhido != 3) printf("3 - Densidade Demográfica\n");
    if (escolhido != 4) printf("4 - PIB\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    return (opcao >= 1 && opcao <= 4 && opcao != escolhido) ? opcao : escolherAtributo(escolhido);
}

// Função para obter o valor do atributo selecionado
float obterValor(Carta carta, int atributo) {
    switch (atributo) {
        case 1: return carta.populacao;
        case 2: return carta.area;
        case 3: return carta.densidade;
        case 4: return carta.pib;
        default: return 0;
    }
}

// Função para determinar o vencedor com base nos atributos escolhidos
void compararCartas(Carta c1, Carta c2) {
    int atributo1 = escolherAtributo(0);
    int atributo2 = escolherAtributo(atributo1);
    
    float valor1_c1 = obterValor(c1, atributo1);
    float valor1_c2 = obterValor(c2, atributo1);
    float valor2_c1 = obterValor(c1, atributo2);
    float valor2_c2 = obterValor(c2, atributo2);
    
    int pontos_c1 = 0, pontos_c2 = 0;
    
    // Comparação do primeiro atributo
    if (atributo1 == 3) { // Densidade (menor vence)
        pontos_c1 += (valor1_c1 < valor1_c2) ? 1 : 0;
        pontos_c2 += (valor1_c2 < valor1_c1) ? 1 : 0;
    } else {
        pontos_c1 += (valor1_c1 > valor1_c2) ? 1 : 0;
        pontos_c2 += (valor1_c2 > valor1_c1) ? 1 : 0;
    }
    
    // Comparação do segundo atributo
    if (atributo2 == 3) { // Densidade (menor vence)
        pontos_c1 += (valor2_c1 < valor2_c2) ? 1 : 0;
        pontos_c2 += (valor2_c2 < valor2_c1) ? 1 : 0;
    } else {
        pontos_c1 += (valor2_c1 > valor2_c2) ? 1 : 0;
        pontos_c2 += (valor2_c2 > valor2_c1) ? 1 : 0;
    }
    
    float soma_c1 = valor1_c1 + valor2_c1;
    float soma_c2 = valor1_c2 + valor2_c2;
    
    printf("\nResultado da comparação:\n");
    printf("%s: %0.2f + %0.2f = %0.2f\n", c1.nome, valor1_c1, valor2_c1, soma_c1);
    printf("%s: %0.2f + %0.2f = %0.2f\n", c2.nome, valor1_c2, valor2_c2, soma_c2);
    
    if (soma_c1 > soma_c2) {
        printf("Vencedor: %s!\n", c1.nome);
    } else if (soma_c2 > soma_c1) {
        printf("Vencedor: %s!\n", c2.nome);
    } else {
        printf("Empate!\n");
    }
}

int main() {
    Carta carta1 = {"Brasil", 213000000, 8515767, 25.0, 1445000};
    Carta carta2 = {"Argentina", 45380000, 2780400, 16.3, 487000};
    
    compararCartas(carta1, carta2);
    return 0;
}
