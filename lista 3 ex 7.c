/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float salario, desconto;

    printf("Digite o salário: R$ ");
    scanf("%f", &salario);

    desconto = salario * 0.11;
    if (desconto > 318.20)
        desconto = 318.20;

    printf("Desconto: R$ %.2f\n", desconto);

    return 0;
}