/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
int qtd_camisetas, qtd_calcas, qtd_cintos;
float total, desconto, total_com_desconto;
float preco_camiseta = 25.0;
float preco_calca = 100.0;
float preco_cinto = 40.0;
printf("Digite a quantidade de camisetas compradas: ");
scanf("%d", &qtd_camisetas);
printf("Digite a quantidade de calças compradas: ");
scanf("%d", &qtd_calcas);
printf("Digite a quantidade de cintos comprados: ");
scanf("%d", &qtd_cintos);
total = qtd_camisetas * preco_camiseta + qtd_calcas * preco_calca +
qtd_cintos * preco_cinto;
desconto = total * 0.10;
total_com_desconto = total - desconto;
printf("Valor do desconto: R$ %.2f\n", desconto);
printf("Valor final da compra: R$ %.2f\n", total_com_desconto);
return 0;
}
