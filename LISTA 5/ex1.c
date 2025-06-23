#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
//NAO CONSEGUI

int main() {
    int v[TAM], vInverso[TAM], vPares[TAM], vImpares[TAM];
    int soma = 0, produto = 1;
    int encontrou50 = 0, ocorrencias50 = 0;
    int maior, menor;
    int qtdPares = 0, qtdImpares = 0;

    srand(time(NULL));

    for (int i = 0; i < TAM; i++) {
        v[i] = 10 + rand() % 81;
    }

    printf("Vetor original: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    maior = menor = v[0];

    for (int i = 0; i < TAM; i++) {
        soma += v[i];
        produto *= v[i];

        if (v[i] == 50) {
            encontrou50 = 1;
            ocorrencias50++;
        }

        if (v[i] > maior) maior = v[i];
        if (v[i] < menor) menor = v[i];

        if (v[i] % 2 == 0) {
            vPares[qtdPares++] = v[i];
        } else {
            vImpares[qtdImpares++] = v[i];
        }

        vInverso[TAM - 1 - i] = v[i];
    }

    printf("O valor 50 %s no vetor.\n", encontrou50 ? "existe" : "não existe");

    printf("Média dos valores: %.2f\n", soma / (float)TAM);

    printf("Maior valor: %d, Menor valor: %d\n", maior, menor);

    printf("Soma: %d, Produto: %d\n", soma, produto);

    printf("Vetor em ordem inversa: ");
    for (int i = TAM - 1; i >= 0; i--) {
        printf("%d ", v[i]);
    }
    printf("\n");

    printf("Vetor copiado em ordem inversa: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", vInverso[i]);
    }
    printf("\n");

    printf("Elementos pares: ");
    for (int i = 0; i < qtdPares; i++) {
        printf("%d ", vPares[i]);
    }
    printf("\n");

    printf("Elementos ímpares: ");
    for (int i = 0; i < qtdImpares; i++) {
        printf("%d ", vImpares[i]);
    }
    printf("\n");

    return 0;
}