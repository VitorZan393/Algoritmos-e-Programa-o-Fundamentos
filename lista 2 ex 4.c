/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
float grauA, grauB, media_final;
printf("Digite a nota do Grau A: ");
scanf("%f", &grauA);
printf("Digite a nota do Grau B: ");
scanf("%f", &grauB);
media_final = (grauA + 2 * grauB) / 3.0;
printf("Sua média final é: %.2f\n", media_final);
return 0;
}
