#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIAS 30

int main() {
    int consumo[DIAS];
    int total = 0, maior = 0, menor = 0;
    int diaMaior = 0, diaMenor = 0;

    srand(time(NULL));

    for (int i = 0; i < DIAS; i++) {
        consumo[i] = 100 + rand() % 401; 
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

    printf("Consumo total no mês: %d litros\n", total);
    printf("Média de consumo diário: %.2f litros\n", total / (float)DIAS);
    printf("Maior consumo: %d litros (Dia %d)\n", maior, diaMaior);
    printf("Menor consumo: %d litros (Dia %d)\n", menor, diaMenor);

    return 0;
}