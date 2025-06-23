#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N, dado[6] = {0};

    printf("Digite o número de lançamentos: ");
    scanf("%d", &N);

    srand(time(NULL));

    for (int i = 0; i < N; i++) {
        int face = rand() % 6; 
        dado[face]++;
    }

    printf("Percentual de cada face:\n");
    for (int i = 0; i < 6; i++) {
        float perc = (dado[i] / (float)N) * 100;
        printf("Face %d: %.2f%% (%d vezes)\n", i + 1, perc, dado[i]);
    }

    return 0;
}
