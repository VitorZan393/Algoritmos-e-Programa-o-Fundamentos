/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
int passaros;
    float racao_diaria;
    printf("Digite o número de pássaros: ");
    scanf("%d", &passaros);
    racao_diaria = passaros * 30.0 / 1000.0; // em kg
    printf("Ração diária necessária: %.2f kg\n\n", racao_diaria);
    return 0;
}

