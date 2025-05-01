/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7) printf("Categoria: Infantil A\n");
    else if (idade <= 10) printf("Categoria: Infantil B\n");
    else if (idade <= 13) printf("Categoria: Juvenil A\n");
    else if (idade <= 17) printf("Categoria: Juvenil B\n");
    else if (idade >= 18) printf("Categoria: Sênior\n");
    else printf("Sem categoria\n");

    return 0;
}
    