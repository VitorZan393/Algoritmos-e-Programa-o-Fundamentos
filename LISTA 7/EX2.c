#include <stdio.h>


void tabuada(int numero) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}
int main() {
    tabuada(7);  
    return 0;
}