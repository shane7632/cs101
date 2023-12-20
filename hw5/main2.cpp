/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int a = 1000000;  
    double PI = 4.0;

    for (int i = 1; i <= a; i++) {
        double term = 4.0 / (2 * i + 1);

        if (i % 2 == 0) {
            PI += term;
        } else {
            PI -= term;
        }
    }

    printf("%.5f\n", PI);
    

    return 0;
}

