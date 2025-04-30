/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {

    int minutos, segundos;
    printf("Digite o tempo em minutos: ");
    scanf("%d", &minutos);
    segundos = minutos * 60;
    printf("Tempo em segundos: %d\n\n", minutos * 60);
    return 0;

}