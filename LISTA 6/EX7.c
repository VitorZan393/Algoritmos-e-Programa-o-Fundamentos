#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int M[5][5];
    srand(time(NULL));

    printf("Matriz original:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            M[i][j] = -10 + rand() % 21;
            printf("%4d", M[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz com sinais invertidos:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            M[i][j] *= -1;
            printf("%4d", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}