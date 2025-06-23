/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("Par\n");
    else
        printf("Impar\n");

    return 0;
}