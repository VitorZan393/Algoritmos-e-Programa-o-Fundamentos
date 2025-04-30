/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
float peso_prato, valor_total;
float preco_por_kg = 40.0;
printf("Digite o peso do prato (em kg): ");
scanf("%f", &peso_prato);
valor_total = peso_prato * preco_por_kg;
printf("O valor a pagar é: R$ %.2f\n", valor_total);
return 0;
}
