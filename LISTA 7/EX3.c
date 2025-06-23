#include <stdio.h>

float mediaUnisinos(float grauA, float grauB) {
    return grauA * 0.4 + grauB * 0.6;
}

int main() {
    float media = mediaUnisinos(7.5, 6.0);
    printf("Média final: %.2f\n", media);
    return 0;
}