#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIAS 30

int main() {
    int consumo[DIAS];
    int total = 0, maior = 0, menor = 0;
    int diaMaior = 0, diaMenor = 0;

    srand(time(NULL));

    // a. Sorteio dos consumos entre 100 e 500 litros
    for (int i = 0; i < DIAS; i++) {
        consumo[i] = 100 + rand() % 401; // 100 a 500
        total += consumo[i];

        if (i == 0 || consumo[i] > maior) {
            maior = consumo[i];
            diaMaior = i + 1;
        }

        if (i == 0 || consumo[i] < menor) {
            menor = consumo[i];
            diaMenor = i + 1;
        }
    }

    // b. Total do mês
    printf("Consumo total no mês: %d litros\n", total);

    // c. Média diária
    printf("Média de consumo diário: %.2f litros\n", total / (float)DIAS);

    // d. Dia com maior e menor consumo
    printf("Maior consumo: %d litros (Dia %d)\n", maior, diaMaior);
    printf("Menor consumo: %d litros (Dia %d)\n", menor, diaMenor);

    return 0;
}