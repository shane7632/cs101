/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    for (int i = 1; i <= 81; i++) {
        int y = (i - 1) / 9 + 1;
        int x = i % 9 == 0 ? 9 : i % 9;
        printf("%d*%d=%d\t", y, x, y * x);

        if (i % 9 == 0) {
            printf("\n");
        }
    }

    return 0;
}
