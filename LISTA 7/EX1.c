#include <stdio.h>

void cumprimentar(const char *nome) {
    printf("Olá, %s!\n", nome);
}

int main() {
    cumprimentar("Vitor");
    return 0;
}