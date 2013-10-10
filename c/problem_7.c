#include "stdlib.h"
#include "stdio.h"

#define MEMSIZE 10000000000

int main(int argc, char **argv) {

    char *mem = NULL;
    unsigned long count = 1;

    mem = calloc(MEMSIZE, sizeof(char));

    unsigned long i, j, index;

    for(i = 3; i < MEMSIZE; i += 2){
        for (j = i * i; j < MEMSIZE; j += (i*2)) {
            index = (j/2);
            mem[index] = 1;
//            printf("i = %lu, j = %lu, index = %lu\n", i, j, index);
        }
    }


    for (i = 1; i < MEMSIZE; i++) {
        if(mem[i] == 0) {
//            printf("%lu\n", (unsigned long)((i*2) + 1));
            count ++;
            if (count == 10001) {
                printf("The 10,001st prime number is: %lu\n", (unsigned long)((i*2) + 1));
            }
        }
    }

    printf("%lu primes below %lu\n", count, (unsigned long)MEMSIZE * 2);

    free(mem);

    return 0;
}
