#include "stdio.h"

int main (int argc, char **argv) {
    int limit = 100;
    int sq_sum = (limit * (limit + 1)) / 2;
    sq_sum *= sq_sum;

    int sum_sq = (limit * (limit + 1) * ((2 * limit) + 1)) / 6;

    printf("Sum of squares from 1 to %d is: %d\n", limit, sum_sq);
    printf("Square of sums from 1 to %d is: %d\n", limit, sq_sum);
    printf("Difference is: %d\n", sum_sq - sq_sum);

    return 0;
}
