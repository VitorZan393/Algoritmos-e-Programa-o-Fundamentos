#include <stdio.h>

void gerarIdentidade(int matriz[4][4]) {
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            matriz[i][j] = (i == j) ? 1 : 0;
}

int main() {
    int identidade[4][4];
    gerarIdentidade(identidade);

    printf("Matriz Identidade 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", identidade[i][j]);
        }
        printf("\n");
    }

    return 0;
}