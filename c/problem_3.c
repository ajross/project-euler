#include "stdio.h"

int main(int argc, char** argv) {
    long num = 600851475143;
    int factor;
    int largest = 0;

    while (num > 0) {
        factor = 2;
        while(num % factor != 0) {
            factor ++;
        }
        /*printf("%d, ", factor);*/
        if (factor > largest) {
            largest = factor;
        }
        num /= factor;
    }

    printf("Largest factor is: %d\n", largest);

    return 0;
}
