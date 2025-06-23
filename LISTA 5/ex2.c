#include <stdio.h>
int main() {
    int v[5];
    printf("Digite 5 valores:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
    }

    printf("Resultado da multiplicação por sua posição:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", v[i] * i);
    }
    return 0;
}

