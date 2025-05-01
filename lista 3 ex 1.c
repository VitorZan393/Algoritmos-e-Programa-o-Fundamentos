/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float num1, num2;
    printf("Digite o numerador: ");
    scanf("%f", &num1);
    printf("Digite o denominador: ");
    scanf("%f", &num2);

    if (num2 != 0)
        printf("Resultado da divisao: %.2f\n", num1 / num2);
    else
        printf("Erro: Divisao por zero nao permitida.\n");

    return 0;
}
