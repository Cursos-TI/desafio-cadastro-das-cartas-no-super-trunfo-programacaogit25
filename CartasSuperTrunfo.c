#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Moises


//TODAS AS VARIAVES DA DUAS CARTA 
int main() {
    int CARTA1;
    int CARTA2;
    char ESTADO1;
    char ESTADO;
    char CODIGO1[20];
    char CODIGO2[20];
    char CIDADE1[20];
    char CIDADE2[20];
    int POPULACAO1;
    int POPULACAO2;
    float PIB1;
    float PIB2;
    float AREA1;
    float AREA2;
    int QUANTIDADE1;
    int QUANTIDADE2;

    // Entrada de dados
    printf("CARTA1: \n");
    scanf(" %d", &CARTA1); 
    printf("CARTA2: \n");
    scanf(" %d", &CARTA2); 
    getchar();  // Limpar o buffer do teclado após o scanf para capturar o próximo char corretamente
    printf("ESTADO1: \n");
    scanf(" %c", &ESTADO1);  
    printf("ESTADO: \n");
    scanf(" %c", &ESTADO);  
    printf("CODIGO DA CARTA1: \n");
    scanf(" %s", CODIGO1); 
    printf("CODIGO DA CARTA2: \n");
    scanf(" %s", CODIGO2);  
    printf("NOME DA CIDADE1: \n");
    scanf(" %s", CIDADE1);  
    printf("NOME DA CIDADE2: \n");
    scanf(" %s", CIDADE2);  
    printf("POPULACAO1: \n");
    scanf(" %d", &POPULACAO1);
    printf("POPULACAO2: \n");
    scanf(" %d", &POPULACAO2);
    printf("PIB1: \n");
    scanf(" %f", &PIB1);
    printf("PIB2: \n");
    scanf(" %f", &PIB2);
    printf("AREA1: \n");
    scanf(" %f", &AREA1);
    printf("AREA2: \n");
    scanf(" %f", &AREA2);
    printf("QUANTIDADE1: \n");
    scanf(" %d", &QUANTIDADE1);
    printf("QUANTIDADE2: \n");
    scanf(" %d", &QUANTIDADE2);
    // Exibir os dados para conferência
    printf("\nDados da Carta1:\n");
    printf("CARTA1: %d\n", CARTA1);
    printf("ESTADO1: %c\n", ESTADO1);
    printf("CODIGO DA CARTA1: %s\n", CODIGO1);
    printf("CIDADE1: %s\n", CIDADE1);
    printf("POPULACAO1: %d\n", POPULACAO1);
    printf("PIB1: %.2f\n", PIB1);
    printf("AREA1: %.2f\n", AREA1);
    printf("QUANTIDADE1: %d\n", QUANTIDADE1);
    
 // Exibir os dados para conferência
   printf("\nDados da Carta2:\n");
   printf("CARTA2: %d\n", CARTA2);
   printf("ESTADO: %c\n", ESTADO);
   printf("CODIGO DA CARTA2: %s\n", CODIGO2);
   printf("CIDADE2: %s\n", CIDADE2);
   printf("POPULACAO2: %d\n", POPULACAO2);
   printf("PIB2: %.2f\n", PIB2);
   printf("AREA2: %.2f\n", AREA2);
   printf("QUANTIDADE2: %d\n", QUANTIDADE2);

    return 0;
}