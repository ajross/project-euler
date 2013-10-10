#include "stdlib.h"
#include "stdio.h"

#define MEMSIZE 1000000000

int main(int argc, char **argv) {

    char *mem = NULL;
    unsigned long count = 0;

    mem = calloc(MEMSIZE, sizeof(char));

    unsigned long i, j;
    for (i = 4; i < MEMSIZE; i+=2) {
        mem[i] = 1;
    }

    for (i = 3; i < MEMSIZE; i+=2) {
        for (j = i * i; j < MEMSIZE; j += i) {
            mem[j] = 1;
        }
    }

    for (i = 2; i < MEMSIZE; i++) {
        if(mem[i] == 0) {
            count ++;
            if (count == 10001) {
                printf("The 10,001st prime number is: %lu\n", i);
            }
        }
    }

    printf("%lu primes below %lu\n", count, (unsigned long)MEMSIZE);

    free(mem);

    return 0;
}
