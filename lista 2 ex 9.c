/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
float valor_compra, valor_com_desconto;
    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);
    valor_com_desconto = valor_compra * 0.85;
    printf("Valor com 15%% de desconto: R$ %.2f\n\n", valor_com_desconto);

    return 0;
}

