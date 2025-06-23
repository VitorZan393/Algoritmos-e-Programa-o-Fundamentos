/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int A, B, C;
    printf("Digite A, B e C: ");
    scanf("%d %d %d", &A, &B, &C);

    if ((A + B) < (A + C))
        printf("A + B e menor que A + C\n");
    else
        printf("A + B nao e menor que A + C\n");

    return 0;
}
