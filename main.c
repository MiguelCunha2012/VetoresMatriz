#include <stdio.h>

int main() {
    // Matriz de preços
    float precos[3][2] = {
        {15.00, 12.50},
        {13.00, 7.50},
        {100.00, 97.00}
    };

    float medias[3]; // Vetor para armazenar as médias
    float *ponteiroPreco; // Ponteiro para os preços
    int n = 2; // Número de preços por material

    // Cálculo das médias
    for (int i = 0; i < 3; i++) {
        float soma = 0; // Inicializa a soma como 0
        ponteiroPreco = precos[i]; // Ponteiro aponta para a linha atual da matriz

        for (int j = 0; j < n; j++) {
            soma += *(ponteiroPreco + j); // Soma os preços usando o ponteiro
        }

        medias[i] = soma / n; // Calcula a média e armazena no vetor de médias
    }

    // Exibe as médias
    printf("Média de preço por material:\n");
    for (int i = 0; i < 3; i++) {
        printf("%.2f\t", medias[i]);
    }
    printf("\n");

    return 0;
}
