#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int M[4][6];
    int somaLinha2 = 0, somaCol5 = 0, multLin1x4 = 0;
    int somaColPares = 0, somaLinImpares = 0;

    srand(time(NULL));

    printf("Matriz 4x6:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            M[i][j] = -10 + rand() % 21;
            printf("%4d", M[i][j]);

            if (i == 1) somaLinha2 += M[i][j];
            if (j == 4) somaCol5 += M[i][j];
            if (i == 0) multLin1x4 += M[i][j] * M[3][j];
            if (j % 2 == 0) somaColPares += M[i][j];
            if (i % 2 == 1) somaLinImpares += M[i][j];
        }
        printf("\n");
    }

    printf("\nSoma da 2ª linha: %d\n", somaLinha2);
    printf("Soma da 5ª coluna: %d\n", somaCol5);
    printf("Multiplicação da 1ª linha x 4ª linha: %d\n", multLin1x4);
    printf("Soma das colunas de índice par: %d\n", somaColPares);
    printf("Soma das linhas de índice ímpar: %d\n", somaLinImpares);

    return 0;
}