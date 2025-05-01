/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int faces, resultado;

    printf("Informe o número de faces (4, 6, 8, 10, 12, 16): ");
    scanf("%d", &faces);

    if (faces == 4 || faces == 6 || faces == 8 || faces == 10 || faces == 12 || faces == 16) {
        srand(time(NULL));
        resultado = (rand() % faces) + 1;
        printf("Resultado do dado: %d\n", resultado);
    } else {
        printf("Número de faces inválido!\n");
    }

    return 0;
}