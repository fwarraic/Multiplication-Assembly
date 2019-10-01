
#include <stdio.h>

unsigned times(unsigned, unsigned);

void main () {
    unsigned a = 3;
    unsigned b = 5;
    printf("The product of %u and %u is %u.\n", a, b, times(a,b));
    return;
}

