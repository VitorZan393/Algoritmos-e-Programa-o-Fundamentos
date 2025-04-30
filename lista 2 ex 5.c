/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
float preco_litro, valor_disponivel, litros_abastecidos;
    printf("Digite o preço do litro da gasolina: ");
    scanf("%f", &preco_litro);
    printf("Digite o valor disponível para abastecer: ");
    scanf("%f", &valor_disponivel);
    litros_abastecidos = valor_disponivel / preco_litro;
    printf("Litros abastecidos: %.2f\n\n", litros_abastecidos);
    return 0;
}
