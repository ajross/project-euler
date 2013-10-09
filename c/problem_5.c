#include "stdio.h"

int main(int argc, char **argv) {
    /* We know this is divisible by 1-10 so start here */
    int num = 2520;
    while (1) {
        /* Looping through the numbers 2-20 makes this
         * about 3 times slower */
        if(num%11!=0 || num%12!=0 || num%13!=0
           || num%14!=0 || num%15!=0 || num%16!=0
           || num%17!=0 || num%18!=0 || num%19!=0
           || num%20!=0) {
            /* The number must be even */
            num +=2;
            continue;
        }
        break;
    }
    printf("The smallest number divisible by all numbers 1-20 is: %d\n", num);

    return 0;
}
