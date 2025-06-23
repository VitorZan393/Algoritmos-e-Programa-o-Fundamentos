#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float notas[10][3];
    srand(time(NULL));

    printf("Grau A  Grau B  Média\n");
    for (int i = 0; i < 10; i++) {
        notas[i][0] = ((float)(rand() % 101)) / 10.0;
        notas[i][1] = ((float)(rand() % 101)) / 10.0;
        notas[i][2] = notas[i][0] * 0.4 + notas[i][1] * 0.6;

        printf("%6.1f  %6.1f  %5.1f\n", notas[i][0], notas[i][1], notas[i][2]);
    }

    return 0;
}