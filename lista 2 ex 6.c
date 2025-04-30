/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
int smartphones, tablets;
    float total_vendas;
    printf("Digite o número de smartphones vendidos: ");
    scanf("%d", &smartphones);
    printf("Digite o número de tablets vendidos: ");
    scanf("%d", &tablets);
    total_vendas = (smartphones * 1000.0) + (tablets * 1500.0);
    printf("Total arrecadado: R$ %.2f\n\n", total_vendas);
    return 0;
}

