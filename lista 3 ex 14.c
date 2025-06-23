/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float grauA, grauB, media, grauC;
    char substitui;

    printf("Nota Grau A: ");
    scanf("%f", &grauA);
    printf("Nota Grau B: ");
    scanf("%f", &grauB);

    media = (grauA + grauB) / 2;
    printf("Média: %.2f\n", media);

    if (media >= 6)
        printf("Aprovado por média!\n");
    else {
        printf("Recuperação! Deseja substituir Grau A ou B? (a/b): ");
        scanf(" %c", &substitui);
        printf("Digite a nota do Grau C: ");
        scanf("%f", &grauC);

        if (substitui == 'a') media = (grauC + grauB) / 2;
        else media = (grauA + grauC) / 2;

        printf("Nova média: %.2f\n", media);
        if (media >= 6) printf("Aprovado!\n");
        else printf("Reprovado!\n");
    }

    return 0;
}