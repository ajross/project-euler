#include "stdio.h"

int main(int argc, char **argv) {
    int i, j;
    int max = 0;

    for (i = 100; i < 1000; i++) {
        for (j = i; j < 1000; j++) {
            int prod = i * j;
            int cmp = 0;

            while(prod != 0) {
                cmp *= 10;
                cmp += (prod % 10);
                prod /= 10;
            }
            prod = i * j;
            if ((prod == cmp) && (prod > max)) {
                max = prod;
            }
        }
    }

    printf("The max palindromic number is: %d\n", max);
    return 0;
}
