#include <stdio.h>

int main() {
    int passos[7];
    const char *dias[] = {"Dom", "Seg", "Ter", "Qua", "Qui", "Sex", "Sab"};
    int total = 0;

    printf("Digite a quantidade de passos por dia:\n");
    for (int i = 0; i < 7; i++) {
        printf("%s: ", dias[i]);
        scanf("%d", &passos[i]);
        total += passos[i];
    }

    float media = total / 7.0;

    printf("\nTotal de passos na semana: %d\n", total);
    printf("Média diária de passos: %.2f\n", media);

    printf("Dias em que a meta de 10.000 passos foi alcançada:\n");
    int atingiuMeta = 0;
    for (int i = 0; i < 7; i++) {
        if (passos[i] >= 10000) {
            printf("- %s (%d passos)\n", dias[i], passos[i]);
            atingiuMeta = 1;
        }
    }

    if (!atingiuMeta)
        printf("Meta não foi atingida em nenhum dia.\n");

    return 0;
}