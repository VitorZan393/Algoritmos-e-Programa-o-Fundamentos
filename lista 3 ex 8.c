/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float compra, venda;

    printf("Digite o valor de compra: R$ ");
    scanf("%f", &compra);

    if (compra < 20)
        venda = compra * 1.45;
    else if (compra <= 50)
        venda = compra * 1.35;
    else
        venda = compra * 1.25;

    printf("Valor de venda: R$ %.2f\n", venda);

    return 0;
}