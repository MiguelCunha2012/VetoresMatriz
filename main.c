#include <stdio.h>

int main() {
    float precos[3][2] = {
        {15.00, 12.50},
        {13.00, 7.50},
        {100.00, 97.00}
    };

    float medias[3];
    float *ponteiroPreco;
    int n = 2;

    for (int i = 0; i < 3; i++) {
        float soma = 0;
        ponteiroPreco = precos[i];

        for (int j = 0; j < n; j++) {
            soma += *(ponteiroPreco + j);
        }

        medias[i] = soma / n;
    }

    printf("Média de preço por material:\n");
    for (int i = 0; i < 3; i++) {
        printf("%.2f\t", medias[i]);
    }
    printf("\n");

    return 0;
}
