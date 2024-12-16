#include "add.h"
#include "test.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a = 1;
    int b = 2;
    int c = add(a, b);
    printf("%d + %d = %d\n", a, b, c);
    return EXIT_SUCCESS;
}
